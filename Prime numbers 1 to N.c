#include <stdio.h>
#include<math.h>

int main()
{
  int n,c=0;
  scanf("%d",&n);
  int prime[100];
  for(int i=2;i<=n;i++){
      for(int j=2;j<=sqrt(i);j++){
          if(i%j==0)
          goto abc;
      }
      prime[c]=i;
      c++;
      abc:
      continue;
      
  }
  for(int i=0;i<c;i++)
  printf("%d ",prime[i]);
    return 0;
