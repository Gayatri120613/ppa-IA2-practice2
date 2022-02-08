#include<stdio.h>
void input(float *base, float *height)
{
  printf("the length of the base is\n");
  scanf("%f",base);
  printf("the length of the height is\n");
  scanf("%f",height);
}
void find_area(float base, float height, float *area)
{
  *area=((base*height)/2);
}
void output(float base, float height, float area)
{
  printf("the area of triangle with base %f and height %f is %f",base,height,area);
}
int main()
{
  float base, height, area;
  input(&base,&height);
  find_area(base,height,&area);
  output(base,height,area);
  return 0;
}
