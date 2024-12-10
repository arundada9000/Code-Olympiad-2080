#include <stdio.h>
int main()
{
	float f1 = 0.1;
	
	if (f1 == 0.1)
		printf("equal\n");
	else
		printf("not equal\n");
	
	return 0;
}


//Output: not equal

//Explanation
//Generally float values have 4 or 6 decimal digit of precision (digits after decimal point). 
//Therefore f1=0.100000 which is not equal to 0.1.