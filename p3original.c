/*3. Write a program find whether a given number is a prime number.
int input_number();
int is_prime(int n);
void output(int n, int is_prime);
input:
3
output:
3 is a prime number.*/
#include<stdio.h>
int input_number()
{
  int n;
  printf("Enter the number\n");
  scanf("%d",&n);
  return n;
}
int is_prime(int n)
{
 int count=0, f=1;
  while(f<=n)
    {
      if(n%f==0)
        count++;
        f++;
    }
  if (count>2)
  return 0;
  return 1;

}
void output(int n, int prime)
{
  if(prime==1)
    printf("The number %d is a prime\n",n);
  else
    printf("The number is not prime\n") ;
}
int main ()
{
int n=input_number();
int prime= is_prime(n);
output(n,prime);
return 0;
}


