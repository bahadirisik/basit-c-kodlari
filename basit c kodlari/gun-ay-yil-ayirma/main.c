#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int girilenSayi=0;
    int yil,ay,gun;

    printf("Isin Bitme Suresinin Kac Gun Oldugunu Girin : ");
    scanf("%d",&girilenSayi);

    Hesapla(girilenSayi,&yil,&ay,&gun);

    printf("%d Yil %d Ay %d Gun Surer.",yil,ay,gun);


    return 0;
}

void Hesapla(int GelenSayi,int *yil,int *ay,int *gun){

    *yil = GelenSayi/365;
    *ay = (GelenSayi%365)/30;
    *gun = ((GelenSayi%365)%30);

}
