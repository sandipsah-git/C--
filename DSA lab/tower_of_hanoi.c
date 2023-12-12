/*
#include<stdio.h>
void TOH(int,char,char,char);
int main(){
    int n;
    printf("Enter the number of disks: ");
    scanf("%d",&n);
    TOH(n,'O','D','T');
    return 0;
}
void TOH(int n, char A,char B,char C){
    if(n>0)
    {
        TOH(n-1,A,C,B);
        printf("Move disk %d from %c to %c\n",n,A,B);
        TOH(n-1,C,B,A);
    }
}
*/
#include <stdio.h>
void print(int,int);
void TOH(int n, int start, int end)
{
    int other = 6 - (start + end);
    if (n > 0)
    {

        if (n == 1)
        {
            print(start, end);
        }
        else
        {
            TOH(n - 1, start, other);
            print(start,end);
            TOH(n-1,other,end);
        }
    }
}
void print(int start, int end)
{
    printf("%d -> %d\n", start, end);
}
int main()
{
    int num;
    printf("Enter the number of disks:");
    scanf("%d",&num);
    TOH(num,1,3);
    return 0;
}