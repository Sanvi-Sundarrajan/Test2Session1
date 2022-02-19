/*2. Write a program to find whether the three lines form a triangle.
void input_line(float *x1, float *y1);
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
void output(float x1, float y1, float x2, float y2,float x3, float y3, int istriangle)
*/
#include<stdio.h>
void input_line(float *x1, float *y1, float *x2, float *y2,float *x3, float *y3)
{
  printf("Enter the coordinates\n");
  scanf("%f%f%f%f%f%f",x1,y1,x2,y2,x3,y3);
}
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
float area=  0.5*(x1*(y2-y3 )+x2*(y3-y1 )+x3*(y1-y2));
  if(area>0)
    return 1;
  return 0;  
}
void output(int is_triangle)
{
  if(is_triangle)
  printf("Three lines form a triangle\n");
  else
  printf("Three lines do not form a triangle\n");
}
int main()
{
  float x1,x2,x3,y1,y2,y3;
  input_line(&x1,&y1,&x2,&y2,&x3,&y3);
  int triangle=is_triangle(x1,y1,x2,y2,x3,y3);
  output(triangle);
  return 0;

}