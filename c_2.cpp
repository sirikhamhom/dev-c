#include <stdio.h>
int base,high;
float tr;
main(){
	printf("Enter Base:");
	scanf("%d",&base);
	printf("Enter High:");
	scanf("%d",&high);
	tr=0.5*base*high;
	printf("tr area is %f",tr,base,high);
}
