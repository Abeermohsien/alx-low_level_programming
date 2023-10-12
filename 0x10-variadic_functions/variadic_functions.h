#ifndef VARIADIC_H
#define VARIADIC_H
#include <stdio.h>
#include <stdarg.h>
/**
 * struct token - stuct token
 * @token: char
 * @fun: function prints
 */
typedef struct token
{
	char *token;
	void (*fun)(char *, va_list);
} token_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
