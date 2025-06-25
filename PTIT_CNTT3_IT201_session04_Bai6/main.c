#include <stdio.h>
#include<string.h>
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
//b4 nhap tu id tim kiem
//b6 so sanh
//b7 in thong tin tim thay
{
    int check=0;
    int findId;
    struct Students student[5];
    for (int i = 0; i < 5; i++)
    {
        printf("moi ban nhap id sinh vien thu %d:",i+1);
        scanf("%d", &student[i].id);
        fflush(stdin);

        printf("moi ban nhap ten sinh vien thu %d:",i+1);
        fgets(student[i].name, sizeof(student[i].name), stdin);
        student[i].name[strcspn(student[i].name,"\n")]='\0';

        printf("moi ban nhap tuoi sinh vien thu %d:",i+1);
        scanf("%d", &student[i].age);

    }
    printf("moi ban nhap id can tim:");
    scanf("%d", &findId);

for (int i = 0; i < 5; i++)
{
    if (findId == student[i].id)
    {
        printf("id: %d\n",student[i].id);
        printf("name: %s\n",student[i].name);
        printf("age: %d\n",student[i].age);
        check = 1;
    }
}
    if (check==0)
    {
        printf("sinh vien khong ton tai");
    }
    return 0;
}