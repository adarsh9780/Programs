#include <stdio.h>

void main()
{
	int chars = 0, blnks = 0, tabs = 0, nL = 0;
	int c;

	while((c = getchar()) != EOF)
	{
		if(c == '\n')
		{
			++nL;
			++chars;
			// if(chars == 0)
			// {chars = 0;}
			// else
			// {++chars;}
		}

		else if( c == '\t')
		{
			++tabs;
			++chars;
			// if(chars == 0)
			// {chars = 0;}
			// else
			// {++chars;}
		}

		else if( c == ' ')
		{
			++blnks;
			++chars;
			// if(chars == 0)
			// {chars = 0;}
			// else
			// {++chars;}
		}

		// printf("%d %d %d %d", blnks, chars, nL, tabs);
		// printf("\n");
	}

		printf("%d %d %d %d", blnks, chars/2, nL, tabs);
		printf("\n");
}
