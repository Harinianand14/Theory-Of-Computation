#include<stdio.h>
#include<string.h>
int main(){
	int n,i;
	char a[100];
	printf("enter: ");
	scanf("%s",a);
	n=strlen(a);
	int count=1;
	for(i=0;i<n;i++){
		if(a[i]!='a'&&a[i]!='b'){
			count=0;
		}
	}
	if(count!=1){
		printf("not valid string");
	}
	if(count==1){
		if(a[0]=='a'&&a[n-1]=='a'){
			printf("String accepted");
		}
		else{
			printf("String not accepted");
		}
	}
}
