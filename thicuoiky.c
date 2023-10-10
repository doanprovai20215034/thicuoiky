#include <stdio.h>
#include <stdlib.h>
#include <string.h>�
typedef struct profile {
��� char biensoxe[13];�
��� int gio;
��� int phut;
��� int giay;
��� int ngay;
��� int thang;
��� int nam;
��� int xelayra;�1
��� struct profile *next;
} profile;
�profile *first = NULL, *last = NULL;�
profile *makeProfile(char *biensoxe, int gio, int phut, int giay, int ngay, int thang, int nam, int xelayra) {
��� profile *node = (profile *)malloc(sizeof(profile));
��� strcpy(node->biensoxe, biensoxe);
��� node->gio = gio;
��� node->phut = phut;
��� node->giay = giay;
��� node->ngay = ngay;
��� node->thang = thang;
��� node->nam = nam;
��� node->xelayra = xelayra;
��� node->next = NULL;
��� return node;
}�
void insertLast(char *biensoxe, int gio, int phut, int giay, int ngay, int thang, int nam, int xelayra) {
��� profile *profile = makeProfile(biensoxe, gio, phut, giay, ngay, thang, nam, xelayra);
��� if (first == NULL && last == NULL) {
������� first = profile;
������� last = profile;
��� } else {
������� last->next = profile;
������� last = profile;
��� }
}�
void processLoad() {
��� char tenFile[256] = "log_input.txt";
��� FILE *f = fopen(tenFile, "r");
��� if (f == NULL) {
������� printf("Khong tim thay tep tin %s\n", tenFile);
������� return;
��� }���� while (!feof(f)) {
������� char biensoxe[13];
������� int gio, phut, giay, ngay, thang, nam, xelayra;
������� int n = fscanf(f, "%d-%d-%d %d:%d:%d %s %d", &nam, &thang, &ngay, &gio, &phut, &giay, biensoxe, &xelayra);
������� if (n == 8) {�
����������� insertLast(biensoxe, gio, phut, giay, ngay, thang, nam, xelayra);
������� }
��� }���� fclose(f);
}�
void printProfile(profile *node) {
��� printf("%04d-%02d-%02d %02d:%02d:%02d %s %d\n", node->nam, node->thang, node->ngay, node->gio, node->phut, node->giay, node->biensoxe, node->xelayra);
}
void processDisplay() {
profile *node = first;
while (node != NULL) {
printProfile(node);
node = node->next;
}
}�void Xetrongngay(){
��� profile* p;
��� int count = 0;
��� int ngay, thang, nam;
��� printf("Nhap vao ngay can tim: (vi du: 2021-02-12)\n");
��� scanf("%d-%d-%d", &nam, &thang, &ngay);
��� for(p = first; p!= NULL; p=p->next){
������� if(p->nam == nam && p->thang == thang && p->ngay == ngay){
����������� printf("Bien so \t Thoi gian gui \n");
����������� printf("%s \t %d-%d-%d %d:%d:%d\n", p->biensoxe,p->nam, p-thang,p->ngay,p->gio,p->phut,p->giay);
����������� count++;
������� }���� }
��� if(count == 0) printf("Khong co xe gui trong ngay do\n");
}��
int main(){
��� printf("====================Menu================");
��� printf("\nVui long chon 1 trong cac chuc nang sau\n");
��� printf("[1] Doc du lieu tu file log\n");
��� printf("[2] Tra cuu so luong xe gui/lay theo ngay trong qua khu\n");
��� printf("[3] Thong tin cac xe trong bai hien tai\n");
��� printf("[4] Gui them xe moi\n");
��� printf("[5] Tra xe\n");
��� printf("[6] Cap nhap log du lieu\n");
��� printf("[7] Luu danh sach xe dang co trong bai ra file\n");
��� while(1){
��� printf("Vui long nhap tu 1 den 6: ");
��� int ch;
��� scanf("%d" , &ch);
��� if(ch == 1){    
��� processLoad();
��� processDisplay();
}
else if(ch == 2){
��� Xetrongngay();
}�
}�}
