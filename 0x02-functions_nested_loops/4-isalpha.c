/**
 * _isalpha - checks for alphabetic character
 * @b: the character to be checked
 * Return: 1 if b is a letter, return 0
 */
int _isalpha(int b)
{
	if ((b >= 'a' && b <= 'z') || (b >= 'A' && b <= 'Z'))
	{
	return(1);
	}
	return(0);
}
