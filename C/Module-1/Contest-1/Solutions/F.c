#include <stdio.h>
#define PI 3.141592653589793
int main(){
double r,area,perimeter;
scanf("%lf",&r);
area = PI*r*r;
perimeter = 2 * PI*r;


printf("%lf %lf\n",area,perimeter);

return 0;

}