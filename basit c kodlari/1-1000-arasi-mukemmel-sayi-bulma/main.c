#include<stdio.h>
#include<string.h>
#include<math.h>
//m�kemmel sayi kendisi hari� b�lenleri toplam�na e�it olan sayidir.

int main()
{
    int i,j,toplam=0;
    printf("1 ile 100 arasindaki mukemmel sayilar : ");
    for(i=1;i<=1000;i++)
    {
        for(j=1;j<i;j++)
        {
           if(i%j==0)
           {
               toplam+=j;
           }
        }
        if(toplam==i)
            printf("\n%d",i);
        toplam=0;
    }




   return 0;
}
