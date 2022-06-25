#include "main.c"
/**
* _strstr - find a substring
* @haystack: string to be searched
* @needle: substring to be located
* Return: substring or null
*/
char *_strstr(char *haystack, char *needle)
if (*needle == 0)
return (haystack);
int x;
while (*haystack)
x = 0;
if (haystack[x] == needle[x])
do {
if (needle[x + 1] == '\0')
return (haystack);
x++;
} while (haystack[x] == needle[x]);
}
haystack++;
}
return ('\0');
}
