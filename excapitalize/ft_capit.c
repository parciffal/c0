#include <unistd.h>

char *ft_strcapitalize(char *str)
{
    int i;
    
    i = 0;
    while(str[i] != '\0')
    {
        if(i = 0 || str[i-1] == ' ' )
        {
                if(str[i] >= 'a' && str[i] <= 'z')
                {
                    str[i] = str[i] - 32;
                }
        }
        else
        {
            if(str[i] >= 'A' || str[i] <= 'Z')
            {
                str[i] = str[i] +32;
            }
        }
        i++;
    }
    return str;
}
int main()
{
    char str[] = "asda wedwf Wde eRES";
    char *ptr;
    ptr = str;
    ptr = ft_strcapitalize(ptr);
    write(1, str,sizeof(str));
    
    return 0;
}

