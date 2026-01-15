#include<stdio.h>
#include<string.h>

#define M 20
#define N 3

typedef struct
{
   char title[M] ;
   float price;
}book;

void searchTitle(book library[N],char searchname[]);
int main()
{
    int i;
    char searchname[M];
    book library[N];

    for (i=0; i<N; i++)
    {
        scanf(" %19[^\n]", library[i].title);
        getchar();

        do
        {
            scanf("%f", &library[i].price);
            getchar();

        }while(library[i].price <= 0);
    }
    printf("Dwse to onoma enos biblou gia anazhthsh");
    scanf(" %19[^\n]",searchname);

    searchTitle(library,searchname);
    return 0;
}

void searchTitle( book library[N],char searchname[])
{
    int i;
    int cnt=0;
    float min=1e9;
    float max= -1;

    for(i=0; i<N; i++)
    {
        if (strcmp(library[i].title,searchname) == 0)
          {
              cnt++;
              if (library[i].price < min)
                min = library[i].price;
              if(library[i].price > max)
                max = library[i].price;
          }
    }
if (cnt != 0)
 {
    printf("O arithmos twn bibliwn me ayto to onoma einai: %d",cnt);
    printf("To pio oikonomiko apo auta kostizei %.2f",min);
    printf("To pio akrivo apo auta kostizei %.2f",max);
 }
}
