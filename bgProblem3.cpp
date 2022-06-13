#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
    string a,b;
    int cnt=0;
    cin>>a;
    for(int i=0;i<a.size();i++)
    {
        if(b.empty())
        {
            b+=a[i];
        }else{
            int flag=0;
            for(int j=0;j<b.size();j++)
            {
                if(a[i]!=b[j])
                {
                    flag++;
                }
            }
            if(flag==b.size())
            {
                b+=a[i];
            }
        }
    }
    cnt=b.size();
    if(cnt%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }else{
        cout<<"IGNORE HIM!"<<endl;
    }
    
}