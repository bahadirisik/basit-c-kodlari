#include<stdio.h>
#include<string.h>
#include<math.h>

int FaktoriyelToplam(int x,int y)
{
    int toplam=0,faktoriyel=1,i,j,a;
    a=x;

    printf("Faktoriyel Degerleri : 1 +");
    for(i=1;i<=y-1;i++)
    {
        for(j=1;j<=x;j++)
        {
            faktoriyel*=j;
        }
        printf(" %d+",faktoriyel);
        toplam+=faktoriyel;
        faktoriyel=1;
        x=x+a;
    }
    return toplam;
}

int main()
{
    int a,b,c;
    //A degeri artis miktari,b degeri kac faktoriyel alinacagidir.
    //a=2,b=5 icin ==> Faktoriyel Degerleri = 0! + 2! + 4! + 6! + 8!,Toplam Degeri = 41067

    printf("A degerini Girin : ");
    scanf("%d",&a);
    printf("B degerini Girin : ");
    scanf("%d",&b);

    c=FaktoriyelToplam(a,b);
    printf("\nToplam Degeri : %d",c+1);


   return 0;
}
