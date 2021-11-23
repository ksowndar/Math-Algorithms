#include <stdio.h>
#include<math.h>

int main()
{
  int n,k=0;
  scanf("%d",&n);
  int prime[100];
  for(int i=2;i<=sqrt(n);i++){
     while(n%i==0){
     n/=i;
     prime[k++]=i;
     }
  }
  if(n>1)
  prime[k++]=n;
  for(int i=0;i<k;i++)
  printf("%d ",prime[i]);
    return 0;
}
