#include <stdio.h>

main(){
	
	int i=30; 
	while( i>=10 ){
		printf("%d ",1);
		i-=2;
	}
	printf("\n���� ������ i=%d", i);
	
	
	printf("\n1���� 10���� (i)�� ��(sum)���ϱ�");
	i = 1;
	int sum=0;
	
	while(i<=10){
		sum = sum + i;
		i++;
		
	}
	
	printf("\n1���� 10������ ��: %d", sum);
}
