#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int zhishu(int x){
	int i=0,w=0;	
	for(i=2;i<x;i++){
			if(x%i==0){
			break;		}	}
			if(x==i){		
		++w;		
		return x;	}
		else{		
		return 0;	}
		}
int main(int argc, char *argv[]) {
int zhishu(int x);
	int a,b,i;
	scanf("%d,%d",&a,&b);
	for(i=a;i<=b;i++){
	if(zhishu(i)!=0){
	if(zhishu(i+2)!=0){
	printf("%d,%d\n",zhishu(i),zhishu(i)+2);	}	}}


	return 0;
}


