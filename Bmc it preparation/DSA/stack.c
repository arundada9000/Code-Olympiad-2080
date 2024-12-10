#include <stdio.h>

#define MAX_SIZE 10

int stack[MAX_SIZE];
int top = -1;

int isEmpty()
{
    return top == -1;
}

int isFull()
{
    return top == MAX_SIZE - 1;
}

void push(int value)
{
    if (isFull())
    {
        printf("Stack Overflow: Cannot push element onto a full stack\n");
        return;
    }
    stack[++top] = value;
    printf("Pushed %d onto the stack\n", value);
}

int pop()
{
    if (isEmpty())
    {
        printf("Stack Underflow: Cannot pop element from an empty stack\n");
        return -1;
    }
    return stack[top--];
}

int peek()
{
    if (isEmpty())
    {
        printf("Stack is empty\n");
        return -1;
    }
    return stack[top];
}

void display()
{
    if (isEmpty())
    {
        printf("Stack is empty\n");
        return;
    }
    printf("Elements in the stack: ");
    for (int i = top; i >= 0; i--)
    {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main()
{
    int choice, value;

    do
    {
        printf("\nStack Menu:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the value to push: ");
            scanf("%d", &value);
            push(value);
            break;

        case 2:
            value = pop();
            if (value != -1)
            {
                printf("Popped element: %d\n", value);
            }
            break;

        case 3:
            value = peek();
            if (value != -1)
            {
                printf("Top element: %d\n", value);
            }
            break;

        case 4:
            display();
            break;

        case 5:
            printf("Exiting the program\n");
            break;

        default:
            printf("Invalid choice. Please enter a valid option.\n");
        }

    } while (choice != 5);

    return 0;
}
