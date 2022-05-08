#include<stdio.h>
#include<conio.h>
#include<string.h>
struct op{
char left[15];
char right[15];
}
op2[15];
int main(){
int i,j,n;
char *mat;
clrscr();
printf("Enter no of exp: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\nleft ");
scanf("%s",op2[i].left);
printf("\nright ");
scanf("%s",op2[i].right);
}
printf("\nDataFlow Analysis:");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
mat=strstr(op2[j].right,op2[i].left);if(mat)
{
printf("\n%s is live at %s",op2[i].left,op2[j].right);
}}}
getch();
return 0;
}