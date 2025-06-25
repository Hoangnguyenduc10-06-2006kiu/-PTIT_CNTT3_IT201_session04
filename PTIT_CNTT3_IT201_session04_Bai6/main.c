#include <stdio.h>
#include <stdlib.h>

void check (int n);
void inputValueArr(int *arr, int n);

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

