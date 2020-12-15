#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int boyut;
    int kontrol;
    int i,j;
    printf("Matrisin boyutunu giriniz : ");
    scanf("%d",&boyut);
    int matris1[boyut][boyut];


    int nilpotentMi();

    srand(time(NULL));

    for(i=0;i<boyut;i++)
    {
        for(j=0;j<boyut;j++)
        {
            matris1[i][j] = rand() % 21 - 11;
        }
    }

    for(i=0;i<boyut;i++)
    {
        for(j=0;j<boyut;j++)
        {
            printf("%d",matris1[i][j]);
            printf("\t");
        }
        printf("\n");
    }

    kontrol = nilpotentMi(boyut,matris1);


    if(kontrol==1)
        printf("Nilpotent");
    else
        printf("Nilpotent Degil");



    return 0;
}


int nilpotentMi(int boyut1,int matris2[][boyut1])
{

    int deger,toplam=0;
    int kontrolMatrisi[boyut1][boyut1];
    for(int i= 0; i<boyut1; i++){
        for(int j = 0; j<boyut1; j++){
            deger = 0;
            for(int k = 0; k<boyut1; k++){
                deger += matris2[i][k]*matris2[k][j];
                }
            kontrolMatrisi[i][j] = deger;
            }

    }

    for (int i=0;i<boyut1;i++){
        for (int j=0;j<boyut1;j++){
            toplam+= kontrolMatrisi[i][j];
        }
    }

    if (toplam==0)
        return 1;
    else
        return 0;
}
