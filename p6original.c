/* Write a program to find the index of a substring of a string.
void input_string(char *a);
int str_reverse(char *string, char *substring);
void output(char *string, char *substring, int index); */
#include<stdio.h>
void input_string(char *s1,char *s2)
{
  printf("Enter the string and substring \n");
  scanf("%s%s",s1,s2);
}
int string_lenght(char *s)
{
  int i;
  for(i=0;s[i]!='\0';i++);
  return i;
}

int string_ncmp(char *s1,char *s2)
{
    int i, n;    
  for(i=0; i<n-1 && s1[i]==s2[i] && s1[i] != '\0';i++);
  return s1[i] - s2[i];
}

int string_index(char *s1, char *s2)
{
  int l1=string_lenght(s1);
  int l2=string_lenght(s2);
  if (l1 < l2)
      return -1;
  for(int i=0;i<l1-l2;i++)
    if (string_ncmp(s1,s2))
      return i;
  return -1;
}
void output(char *s1,char *s2, int index)
{
    printf("The the index of the substring is %d",index);
}
int main()
{
    char s1[100],s2[100];
    input_string(s1,s2);
    int index=string_index(s1,s2);
    output(s1,s2,index);
    return 0;
    
    
    
}
