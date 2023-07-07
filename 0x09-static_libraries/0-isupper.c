#include "main.h"
/**
 * _isupper - check if a letter is upper
 * @x: The number to be checked
 * Return: 1 if its upper letter else return 0
*/

int _isupper(int x)
{
        if (x >= 'A' && x <= 'Z')
                return (1);
        else
                return (0);
}
