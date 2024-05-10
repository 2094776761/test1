#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 float lerand(int n,int x){
	if(n==0){
	return 1;	}
	if(n==1){
	return x;	}
	else{
	return((2*n-1)*x-lerand(n-1,x)-(n-1)*lerand(n-2,x))/n;	}}
int main(int argc, char *argv[]) {

int n,x;
	float lerand(int n, int x);
	scanf("%d,%d",&n,&x);
	if(n<0){
	printf("error\n");	}
	else{
	printf("%.2f\n",lerand(n,x));
		}	return 0;
}


