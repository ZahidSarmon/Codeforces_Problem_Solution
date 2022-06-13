#include<bits/stdc++.h>
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>1)
    {   
        int number[n];
        for(int i=1;i<=n;i++)
        {
            number[i-1]=i;
        }
        for(int i=0;i<n-1;i+=2)
        {
            int temp=number[i];
            number[i]=number[i+1];
            number[i+1]=temp;
        }
        for(int i=0;i<n;i++)
        {
            printf("%d ",number[i]);
        }
        printf("\n");
    }else
    {
        printf("%d\n",-1);
    }
}