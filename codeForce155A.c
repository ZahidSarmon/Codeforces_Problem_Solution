#include<stdio.h>
#include<stdbool.h>
int main()
{
    int n,res=0;
    scanf("%d",&n);
    int number[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&number[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(i==0) continue;
        bool isMax=true,isMin=true;
        for(int j=0;j<i;j++)
        {
            if(number[j]<=number[i]) isMin=false;
            if(number[j]>=number[i]) isMax=false;
        }
        if(isMax || isMin) res++;

    }
    printf("%d\n",res);
}