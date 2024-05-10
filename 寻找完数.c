#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void wanshu(int x){
	int i,k;
	for(i=1;i<x;i++){
		if(x%i==0){
			k=k+i;
		}
	}
	if(x==k&&x!=0){
		printf("%d,",x);
	}
}
int main(int argc, char *argv[]) {
void wanshu(int x);
int x,i,j,k,temp;
scanf("%d,%d",&j,&k);
if(j<k){
	temp=k;
	k=j;
	j=temp;

}
if(j<k){
	for(i=j;i<=k;i++){
		wanshu(i);
	
	}
	printf("\k ");
	if(j<10&&k<10){
		printf("error");
	}
	if(j>1000&&k>1000){
		printf("error");
	}
}else{printf("error"); 
}





	return 0;
}

