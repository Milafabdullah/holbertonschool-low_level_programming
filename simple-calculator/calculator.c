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
 * discard_line - Discards the rest of the current input line
 *
 * Return: void
 */
static void discard_line(void)
{
	int c;

	c = getchar();
	while (c != '\n' && c != EOF)
		c = getchar();
}

/**
 * read_number - Prompts for an integer and reads it
 * @prompt: The text to display before reading
 * @value: Pointer to the variable that receives the number
 *
 * Return: 1 if a number was read, 0 if the input was not a number,
 * EOF if there is no more input
 */
static int read_number(const char *prompt, int *value)
{
	int result;

	printf("%s", prompt);
	result = scanf("%d", value);
	if (result != EOF)
		discard_line();

	return (result);
}

/**
 * run_operation - Asks for two numbers and prints the result of an operation
 * @choice: The menu choice (1 adds, 2 subtracts)
 *
 * Return: EOF if the input ended, 0 otherwise
 */
static int run_operation(int choice)
{
	int a;
	int b;
	int status;

	a = 0;
	b = 0;
	status = read_number("A: ", &a);
	if (status == 1)
		status = read_number("B: ", &b);
	if (status == EOF)
		return (EOF);

	if (status != 1)
		printf("Invalid input\n");
	else if (choice == 1)
		printf("Result: %d\n", a + b);
	else if (choice == 2)
		printf("Result: %d\n", a - b);

	return (0);
}

/**
 * main - Entry point of the simple calculator
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int choice;
	int result;

	choice = -1;
	printf("Simple Calculator\n");

	while (choice != 0)
	{
		print_menu();
		result = scanf("%d", &choice);
		if (result == EOF)
			break;
		discard_line();

		if (result != 1)
			printf("Invalid choice\n");
		else if (choice == 1 || choice == 2)
		{
			if (run_operation(choice) == EOF)
				break;
		}
		else if (choice == 3 || choice == 4)
			printf("Not implemented yet\n");
		else if (choice != 0)
			printf("Invalid choice\n");
	}

	printf("Bye!\n");
	return (0);
}
