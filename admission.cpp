#include<stdio.h>
int main(){
	float entrytestscore,fscpercentage,combinedscore;
	printf("enter your entrytestscore and fsc percentage");
	scanf("%f %f",&entrytestscore,&fscpercentage);
	combinedscore=(entrytestscore*0.50)+(fscpercentage*0.50);
	printf("combinedscore=%.2f\n",combinedscore);
	if(combinedscore>=80){
		printf("you got admission in computer science");
	}else if (combinedscore>=65){
		printf("you got admission in software engineering");
	}
else if(combinedscore>=50){
		printf("you got admission in information technology");
	}else{
		printf("you got rejected");
	}return 0;
	}
