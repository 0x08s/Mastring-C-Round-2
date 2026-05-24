#include<stdio.h>
int main(){

int i = 5;
int *ptr = &i;
printf("%d\n",*ptr); 
int **pptr = &ptr;
printf("%d",**pptr);

return 0;    
}