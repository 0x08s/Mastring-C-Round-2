#include<stdio.h>
int main (){

// for int + int =====> int     
int a = 2;
int b = 2;
int multi1 = a * b;
printf("multi = %d",multi1);

printf("\n");

// for float + float ========> float
float c = 2.3;
float d = 3.2;

float multi2 = c * d;

printf("multi = %f",multi2);

printf("\n");
// for int + float ==========> float
//(int)(2.06); compliler force fully convert into integer 
int e = (int)(2.06);
printf("e = %d",a);
return 0 ;    
}