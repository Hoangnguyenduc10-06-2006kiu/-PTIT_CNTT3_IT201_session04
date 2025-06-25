#include <stdio.h>
#include <stdlib.h>

void check(int n);
void inputValueArr(int *arr,int n);
void searchAndPrint(int *arr,int n,int numberSearch);
int main(void)
{
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
int index;
    int check=0;
    for (int i=0;i<n;i++)
    {
        if (arr[i]==numberSearch)
        {
            index=i;
            numberSearch=arr[i];
            check=1;
        }
    }
           if (check==1)
           {
               printf("chi so cua so %d trong mang la %d",numberSearch,index);
           }else
           {
               printf("khong tim thay phan tu!!!");
           }
}
