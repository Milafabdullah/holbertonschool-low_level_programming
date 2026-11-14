/*
 * Simple Calculator
 *
 * Numbers: every number is a decimal number (double), so A and B can be
 * whole numbers or decimals such as 2.5.
 * Output: results are printed with up to 15 significant digits and no
 * trailing zeros, for example 35, -15 and 2.5.
 * Errors: "Invalid input" for text that is not a number,
 * "Error: division by zero" when B is 0 in a division, and
 * "Error: result out of range" when a result is too large to store.
 */
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
 * is_finite - Checks that a decimal number is neither infinity nor NaN
 * @x: The number to check
 *
 * Return: 1 if x is a normal finite number, 0 otherwise
 */
static int is_finite(double x)
{
	return (x - x == 0);
}

/**
 * read_number - Prompts for a decimal number and reads it
 * @prompt: The text to display before reading
 * @value: Pointer to the variable that receives the number
 *
 * Return: 1 if a number was read, 0 if the input was not a valid number,
 * EOF if there is no more input
 */
static int read_number(const char *prompt, double *value)
{
	int result;

	printf("%s", prompt);
	result = scanf("%lf", value);
	if (result != EOF)
		discard_line();
	if (result == 1 && !is_finite(*value))
		return (0);

	return (result);
}

/**
 * calculate - Applies an arithmetic operation to two numbers
 * @choice: The menu choice (1 add, 2 subtract, 3 multiply, 4 divide)
 * @a: The first number
 * @b: The second number, which must not be 0 for a division
 *
 * Return: The result of the operation
 */
static double calculate(int choice, double a, double b)
{
	if (choice == 1)
		return (a + b);
	if (choice == 2)
		return (a - b);
	if (choice == 3)
		return (a * b);
	if (choice == 4)
		return (a / b);

	return (0);
}

/**
 * run_operation - Asks for two numbers and prints the result of an operation
 * @choice: The menu choice (1 add, 2 subtract, 3 multiply, 4 divide)
 *
 * Return: EOF if the input ended, 0 otherwise
 */
static int run_operation(int choice)
{
	double a;
	double b;
	double result;
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
	else if (choice == 4 && b == 0)
		printf("Error: division by zero\n");
	else
	{
		result = calculate(choice, a, b);
		if (!is_finite(result))
			printf("Error: result out of range\n");
		else
		{
			if (result == 0)
				result = 0;
			printf("Result: %.15g\n", result);
		}
	}

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
		else if (choice >= 1 && choice <= 4)
		{
			if (run_operation(choice) == EOF)
				break;
		}
		else if (choice != 0)
			printf("Invalid choice\n");
	}

	printf("Bye!\n");
	return (0);
}
