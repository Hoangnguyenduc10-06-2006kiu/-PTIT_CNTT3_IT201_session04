#include <stdio.h>
#include <stdlib.h>

void check (int n);
void inputValueArr(int *arr, int n);
void searchNumber(int *arr, int n);

int main(void)
{
    //b1: nhap so luong co trong mang (n)
    //b2;kiem tra dk cua  n
    //b3:cap phat bo nho dong
    //b4:nhpa gia tri cho mang
    //b5:tao ham de tim ra cap phan tu doi xung
    //b8:giai phong bo nho va ket thuc truong trinh

    int n;
    printf("moi ban nhap so luong co trong mang:");
    scanf("%d",&n);
    check (n);
    int *arr=(int*)malloc(n*sizeof(int));
    inputValueArr(arr,n);
    searchNumber(arr,n);
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

void searchNumber(int *arr, int n)
{
        int check=0;
    for (int i = 0; i < n/2; i++)
    {
        if (arr[i]==arr[n-1-i])
        {
            printf("cap doi xung:(%d,%d)\n",arr[i],arr[n-1-i]);
            check =1;
        }
    }
    if (check==0)
    {
        printf("khoong co cap phan tu doi xung");
    }
}
