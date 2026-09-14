#include<stdio.h>
int main(){
	int membershiptype,slot;
	float fee,monthlyfee,discount;
	printf("1=student,2=regular,3=seniorcitizen,1=morning,2=evening");
	printf("\n enter membershiptype and slot");
	scanf("%d %d",&membershiptype,&slot);
    switch(membershiptype){
      case1:
      	fee=2000;
      	break;
      case2:
      	fee=3500;
      	break;
      case3:
      	fee=2500;
      	break;
    default:
    	printf("invalid membershiptype");
    	return 0;
	}
	if (slot==1){
		discount= fee*0.15;
	} else if (slot==2){
		discount=0.00;
	}return 0;
}