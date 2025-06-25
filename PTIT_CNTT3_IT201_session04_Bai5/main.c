#include <stdio.h>
#include <stdlib.h>

void check (int n);
void inputValueArr(int *arr, int n);
void bubbleSort(int *arr, int n);
void binarySearch(int *arr, int n);
int main(void)
{
    //b1: nhap so luong co trong mang (n)
    //b2;kiem tra dk cua  n
    //b3:cap phat bo nho dong
    //b4:nhpa gia tri cho mang
    //b5:sap xep lai mang
    //b6:nhap gia tri bat ki
    //b7: dùng tim kiem nhi phan de tim so co ton tai ko va in ra
    //b8:giai phong bo nho va ket thuc truong trinh

    int n;
    printf("moi ban nhap so luong co trong mang:");
    scanf("%d",&n);
    check (n);
    int *arr=(int*)malloc(n*sizeof(int));
    inputValueArr(arr,n);
    bubbleSort(arr,n);
    binarySearch(arr,n);
    free(arr);
    return 0;
}
void check (int n)
{
    if (n<=0)
    {
        printf("so luong co trong mang khong hop le!!!\n");
        exit(0);
    }
}
void inputValueArr(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("moi ban nhap gia tri cho arr[%d]=",i);
        scanf("%d",&arr[i]);
    }
}

void bubbleSort(int *arr, int n)
{
for (int i = 0; i < n-1; i++)
{
    for (int j = 0; j < n-1-i; j++)
    {
        if (arr[j]>arr[j+1])
        {
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }

}

}
void binarySearch(int *arr, int n)
{

    int left=0;
    int right=n-1;
    int numberCheck;
    printf("moi ban nhap gia tri tim kiem trong mang:");
    scanf("%d",&numberCheck);
    while (left<=right)
    {
    int mid=(left+right)/2;
        if (arr[mid]==numberCheck)
        {
            printf("co phan tu trong mang");
            return;
        }else if (arr[mid]< numberCheck)
        {
            left=mid+1;
        }else
        {
            right=mid-1;
        }
    }
    printf("phan tu khong co trong mang");
}

