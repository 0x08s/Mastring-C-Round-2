#include<stdio.h>
#include<math.h>
/// Universty Addmission System 

char Student_Data(){

char Name;
printf("Enter your Student Name = ");
scanf("%c",&Name);

int Student_age;
printf("Enter your age = ");
scanf("%d",&Student_age);

if(Student_age < 17){

printf("Not Eligible Due to Age");

}

return 0;

}

int obtain_Marks(){

int Total_int_marks = 1100;

int Total_matric_marks = 1100;

int Entry_total_marks = 100;

int obtain_matric_marks ;
printf("Enter your matric Number =\n");
scanf("%d",&obtain_matric_marks);

// matric percentage

float martic_percentage = (float)obtain_matric_marks / Total_matric_marks * 100;
printf("Matric Percentage = %f\n",martic_percentage);

int obtain_int_marks ;
printf("Enter your intermidiate number = \n");
scanf("%d",&obtain_int_marks);

// int percenatge 

float int_percentage = (float)obtain_int_marks / Total_int_marks * 100;
printf("int Percentage = %f\n",int_percentage);

//entery test percenatge

int obtain_entery_marks;
printf("Enter your Entery Test Marks = \n");
scanf("%d",&obtain_entery_marks);

float entery_percentage = (float)obtain_entery_marks / Entry_total_marks * 100;
printf("Entery test percentage = %f\n",entery_percentage);


float matric_merit = (float)obtain_matric_marks/Total_matric_marks*0.30;

printf("matric merit = %f",matric_merit);

float int_merit = (float)obtain_int_marks/Total_int_marks*0.40;

printf("int merit = %f",int_merit);

float entery_merit = (float)obtain_entery_marks / Entry_total_marks*0.30;
printf("entery marks = %f",entery_merit);
// total merit

float total_merit = (float)matric_merit + int_merit + entery_merit;
printf("total merit = %f",total_merit);

if(int_percentage >= 60){

if(entery_percentage >= 70 ){

if(total_merit >= 75){

printf("Addmission Confirm");

}
else{

printf("Low Merit");

}

}
else{

printf("Entery Test Failed");

}
}
else if (int_percentage <= 60){

printf("Not Eligible");
}

return 0;

}


int main(){

Student_Data();
obtain_Marks();

return 0;    
}