#include<stdio.h>

int swap(int a,int b){

int tem = a ;
    a = b;
    b = tem;
printf("a = %d,b = %d\n",a,b);
}

void _swap(int *a,int *b){

int temp = *a;
*a = *b;
*b = temp;

}

int main (){

int x = 3;
int y = 5;

printf("x = %d,y = %d\n",x,y);

_swap(&x,&y);

printf("x = %d,y = %d\n",x,y);

return 0;    
}