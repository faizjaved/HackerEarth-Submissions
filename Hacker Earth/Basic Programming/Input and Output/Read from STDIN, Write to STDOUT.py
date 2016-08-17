'''
Read from STDIN, Write to STDOUT

Read different types of data from standard input, process them as shown in output format 
and print the answer to standard output.

Input format:
First line contains integer N.
Second line contains string S.

Output format:
First line should contain N�2.
Second line should contain the same string S.

Constraints:
0=N=10
1=|S|=15 where 
|S|= length of string 

Sample Input
5
helloworld

Sample Output
10
helloworld
'''

#Python 3 Code
x=int(input())
print(x * 2)
y=input()
print(y)