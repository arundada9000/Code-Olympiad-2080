#include <stdio.h>

int main()
{
    int i;
    for(i=1; i<=10;i++);
    printf("i=%d\n",i);
	return 0;
}


// Output: i=11

//See the semicolon, after the for loop statement (loop is terminating without anybody), 
//the printf statement is not a body of for loop. Loop will be executed and when the 
//value of i will be 11, program's execution reaches to the printf statement. 
//Thus, the output will be i = 11.