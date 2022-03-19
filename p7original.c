/*7. Write a program to find the length of a line.
struct _point {
float x,y;
};
typedef struct _point Point;
struct _line
{
Point p1,p2;
float distance;
};
typedef struct _line Line
Point input_point();
Line input_line();
void find_length(Line *l);
void output(Line l);*/
#include<stdio.h>
#include<math.h>
struct _point 
{
float x,y;
};
typedef struct _point Point;
struct _line
{
Point p1,p2;
float distance;
};
typedef struct _line Line;
Point input_point()
{
  Point p;
  printf("Enter the coordinates of the point\n");
  scanf("%f%f",&p.x,&p.y);
  return p;
}
Line input_line()
{
  Line l;
  l.p1=input_point();
  l.p2=input_point();
  return l;

}
void find_length(Line *l)
{
  l->distance=sqrt(((l->p2.x-l->p1.x)*(l->p2.x-l->p1.x))+((l->p2.y-l->p1.y)*(l->p2.y-l->p1.y)));
  
}
void output(Line l)
{
  printf("The distance between point (%f,%f) and (%f,%f) is %f \n",l.p1.x,l.p1.y,l.p2.x,l.p2.y,l.distance);
}
int main()
{
  Line l;
  l=input_line();
  find_length(&l);
  output(l);
  return 0;
}
}
void find_length(Line *l)
{
  l->distance=sqrt(((l->p2.x-l->p1.x)*(l->p2.x-l->p1.x))+((l->p2.y-l->p1.y)*(l->p2.y-l->p1.y)));
  
}
void output(Line l)
{
  printf("The distance between point (%f,%f) and (%f,%f) is %f \n",l.p1.x,l.p1,y,l.p2.x,l.p2,y,l.distance);
}
int main()
{
  Line l;
  l=input_line();
  find_length(&l);
  output(l);
  return 0;
}