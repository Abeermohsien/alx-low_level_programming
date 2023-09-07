#!/bin/bash
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	 printf("size of char %s bytes\n", sizeof(char));
        printf("size of int %d bytes\n", sizeof(int));
        printf("size of long %1d bytes\n", sizeof(long int));
        printf("size of short int %1d bytes\n", sizeof(short int));
        printf("size of float %f bytes\n", sizeof(float));
    return (0);
}
