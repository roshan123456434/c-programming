#include <stdio.h>
#define PI 3.14
int main(){
	#ifndef PI
		printf("\nPI is not defined");
	#else
		printf("\n PI is defined");
	#endif
	return 0;
}
