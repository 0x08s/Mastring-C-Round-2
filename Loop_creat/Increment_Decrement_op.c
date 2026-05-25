#include<stdio.h>
int main(){

int i = 1;

// condition - 1

printf("%d",i++);// "Post Increment" // use i value then increase it 
//means i = 1 then ++ increas it value 2 .it increas the 1 digit
printf("\n");

printf("%d",i);

printf("\n");

// condition -2

printf("%d",++i);// "Pre-Increament" // it increase the value then use it

printf("\n");

printf("%d",i);

printf("\n");

// condition - 3

printf("%d",i--);// " post-Decrement "

printf("\n");

printf("%d",i);

// condition - 4

printf("%d",--i);//  " Pre-Decrement "
printf("\n");
printf("%d",i);

return 0; 

}