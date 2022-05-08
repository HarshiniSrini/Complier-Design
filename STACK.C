#include<stdio.h>
#include<conio.h>
int n,i,top=-1,stk[100];
void show(){
for(i=0;i<=top;i++)
printf("\n",stk[i]);
}
void push()
{
int item;
if(top==n-1)
printf("\nStack is full");
else {
printf("\nEnter element to be added: ");
scanf("%d",&item);
stk[++top]=item;
}
}
void pop()
{
if(top==-1)
printf("\nstack is empty");
else{
printf("\n%d is popped",stk[top]);
top--;
}
}
int main()
{
int i,op;
clrscr();
printf("Enter the no of stack Elements: ");
scanf("%d",&n);
do{
printf("\n1:push");
printf("\n2:pop");
printf("\n3:display");
printf("\n4:exit");
printf("\nEnter your choice of operation: ");
scanf("%d",&op);
switch(op)
{case 1:
push();
break;
case 2:
pop();
break;
case 3:
show();
break;
}
}
while(op!=4);
getch();
return 0;
}