#include <stdio.h> //header standar c
#include <conio.h>
//gausa make std

int main()
{
    char nama[50];
    int nim;
    char kom[2];
    float ip;

    printf("hello world\n");
    printf("masukkan nama: ");
    gets(nama); //gets --> get string

    printf("masukkan nim: ");
    scanf("%d", &nim); 

    getchar(); //ini gimana tadi krg paham

    printf("masukkan kom: ");
    gets(kom);

    printf("masukkan ip: ");
    scanf("%f", &ip);

    //ini untuk output//
    printf("nama : ");
    puts(nama); //put string; untuk strinf dalam bentuk array char

    printf("NIM: %d\n", nim);

    printf("KOM: "); puts(kom);
    printf("IP: %f\n", ip);

    printf("press any button to continue...");
    getch();
}