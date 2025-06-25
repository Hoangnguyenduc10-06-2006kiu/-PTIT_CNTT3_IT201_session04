#include <stdio.h>
#include <stdlib.h>

void check(int n);
void inputValueArr(int *arr,int n);
void searchAndPrint(int *arr,int n,int numberSearch);
int main(void)
{
//b1:nhap gia so luong (n)
//b2:kiem tra n
//b3:capphat bo nho dong
//b4:nhap gia tri
//b5:tao ham de tim
//b6:giai phong va ket thuc
    int n;
    int numberSearch;

    printf("moi nhap vao so luong phan tu co trong mang:");
    scanf("%d",&n);
    check(n);
    int *arr =(int*)malloc(n*sizeof(int));
    inputValueArr(arr,n);

    printf("moi ban nhap gia tri can tim trong mang");
    scanf("%d",&numberSearch);

    searchAndPrint(arr,n,numberSearch);
    free(arr);

    return 0;
}
void check(int n)
{
    if (n <=0)
    {
        printf("so luong phan tu nhap vao khong hop le");
        exit(0);
    }
}
void inputValueArr(int *arr,int n)
{
    for (int i=0;i<n;i++)
    {
        printf("moi ban nhap gia tri cho arr[%d]=",i);
        scanf("%d",&arr[i]);
    }
}
void searchAndPrint(int *arr,int n,int numberSearch)
{

    for (int i=0;i<n;i++)
    {
        if (arr[i]==numberSearch)
        {
            printf("chi so cua so %d trong mang la %d",numberSearch,i);
            return;
        }
    }
    printf("khong tim thay phan tu!!");
}
