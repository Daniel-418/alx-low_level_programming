#ifndef ASK
#include "3-calc.h"
#include "function_pointers.h"
#define ASK
#endif

/**
 * op_add - add two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the result
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substract two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the result
 */
int op_mul(int a, int b)
{
	return (a * b); 
}

/** 
 * op_div - divides two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the result
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Calculates the mod of two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the result
 */
int op_mod(int a, int b)
{
	return (a % b);
}
