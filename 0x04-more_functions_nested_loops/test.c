#include "main.h"

/**
  * print_triangle - Prints a triangle.
  * @size: The size of the triangle.
  * Return: Empty
  */

void print_triangle(int size) {
    if (size <= 0) {
        _putchar('\n');
        return;
    }

    for (int i = 1; i <= size; i++) {
        for (int j = 0; j < i; j++) {
            _putchar('#');
        }
        _putchar('\n');
    }
}
