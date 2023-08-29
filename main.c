#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int tagihan;
    float tip,total = 0;
    char lanjut;
    do{
    printf("Masukkan tagihan: ");
    scanf("%d", &tagihan);
    if(tagihan >=50 && tagihan <=300){
        tip = (tagihan * 0.15);
    }
    else{
        tip = (tagihan * 0.2);
    }
    total = tagihan +tip;
    printf("Tagihannya %d, tipnya %.2f, dan total nilainya %.2f\n",tagihan,tip, total);
     printf("Apakah ingin menghitung total lagi? (y/n)");
    scanf(" %c", &lanjut);
    }
    while(lanjut == 'y');
   
}