/**
 * *_strchr - Function that find a character in a string
 * @s: String
 * @c: Character to find
 * Return: Returns the first ocurrence of the character.
 */

char *_strchr(char *s, char c)
{
	int i = 0, n = 0, flag = 0;

	char *position;

	while (s[n] !=  '\0')
	{
		n++;
	}

	if (c == '\0')
	{
		return (s);
	}

	while (i < n && flag == 0)
	{
		if (s[i] == c)
		{
			position = s + i;
			flag = 1;
		}
		i++;
	}

	return (position);
}
