#include<stdio.h>
#include<string.h>
#include<math.h>



int main()
{
    int sayi,yedek=0,a;

    printf("Bir Sayi Giriniz :");
    scanf("%d",&sayi);

    while(1)
    {
       a=sayi%10;
       sayi/=10;
       yedek =(yedek*10) + a;
       if(sayi==0)
       {
           break;
       }
    }
    printf("Sayinin Tersi: %d",yedek);

   return 0;
}
