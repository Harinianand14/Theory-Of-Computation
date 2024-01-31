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
		if(a[i]!='0'&&a[i]!='1'){
			count=0;
		}
	}
	if(count!=1){
		printf("not valid string");
	}
	if(count==1){
		if(a[0]=='0'&&a[n-1]=='1'){
			printf("String accepted");
		}
		else{
			printf("String not accepted");
		}
	}
}
