#include<stdio.h>
#include<stdbool.h>
#define ZERO(a, n) do{\
   size_t i_ = 0, n_ = (n);\
   for (; i_ < n_; ++i_)\
     (a)[i_] = 0;\
} while (0)
int main()
{
    int n,disChk[10]={0},res=0;
    scanf("%d",&n);
    for(int i=n+1;;i++)
    {
        int cYear=i;
        ZERO(disChk,10);
        while(cYear>0)
        {
            int rem=cYear%10;
            disChk[rem]++;
            cYear=cYear/10;
        }
        bool isDistinct=true;
        for(int j=0;j<10;j++)
        {
            if(disChk[j]>1)
            {
                isDistinct=false;
            }
        }
        if(isDistinct)
        {
            res=i;
            break;
        }
    }
    printf("%d\n",res);
    
}