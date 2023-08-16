/**
 * _isalpha - check the code.
 * @c: Letter to check alpha of
 *
 * Return: Always 0.
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (0);
	else
		return (1);
}
