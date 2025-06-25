#include <stdio.h>
#include <stdlib.h>

void check (int n);
void inputValueArr(int *arr, int n);
void searchAndPrintfindex(int *arr, int n,int valueSearchIndex);

int main(void)
{
    //b1: nhap so luong co trong mang (n)
    //b2;kiem tra dk cua  n
    //b3:cap phat bo nho dong
    //b4:nhpa gia tri cho mang
    //b5:nhap gia tri bat ki
    //b6: tao ham tim va in ra chi so cau tat ca lan xuat hien trong mang
    //b8:giai phong bo nho va ket thuc truong trinh

    int n;
    int valueSearchIndex;
    printf("moi ban nhap so luong co trong mang:");
    scanf("%d",&n);
    check (n);
    int *arr=(int*)malloc(n*sizeof(int));
    inputValueArr(arr,n);
printf("moi ban nhap gia tri can tim vi tri:");
    scanf("%d",&valueSearchIndex);
    searchAndPrintfindex(arr,n,valueSearchIndex);

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

void searchAndPrintfindex(int *arr, int n,int valueSearchIndex)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==valueSearchIndex)
        {
            printf("%d ",i);
        }
    }
}
