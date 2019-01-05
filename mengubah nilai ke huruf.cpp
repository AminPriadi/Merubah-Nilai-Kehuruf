#include<stdio.h>
#include<conio.h>

int tukar(int nilai);
int main()
{
    int nilai;
    printf("masukan nilai angka 1 sampai 4 = ");
    scanf("%d",&nilai);
    tukar(nilai);
    getch();
}
int tukar(int nilai)
{
    switch(nilai)
    {
        case 1:
        printf("huruf A");break;
        case 2:
        printf("huruf B");break;
        case 3:
        printf("huruf C");break;
        case 4:
        printf("huruf D");break;
        default:
        printf("nilai yang anda masukan salah");
    }
    return 0;
}
