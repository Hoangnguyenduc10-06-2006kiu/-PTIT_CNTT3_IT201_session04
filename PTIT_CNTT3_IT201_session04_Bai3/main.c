#include <stdio.h>
#include <stdlib.h>


void check(int n);
void inputValueArr(int *arr, int n);
void searchMinNumber(int *arr, int n);
int main(void)
{
    //b1:nhap gia so luong (n)
    //b2:kiem tra n
    //b3:capphat bo nho dong
    //b4:nhap gia tri
    //b5:tao ham de tim
    //b6:giai phong va ket thuc
    int n;
    printf("moi ban nhap so luong phan tu co trong mang: ");
    scanf("%d",&n);
    check(n);

    int *arr =(int*)malloc(n* sizeof(int));

    inputValueArr(arr,n);
    searchMinNumber(arr,n);


    free(arr);
    return 0;
}

void check(int n)
{
    if(n<=0)
    {
        printf("so luong nhap vao mang khong hop le!!!");
        exit(0);
    }
}

void inputValueArr(int *arr, int n)
{
    for(int i=0;i<n;i++)
    {
        printf("moi ban nhap gia tri cho arr[%d]=",i);
        scanf("%d",&arr[i]);
    }
}
void searchMinNumber(int *arr, int n)
{
    int minNumber = arr[0];
    int index;
    for(int i=0;i<n;i++)
    {
        if (minNumber >arr[i])
        {
            index =i;
            minNumber = arr[i];
        }
    }
    printf("gia tri %d nho nhat trong mang co chi so la: %d",minNumber,index);
}