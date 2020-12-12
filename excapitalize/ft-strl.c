unsigned int strlcpy(char *dest, const char *src, unsigned int size)
{
	char *d = dest;
	const char *s = src;
	unsigned int n = size;

	if (n != 0) {
		while (--n != 0) {
			if ((*d++ = *s++) == '\0')
				break;
		}
	}

	if (n == 0) {
		if (size != 0)
			*d = '\0';		
		while (*s++)
			;
	}

	return(s - src - 1);	
}

