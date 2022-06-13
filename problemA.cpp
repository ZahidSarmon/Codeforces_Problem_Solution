#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
    int n,a,b,c,cnt=0;
    scanf("%d",&n);
    while (n--)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(a==1 && b==1 && c==1)
        {
            cnt++;
        }else if(a==1 && b==1)
        {
            cnt++;
        }else if(a==1 && c==1)
        {
            cnt++;
        }else if(b==1 && c==1)
        {
            cnt++;
        }
        
    }
    printf("%d\n",cnt);
    
}