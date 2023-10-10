#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

typedef struct SinhVien
{
  int Student_ID;
  char Full_name[30];
  char Sex[10];
  float Progress_test;
  float Assignment;
  float Workshop;
  float Practical_Exam;
  float Final_Exam;
}SV;

int n;
SV SinhVien[50];

int Menu()
{
	printf("-------MENU------\n");
	printf("1.Nhap danh sach\n");
	printf("2.Them danh sach\n");
	printf("3.Xoa danh sach\n");
	printf("4.In danh sach\n");
	printf("5.Thoat\n");
	printf("Ban chon:");
    int a;
    scanf("%d", &a);
    return a;
}
void Nhapdanhsach(){
	printf("So sinh vien:");
	scanf("%d", &n);
    int i;
    for( i=0;i<n;i++)
  {
  	printf("Sinh vien thu %d:\n", i+1);
  	printf("Student_ID:");
  	scanf("%d", &SinhVien[i].Student_ID);
  	printf("Full_name:");
  	scanf("%s", SinhVien[i].Full_name);
  	while (getchar() != '\n');
    printf("Sex:");
    scanf("%s", SinhVien[i].Sex);
    while (getchar() != '\n');
    printf("Progress_test:");
    scanf("%f", &SinhVien[i].Progress_test);
    printf("Assignment:");
    scanf("%f", &SinhVien[i].Assignment);
    printf("Workshop:");
    scanf("%f", &SinhVien[i].Workshop);
    printf("Practical_Exam:");
    scanf("%f", &SinhVien[i].Practical_Exam);
    printf("Final_Exam:");
    scanf("%f", &SinhVien[i].Final_Exam);
  }
}

void Themsinhvien()
{
	printf("Student_ID:");
  	scanf("%d", &SinhVien[n].Student_ID);
  	printf("Full_name:");
  	scanf("%s", SinhVien[n].Full_name);
  	while (getchar() != '\n');
    printf("Sex:");
    scanf("%s", SinhVien[n].Sex);
    while (getchar() != '\n');
    printf("Progress_test:");
    scanf("%f", &SinhVien[n].Progress_test);
    printf("Assignment:");
    scanf("%f", &SinhVien[n].Assignment);
    printf("Workshop:");
    scanf("%f", &SinhVien[n].Workshop);
    printf("Practical_Exam:");
    scanf("%f", &SinhVien[n].Practical_Exam);
    printf("Final_Exam:");
    scanf("%f", &SinhVien[n].Final_Exam);
    n++;
}

void Xoadanhsach(){
    int m, i;
    printf("Nhap vao ID sinh vien muon xoa:");
    scanf("%d", &m);
    for(i=0;i<n;i++)
    {
        if(SinhVien.Student_ID == m)
        n--
    }
    printf("Da xoa sinh vien co ID = %d ra khoi danh sach", m);
    if(SinhVien[i].Progress_test > 0 && SinhVien[i].Assignment > 0 && SinhVien[i].Workshop > 0 && SinhVien[i].Final_Exam >=4 && SinhVien[i].Practical_Exam > 0 && SinhVien[i].Result >=5)
    SinhVien[i].status = "completed";
    else SinhVien[i].status = "incompleted";
	
}
int main()
{
	int a;
	while(a != 5)
	{
	 a = Menu();
	switch(a)
	{
		case 1:
			Nhapdanhsach();
			break;
		case 2:
			Themsinhvien();
			break;
        case 3:
            Xoadanhsach();
	}
    }
    return 0;
}