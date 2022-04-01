/*5. Write a program to find all the prime numbers between erotosthenes sieve method.
int input_array_size();
void init_array(int n, int a[n];
void erotosthenes_sieve(int n, int a[n]);
void out_put(int n, int a[n]);
input:
100
output:
2,3,7,11,13,19,23,29,31,...

*/
#include <stdio.h>

int input_array_size()
{
  int n;
  printf("Enter the number till which you want to find the prime numbers\n");
  scanf("%d", &n);
  return n + 1;
}

void init_array(int n, int a[n])
{
  a[0] = 0;
  a[1] = 0;
  for (int i = 2; i<= n; i++)
    {
      a[i] = i;
    }
}

void ets(int n, int a[n])
{
  for (int i = 2; i < n; i++)
    {
        for (int k = i + i; k < n && a[i]; k += i)
          {
            a[k] = 0;
          }
    }
}

void output(int n, int a[n])
{
  for (int i = 0; i < n - 1; i++)
    {
      if (a[i])
        printf("%d,", a[i]);
    }
  if (a[n-1])
    printf("%d\n", a[n-1]);
  else
    printf("\n");
}

int main()
{
  int n = input_array_size();
  int a[n];
  init_array(n, a);
  ets(n, a);
  output(n,a);
  return 0;
}
}