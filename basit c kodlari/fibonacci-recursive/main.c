#include<stdio.h>
#include<string.h>
#include<math.h>

int fibbonacci(int a)
{
   if(a==0)
    return 0;
   else if(a==1)
    return 1;

   return fibbonacci(a-1)+fibbonacci(a-2);
}



int main()
{
    int sayi,i;
    printf("Kac elemanli? : ");
    scanf("%d",&sayi);

    for(i=0;i<sayi;i++)
    {
        printf("%d ",fibbonacci(i));
    }


   return 0;
}
