#include<stdio.h>
int main(){

int age ;
printf("Enter your age = ");
scanf("%d",&age);

// condition using the else_if condition

if(age > 18){

printf("Adult \n");

}
else if(age > 13 && age < 18){

printf("Not drive and less age");

}
else {

printf("child");

}

return 0;    
}