/*
Life, the Universe, and Everything
Your program is to use the brute-force approach in order 
to find the Answer to Life, the Universe, and Everything.
More precisely... rewrite small numbers from input to output. 
Stop processing input after reading in the number 42. 
All numbers at input are integers of one or two digits.

SAMPLE INPUT 
1
2
88
42
99
SAMPLE OUTPUT 
1
2
88
*/

#include <stdio.h>

int main()
{
    int a;
 scanf("%d",&a);
    while(a != 42){
    	 	printf("%d\n",a);
    	 	scanf("%d",&a);
    }
    return 0;
}
