#include<stdio.h>
#include<stdlib.h>
int a;
int b=1;
int c=1;
int main() 
{
	printf("ESCOGA UN NUMERO\n");
	scanf("%d",&a);
	while(b<=a){	
	if(b%2==1){		
	printf("%d",b);		
	}else{		
	while(c<=b){		
	printf("%d",b);
	c=c+1;
	}		
	}
	b=b+1;
	c=1;
	}system("PAUSE");	
	return 0;
}
