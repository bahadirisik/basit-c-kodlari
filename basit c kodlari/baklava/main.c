#include<stdio.h>
#include<string.h>
#include<math.h>



int main()
{
    int sayi,i,j,k,m;

    printf("Pozitif Bir Sayi Giriniz : ");
    scanf("%d",&sayi);
    k=sayi;
    m=sayi;

    for(i=1;i<=sayi;i++)
    {
        for(j=1;j<=k-1;j++)
            printf(" ");
        for(j=1;j<=i*2-1;j++)
            printf("*");
        k--;
        printf("\n");
    }
    for(i=1;i<=sayi-1;i++)
    {
        for(j=1;j<=k+1;j++)
            printf(" ");
        for(j=1;j<=(m-1)*2-1;j++)
            printf("*");
        k++;
        m--;
        printf("\n");

    }

   return 0;
}
