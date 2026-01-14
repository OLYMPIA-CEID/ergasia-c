#include<stdio.h>
#include<string.h>

#define maxlen 50

int arEmf(char *word[maxlen], int len);

int main()
{

char word[maxlen];
int len;
int i , j;

printf("Dwse ena alafarithmitiko:\n");
    scanf("%s", word);

    len = strlen(word);

    arEmf(&word, len);

    return 0;
}

int arEmf(char *word[maxlen], int len)
{
    int i , j;

    for(i=0; i<len; i++)
    {
        char key=word[i];
        int count = 0;
        int flag = 0;

        for (j=0; j<i; j++) /*elegxos an o xaraktiras exei jana emfanisti prin*/
        {
            if (key == word[j])
                flag = 1;
        }
        if (flag == 0)
        {
           for (j=0; j<len; j++)
          {
             if(key == word[j])
             {
                 count++;
             }
          }
        }
        return count;
    }

}
