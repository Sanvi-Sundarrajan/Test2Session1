/* 4.Write a program to find nth number in fibonacci sequence.
Fibonacci sequence consists of 0,1,1,2,3,5,8,13,21........
int input();
int find_fibo(int n);
void output(int n, int fibo);*/
#include<stdio.h>
int input()
{
  int n;
  printf("Enter the nth number \n");
  scanf("%d",&n);
  return n;
}
int find_fibo(int n)
{
   int a=0, b=1, t;
   for(int i=1; i<n; i++)
   {
     t = a+b;
     a = b;
     b = t;
   }
   return a;
}
void output(int n,int fibo)
{
    printf("The fibonacci %dth term is: %d\n",n, fibo);
}

int main()
{
   int n = input();
   int fibo=find_fibo(n);
   output(n,fibo);
   return 0;
}
