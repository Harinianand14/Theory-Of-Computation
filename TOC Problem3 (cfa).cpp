#include<stdio.h>
#include<string.h>
int main(){
	int i,n;
	char a[100];
	printf("enter string in form of (S -> 0 A 1  and  A-> 0 A | 1 A | e )");
	scanf("%s",a);
	n=strlen(a);
	int count=1;
	for(int i=0;i<n;i++){
		if(a[i]!='0' && a[i]!='1'){
			count=0;
		}
	}
	if(count!=1){
		printf("invalid string");
	}
	if(count==1){
		if(a[0]=='0'&&a[n-1]=='1'){
			printf("string accepted");
		}
		else{
			printf("string not accepted");
		}
	}
}
