#include<stdio.h>
int main(){
	float weight;
	int people;
	printf("enter no of people");
	scanf("%d",&people);
	printf("enter the total weight");
	scanf("%f",&weight);
	if (weight>1000 & people>10){
		printf("deny entry due to overweight and exceeding people limit");
	}else if (weight>1000 & people<=10){
		printf("deny entry due to overweight");
	}else if (weight<=1000 & people>10){
		printf("deny entry due to exceeding people limit");
	}else{
		printf("lift can operate normally");
	}return 0;
}