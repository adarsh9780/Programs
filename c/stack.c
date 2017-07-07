#include <stdio.h>
#include "stack.h"

void main ()
{
    int choice;
    int option = 1;
    s.top = -1;
 
    printf ("STACK OPERATION\n");
    while (option)
    {
        printf("select 1 for push, 2 for pop, 3 for display and 4 for exit.\n");
 
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
    }
}