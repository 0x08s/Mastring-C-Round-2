#include<stdio.h>
int main (){

/// ATM Machine sysytem 

int pin_code , balance ,withdrawal_amount;

printf("Enter your pin_code = ");
scanf("%d",&pin_code);

if(pin_code == 1234){

 printf("Enter your balance =");
 scanf("%d",&balance);

if(balance > 1000){

 printf("Enter your withdrawal_amount =");
 scanf("%d",&withdrawal_amount);

if (withdrawal_amount < balance){

printf("Transaction Successful");

}

else{

printf("Insufficiant balance");

}

}
else{

printf("Minimum Blance Required");

}

}
else {

printf("Invalid PIN");

}

return 0 ;    
}
