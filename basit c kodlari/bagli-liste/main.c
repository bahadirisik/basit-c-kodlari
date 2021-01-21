#include <stdio.h>
#include <conio.h>
#include <string.h>
struct node
{
    int data;
    char kelime[20];
    struct node *next;
    struct node *prev;
};

struct node *ilk=NULL, *son=NULL;

void SonaEkle(char kelime[20],int a)
{
    struct node *yeni = (struct node*) malloc(sizeof(struct node));
    yeni->data=a;
    int i;

    for(i=0;i<strlen(kelime);i++)
    {
        yeni->kelime[i]=kelime[i];
    }
    yeni->kelime[i]='\0';


    if(ilk==NULL)
    {
        ilk=yeni;
        son=yeni;
        son->next=NULL;
        ilk->prev=NULL;
    }
    else
    {
        son->next=yeni;
        yeni->prev=son;
        yeni->next=NULL;
        son=yeni;

    }
}
void BasaEkle(char kelime[20],int a)
{
    struct node *yeni = (struct node*) malloc(sizeof(struct node));
    yeni->data=a;
    int i;

    for(i=0;i<strlen(kelime);i++)
    {
        yeni->kelime[i]=kelime[i];
    }
    yeni->kelime[i]='\0';


    if(ilk==NULL)
    {
        ilk=yeni;
        son=yeni;
        son->next=NULL;
        ilk->prev=NULL;
    }
    else
    {
        yeni->prev=NULL;
        yeni->next=ilk;
        ilk->prev=yeni;
        ilk=yeni;
    }
}
void arayaEkle(struct node *onu,char kelime[20],int a)
{
     struct node *yeni = (struct node*) malloc(sizeof(struct node));
      yeni->data=a;
      int i;

    for(i=0;i<strlen(kelime);i++)
    {
        yeni->kelime[i]=kelime[i];
    }
     yeni->kelime[i]='\0';


    onu->prev->next=yeni;
    yeni->prev=onu->prev;
    yeni->next=onu;
    onu->prev=yeni;



}


int varmi(char kelime[20])
{
  struct node *k=ilk;
  int i;

   while(k!=NULL)
    {
        if(!strcmp(k->kelime,kelime))
        {
            return 1;
        }
        k=k->next;
    }

    return 0;

}
void ata(char kelime[20],int a)
{
    struct node *c=ilk;
    if(ilk==NULL)
{
        SonaEkle(kelime,a);
}
    else
{
    if(a>=ilk->data)
    {
        BasaEkle(kelime,a);
    }
    else if(a<=son->data)
    {
        SonaEkle(kelime,a);
    }
    else if(a<ilk->data&&a>son->data)
    {
       while(c != NULL)
       {
           if(a>=c->data)
           {
               break;
           }
           c=c->next;

       }
       arayaEkle(c,kelime,a);
    }

}



}
void Listele()
{
    struct node *liste=ilk;
    while(liste->next!=NULL)
    {
        printf("%s=%d\n",liste->kelime,liste->data);
        liste=liste->next;
    }
    printf("%s=%d\n",liste->kelime,liste->data);
}


void kelime(FILE *fptr,FILE *fptr2,char keyword[])
{
    int a;
    while(!feof(fptr2))
    {
       fscanf(fptr2,"%s",keyword);
       a=kelimesayisi(fptr,keyword);
       if(varmi(keyword))
       {

           continue;
       }
       else
       {

           ata(keyword,a);
       }
    }

}

int kelimesayisi(FILE *fptr, char keyword[])
{
    fseek(fptr,0,SEEK_SET);
    int kacKeywordVar = 0;
    int i = 0;
    char temp;
    char keyword2[20];

    while(!feof(fptr))
    {

             fscanf(fptr,"%s",keyword2);
             if(!strcmp(keyword,keyword2))
             {
                 kacKeywordVar++;
             }

    }

    return kacKeywordVar;
    }


int main(void)
{
    FILE *fptr;
    char keyword[20];
    FILE *fptr2;

    fptr = fopen("file.txt", "r");
    fptr2 = fopen("file.txt", "r");
    kelime(fptr,fptr2,keyword);
    Listele();

    fclose(fptr);
    fclose(fptr2);

     return 0;
}
