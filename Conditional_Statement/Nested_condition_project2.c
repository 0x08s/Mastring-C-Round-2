#include<stdio.h>
int main (){

int age_patient;
printf("Enter your age_patient = ");
scanf("%d",&age_patient);

int fever ;
printf("Enter your fever = ");
scanf("%d",&fever);
switch(age_patient){

case 1:

if(age_patient > 60){

printf("immediate ICU transfer");

}
else{

printf("Emergency Ward");

}

case 2:

if(fever > 102){

printf("Doctor checkup Required");

}

else {

printf("Tke Rest at Home");

}

}
return 0;    
}