#include <stdio.h>
#include <math.h>
int main(){
	int n,d,p,sum=0;
	printf("All armstrong Numbers are:\n");
	for(int i = 1;i<=999;i++){
		for(int j = i; j!=0; j=j/10){
			int d = j % 10;
			if(i>0 && i<=9){
				p = 1;
			}
			else if(i>9 && i<=99){
				p = 2;
			}
			else{
				p = 3;
			}
			sum = sum+pow(d,p);
			
			
			}
		if (sum==i)
				printf("%d\n", i);
				sum = 0;
			}
			
		
	
	return 0;
}