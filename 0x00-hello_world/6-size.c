#!/bin/bash
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	 printf("size of char %d bytes\n", sizeof(char));
        printf("size of int %d bytes\n", sizeof(int));
        printf("size of long %d bytes\n", sizeof(long int));
        printf("size of short int %d bytes\n", sizeof(short int));
        printf("size of float %d bytes\n", sizeof(float));
    return (0);
}
