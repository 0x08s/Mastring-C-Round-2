#include<stdio.h>

int _swap(int *a,int *b){

int temp = *a;
*a = *b;
*b = temp;

}

int main (){

int x = 10;
int y = 20;

_swap(&x,&y);
printf("x = %d,y = %d",x ,y);

return 0;    
}