#include<stdio.h>
#include<string.h>
#include<math.h>



int main()
{
    int satir,sutun,i,j;
    printf("Satir Sayisini Giriniz : ");
    scanf("%d",&satir);
    printf("Sutun Sayisini Giriniz : ");
    scanf("%d",&sutun);

    for(i=0;i<satir;i++)
    {
        if(i%2==0)
        {
            for(j=1;j<=sutun;j++)
            {
                if(j%2==0)
                    printf("0");
                else
                    printf("1");
            }
        printf("\n");
        }
        if(i%2==1)
        {
            for(j=1;j<=sutun;j++)
            {
                if(j%2==0)
                    printf("1");
                else
                    printf("0");
            }
            printf("\n");
        }
    }

   return 0;
}
