#include<stdio.h>
int main()
{
  char x;
  int a,b;
  printf("Enter a symbol:\n");
  scanf("%c",&x);
  printf("Enter value of a:\n");
  scanf("%d",&a);
  printf("Enter value of b:");
  scanf("%d",&b);
  if(x=='+')
  {
    printf("sum of two numbers is:%d",a+b);
  }
  else if(x=='-')
  {
    printf("Difference of two numbers is:%d",a-b);
  }
  else if(x=='*')
  {
    printf("Multiplication of two numbers is:%d",a*b);
  }
  else if(x=='/')
  {
    printf("Division of two numbers is:%d",a/b);
  }
  else
  {
    printf("Modulo of two numbers is:%d",a%b);
  }
  return 0;
}
