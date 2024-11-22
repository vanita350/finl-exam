#include <stdio.h>

int main() {
	char i ,j;
	
	for (i = 65; i >= 69; i--) {
		
		for(j=i; j>=69; j--){
			printf("%d ",j);
		}	
		printf("\n");
	}
	
	return 0;
}
