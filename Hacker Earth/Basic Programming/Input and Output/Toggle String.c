/*
Toggle String

You have been given a String S consisting of uppercase and lowercase English alphabets. 
You need to change the case of each alphabet in this String. 
That is, all the uppercase letters should be converted to lowercase and all the lowercase letters should
be converted to uppercase. You need to then print the resultant String to output.

Input Format
The first and only line of input contains the String S

Output Format
Print the resultant String on a single line.

Constraints
1=|S|=100 where |S| denotes the length of string S.

Sample Input
abcdE

Sample Output
ABCDe
*/

#include <stdio.h>
 
int main () 
{
   int c = 0;
   char ch, s[100];
 
	gets(s);
 
   while (s[c] != '\0')
   {
      ch = s[c];
      if (ch >= 'A' && ch <= 'Z')
         s[c] = s[c] + 32;
      else if (ch >= 'a' && ch <= 'z')
         s[c] = s[c] - 32;   
      c++;   
   }
 
   printf("%s\n", s);
 
   return 0;
}