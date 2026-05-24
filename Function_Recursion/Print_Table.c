#include<stdio.h>

int variable(){
int n;
printf("enter your number");
scanf("%d",&n);

int i = 1;    

for(i = 1;i<=10;i++){

printf("%d",i*n);

}
return 0;
}


int main(){


variable();


return 0;    
}