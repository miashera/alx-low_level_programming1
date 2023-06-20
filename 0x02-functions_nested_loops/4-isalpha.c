#include "main.h"
/**
 * _isalpha - aplhabetic char
 * @c: char checked
 * Return: 1 for aplha char 0 for anything else
 */

int _isaplha(int c)

{
        if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
        {
        return (1);
        }
        return (0);
}
