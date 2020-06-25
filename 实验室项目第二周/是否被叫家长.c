#include<stdio.h>
int main()
{
  int a,b,c,s;
  scanf("%d %d %d",&a,&b,&c);
  s=(a+b+c)/3;
  if(s>=60)
  printf("NO");
  else
  printf("YES");
 return 0;
}
