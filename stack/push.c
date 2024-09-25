#include <stdio.h>
#define size 5
int arr[size];
int top = -1;
int value;
void push()
{
    if (top == size - 1)
    {
        printf("stack is full");
    }
    else
    {
        top++;
        arr[top] = value;
        scanf("%d", value);
    }
}
void main()
{
    int i=0;
    do
    {
        printf("enter value in stack");
        push();
        i++;
        
    }while(i>size);
}