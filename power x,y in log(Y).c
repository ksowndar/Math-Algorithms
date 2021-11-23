#include <stdio.h>
int power( int x, unsigned int y)
{
   int res = 1; 
   while(y>0){
      if (y & 1)
      res=res*x;
     y=y>>1;
     x=x*x;
}
return res;
}
int main()
{
int x;
unsigned int y;
scanf("%d %u",&x,&y);
printf ("Power:%d",power(x, y));
return 0;
}
