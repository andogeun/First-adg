#include <stdio.h>

main(){
	
	int i=30; 
	while( i>=10 ){
		printf("%d ",1);
		i-=2;
	}
	printf("\n루프 종료후 i=%d", i);
	
	
	printf("\n1부터 10까지 (i)의 합(sum)구하기");
	i = 1;
	int sum=0;
	
	while(i<=10){
		sum = sum + i;
		i++;
		
	}
	
	printf("\n1부터 10까지의 합: %d", sum);
}
