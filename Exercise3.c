#include <stdio.h>
int main() {
float length;
float width;
float  area = length*width;
printf("enter length\n");
scanf("%f", &length);
printf("enter width\n");
scanf("%f", &width);
printf("area of a rectangle = %.2f\n", area);
return 0;
}
