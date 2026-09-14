#include<stdio.h>
int main(){
	int accounttype;
	float interest,annualinterest,balance;
	printf("\n1=savings, 2=current, 3=fixeddeposit");
	printf("\n\n enter accounttype and balance");
	scanf("%d %f",&accounttype,&balance);
	switch(accounttype){
    case 1:
	 if (balance>100000){
	 interest=0.04;
	 }else{
	 interest=0.02;
	 }
	 break;
	 case 2:
	 interest=0.00;
	 break;
	 case 3:
	 interest=0.08;
	 break;
	 default:
	 printf("\ninvalid account type");
	 }
	annualinterest=interest*balance;
	 printf("your annual interest earned=%.2f",annualinterest);
	 return 0;
     }  