#include<stdio.h>
int main()
{
  int a,n;
  int b=0;
  int c=0;
  scanf("%d",&n);
  for(a=1;a<=n;a++)
  {
    if(a%2==0)
      b++;
    else
      c++;
  }
  printf("%d %d",c,b);
}
