#include <stdio.h>
int base,high;
float sq;
main(){
	printf("Enter Base:");
	scanf("%d",&base);
	printf("Enter High:");
	scanf("%d",&high);
	sq=base*high;
	printf("sq area is %f",sq,base,high);
}
