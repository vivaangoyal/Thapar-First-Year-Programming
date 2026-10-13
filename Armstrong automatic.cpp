#include <stdio.h>
#include <math.h>

int main(){
	int n,p,sum = 0;
	for(int i = 1;i<=111999;i++){
		for(int j=i;j!=0;j=j/10){
			p++;
		}
		for(int j=i;j!=0;j=j/10){
			n = j%10;
			sum = sum+pow(n,p);
		}
		if(sum==i)
		printf("%d\n", i);
		sum = 0;
		p = 0;
		
	}
	return 0;
}