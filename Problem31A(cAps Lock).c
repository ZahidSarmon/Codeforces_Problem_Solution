#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<stdbool.h>
#define it(x) scanf("%d",&x);
#define st(x) scanf("%s",&x);
int main()
{
    char arr[100],u;
    st(arr);
    bool lower=true;
    for(int i=1;i<strlen(arr);i++)
    {
        if(islower(arr[i]))
        {
            lower=false;
        }
    }
    if(lower)
    {
        for(int j = 0; j < strlen(arr); j++)
        {
            if(islower(arr[j]))
                u = toupper(arr[j]);
            else
                u = tolower(arr[j]);
            printf("%c",u);
        }
    }else{
        printf("%s",arr);
    }
}