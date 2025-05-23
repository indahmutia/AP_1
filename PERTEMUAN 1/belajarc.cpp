#include <stdio.h> // header untuk bahasa c
#include <conio.h> // untuk fungsi getch()

int main () {
    char nama[50];
    int nim;
    char kom[2];
    float ip;

    printf("hello world\n"); 
    
    printf("maasukkan nama : ");
    gets(nama);

    printf("masukkan nim : ");
    scanf("%d",&nim);

    getchar();

    printf("masukkan kom : ");
    gets(kom);

    printf("masukkan ip : ");
    scanf("%f, &ip");

    /* untuk output */
    printf("nama : ");
    puts(nama);// put string digunakan untuk string dalma bentuk array char

    printf("nim : %d\n",nim);

    printf("kom : ");
    puts(kom);
    printf("ip : %f\n",ip);

    printf("press any button to continue...");
    getch();

}