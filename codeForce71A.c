#include<stdio.h>
#include<string.h>
int main()
{
    int n,size=0,cnt;
    char letter[100];
    scanf("%d",&n);
    while(n--)
    {
        scanf(" %s",&letter);
        size=strlen(letter);
        if(size<=10)
        {
            printf("%s\n",letter);
        }else{
            printf("%c%d%c\n",letter[0],size-2,letter[size-1]);   
        }

    }
}