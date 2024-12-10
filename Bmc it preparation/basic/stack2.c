#include <stdio.h>
#define max 50
int stack[max], top = -1;
int isEmpty()
{
    return top == -1;
}
int isFull()
{
    return top == max - 1;
}
int push()
{
    if (isFull())
    {
        printf("Stack overflow !!!\n");
        return;
    }
    int data;
    printf("Enter the data to push : ");
    scanf("%d", &data);
    stack[++top] = data;
    printf("%d pushed into stack\n", data);
}
int pop()
{
    if (isEmpty())
    {
        printf("The stack is empty. Stack underflow!!!\n");
        return;
    }
    printf("%d popped from stack.", stack[top]);
    top--;
}
void display()
{
    if (isEmpty())
    {
        printf("The stack is empty!!!\n");
        return;
    }
    int index = top;
    printf("Elements in stack: ");
    while (index >= 0)
    {
        printf("%d ", stack[index]);
        index--;
    }
}
int peek()
{
    if (isEmpty())
    {
        printf("The stack is empty!!!");
        return;
    }
    printf("The topmost element of stack : %d", stack[top]);
}
int main()
{
    system("cls");
    int choice;
    printf("..............Stack...............");
    do
    {
        printf("\nChoose an action for stack ! \n1.Push\n2.Pop\n3.Peek\n4.Display\n5.Exit\nEnter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            printf("\nSuccesfully exited...");
            break;
        default:
            printf("\nInvalid Choice!!!\nPlease Enter Again : ");
        }

    } while (choice != 5);

    return 0;
}