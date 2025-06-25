#include <stdio.h>
#include <string.h>
struct Students
{
    int id;
    char name[50];
    int age;
};
int main(void)
//b1 khai bao cau truc
//b2 khai bao mang gom 5 sinh vien
//b3 nhapthong tin sinh vien
//b4 nhap tu khoa tim kiem
//b5 chuyen ten tung sv va tu khoa can tim sang chu thuong
//b6 so sanh
//b7 in thong tin tim thay
{
    struct Students student[5];
    for (int i = 0; i < 5; i++)
    {
        printf('moi ban nhapten sinh vien:');
        fgets(name,sizeof name,stdin);
        name[strcspn(name,"\n")]='\0';

    }
    return 0;
}