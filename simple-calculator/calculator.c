#include <stdio.h>

/**
 * print_menu - Prints the calculator menu and the input prompt
 *
 * Return: void
 */
static void print_menu(void)
{
	printf("1) Add\n");
	printf("2) Subtract\n");
	printf("3) Multiply\n");
	printf("4) Divide\n");
	printf("0) Quit\n");
	printf("Choice: ");
}

/**
 * main - Entry point of the simple calculator
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int choice;

	choice = -1;
	printf("Simple Calculator\n");

	while (choice != 0)
	{
		print_menu();
		if (scanf("%d", &choice) != 1)
			break;
		if (choice >= 1 && choice <= 4)
			printf("Not implemented yet\n");
		else if (choice != 0)
			printf("Invalid choice\n");
	}

	printf("Bye!\n");
	return (0);
}
