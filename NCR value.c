#include <stdio.h>
#include<math.h>
int gcd(int a,int b){
    if(a==0)
    return b;
    return gcd(b%a,a);
}
int ncr(int n,int r){
    long long p=1,R=1;
    if((n-r)<r)
    r=n-r;
    if (r!=0){
        while(r){
            p*=n;
            R*=r;
           int gcdval=gcd(p,R);
            p/=gcdval;
            R/=gcdval;
            n--;
            r--;
        }
    }
    return p/R;
}
int main()
{
   int n,r;
   scanf("%d%d",&n,&r);
   printf("%d",ncr(n,r));
    return 0;
}
