#include "libft.h"
#include <stdio.h>

int main ()
{
    // isalpha
    printf("\n---- isalpha ----\n");
	printf("5 isalpha : %d, real : %d\n", ft_isalpha('5'), isalpha('5'));
	printf("p isalpha : %d, real : %d\n", ft_isalpha('p'), isalpha('p'));
	printf("O isalpha : %d, real : %d\n", ft_isalpha('O'), isalpha('O'));
    // isdigit
	printf("\n---- isdigit ----\n");
	printf("5 isdigit : %d, real : %d\n", ft_isdigit('5'), isdigit('5'));
	printf("p isdigit : %d, real : %d\n", ft_isdigit('p'), isdigit('p'));
	printf("0 isdigit : %d, real : %d\n", ft_isdigit('0'), isdigit('0'));
	// isalnum
	printf("\n---- isalnum ----\n");
	printf("5 isalnum : %d, real : %d\n", ft_isalnum('5'), isalnum('5'));
	printf("p isalnum : %d, real : %d\n", ft_isalnum('p'), isalnum('p'));
	printf("D isalnum : %d, real : %d\n", ft_isalnum('D'), isalnum('D'));
	printf("! isalnum : %d, real : %d\n", ft_isalnum('!'), isalnum('!'));
	// isascii
	printf("\n---- isascii ----\n");
	printf("5 isascii : %d, real : %d\n", ft_isascii('5'), isascii('5'));
	printf("¡ isascii : %d, real : %d\n", ft_isascii(0xA1), isascii(0xA1));
	// isprint
	printf("\n---- isprint ----\n");
	printf("5 isprint : %d, real : %d\n", ft_isprint('5'), isprint('5'));
	printf("¡ isprint : %d, real : %d\n", ft_isprint(0xA1), isprint(0xA1));
	// strlen
	printf("\n---- strlen ----\n");
	printf("\"Hello 42\" strlen : %zu, real : %zu\n", ft_strlen("Hello 42"), strlen("Hello 42"));
	printf("\"\" strlen : %zu, real : %zu\n", ft_strlen(""), strlen(""));

}