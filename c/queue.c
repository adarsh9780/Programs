#include <stdio.h>
#define MAXSIZE 5 // maximum size of stack
 
typedef struct stack
{
    int stk[MAXSIZE];
    int head;
    int tail;
}STACK;
STACK s;
 
void push(void);
int  pop(void);
void display(void);
 
void main ()
{
    int choice;
    int option = 1;
    s.head = -1;
    s.tail = (MAXSIZE-1);
 
    printf ("QUEUE OPERATION\n");
    while (option)
    {
        printf ("=========================================\n");
        printf ("        1 --> PUSH               \n");
        printf ("        2 --> POP               \n");
        printf ("        3 --> DISPLAY               \n");
        printf ("        4 --> EXIT           \n");
        printf ("=========================================\n");

        //printf("select 1 for push, 2 for pop, 3 for display and 4 for exit.\n");
 
        printf ("Enter your choice\n");
        scanf    ("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            return;
        }
        printf ("Do you want to continue(Type 0 for 'NO' or 1 for 'YES')?\n");
        scanf ("%d", &option);
    }
}
/*  Function to add an element to the stack */
void push ()
{
    int num;
    if (s.head == (MAXSIZE - 1))
    {
        printf ("Queue is Full\n");
        return;
    }
    else
    {
        printf ("Enter the element to be pushed\n");
        scanf ("%d", &num);
        s.head = s.head + 1;
        s.stk[s.head] = num;
    }
    return;
}
/*  Function to delete an element from the stack */
int pop ()
{
    int num;
    if (s.head == - 1)
    {
        printf ("Queue is Empty\n");
        return (s.head);
    }
    else
    {
        num = s.stk[s.tail];
        printf ("poped element is = %d\n", s.stk[s.head]);
        s.head = s.head - 1;
    }
    return(num);
}
/*  Function to display the status of the stack */
void display ()
{
    int i;
    if (s.head == -1)
    {
        printf ("Queue is empty\n");
        return;
    }
    else
    {
        printf ("\n The status of the Queue is \n");
        for (i = s.head; i >= 0; i--)
        {
            printf ("%d\n", s.stk[i]);
        }
    }
    printf ("\n");
}