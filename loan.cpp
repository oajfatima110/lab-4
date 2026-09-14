#include<stdio.h>
int main() {
	int income,age,repayment;
	printf("enter monthly income");
	scanf("%d",&income);
	printf("enter your age");
	scanf("%d",&age);
	printf("enter your existing monthly loan payment");
	scanf("%d, & payment");
	if(income>30000){
		if(age>21 & age<60){
			if ("repayement<income*0.4")
			printf("approved");
		}else {
			printf("rejected");
		}return 0;
	}
}
		