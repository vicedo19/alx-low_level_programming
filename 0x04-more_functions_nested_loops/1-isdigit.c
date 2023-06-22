/**
 * _isupper - check if c is upper
 *
 * @c: input for alphabet
 *
 * Return: 1 if its uppercase, 0 if not
*/

int _isupper(int c)
{
    if (c >= 0 && c <= 9)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}
