#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
    int a,b,c,d,cnt=0;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a==b || a==c || a==d) cnt++;
    if(b==c || b==d) cnt++;
    if(c==d) cnt++;
    printf("%d\n",cnt);
}