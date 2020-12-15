#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include<string.h>

int Asalmi(int sayi)
{
    int i=0;
    for(i=2; i<sayi; i++)
    {
        if(sayi%i==0)
        {
            return 1;
        }
    }
    return 0;
}

int ciftmi(int sayi)
{
    if(sayi%2==0)
    {
        return 1;
    }
    return 0;
}



int main()
{
    int i=0;
    char string[100];

    printf("%-4d(tek )|...^^...|%-4d|..<<.. |%-9.2f|\n",1,0,0.5);

    for (i=2; i<=100; i++)
    {
        int yedek=i;

        if(Asalmi(i)==0)
        {
            sprintf(string, "%-4d(Asal)|...^^...|%-4d| ..>>..|%-9.2f| \n", i, i*i, (float)yedek*yedek);
            printf("%s",string);
        }
        else if(ciftmi(i)==1)
        {
            sprintf(string, "%-4d(Cift)|...><...|%-4d| ..>>..|%-9.2f| \n", i, i*2,  (float)yedek*2.0);
            printf("%s",string);
        }
        else
        {
            sprintf(string, "%-4d(Tek) |...//...|%-4d| ..>>..|%-9.2f| \n", i, i/2,  (float)yedek/2.0);
            printf("%s",string);
        }
    }
    return 0;
}
