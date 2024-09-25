#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	change_to_uppercase(unsigned int i, char *c)
{
	(void)i;  // Evitamos un warning por no usar 'i'
	if (*c >= 'a' && *c <= 'z')
		*c = *c - 32;  // Convertir a mayúscula
}
char	change_to_uppercase2(unsigned int i, char c)
{
	(void)i;  // Evitamos un warning por no usar 'i'
	if (c >= 'a' && c <= 'z')
		return (c - 32);  // Convertir a mayúscula
	return (c);
}

int main(void)
{
    // Pruebas de ft_isalpha
    printf("ft_isalpha('A') = %d (Expected: 1)\n", ft_isalpha('A'));
    printf("ft_isalpha('1') = %d (Expected: 0)\n", ft_isalpha('1'));

    // Pruebas de ft_isdigit
    printf("ft_isdigit('5') = %d (Expected: 1)\n", ft_isdigit('5'));
    printf("ft_isdigit('a') = %d (Expected: 0)\n", ft_isdigit('a'));

    // Pruebas de ft_isalnum
    printf("ft_isalnum('A') = %d (Expected: 1)\n", ft_isalnum('A'));
    printf("ft_isalnum('1') = %d (Expected: 1)\n", ft_isalnum('1'));
    printf("ft_isalnum('.') = %d (Expected: 0)\n", ft_isalnum('.'));

    // Pruebas de ft_isascii
    printf("ft_isascii('A') = %d (Expected: 1)\n", ft_isascii('A'));
    printf("ft_isascii(128) = %d (Expected: 0)\n", ft_isascii(128));

    // Pruebas de ft_isprint
    printf("ft_isprint('A') = %d (Expected: 1)\n", ft_isprint('A'));
    printf("ft_isprint(31) = %d (Expected: 0)\n", ft_isprint(31));

    // Pruebas de ft_strlen
    printf("ft_strlen('Hello') = %zu (Expected: 5)\n", ft_strlen("Hello"));
    printf("ft_strlen('') = %zu (Expected: 0)\n", ft_strlen(""));

    // Pruebas de ft_toupper
    printf("ft_toupper('a') = %c (Expected: 'A')\n", ft_toupper('a'));
    printf("ft_toupper('A') = %c (Expected: 'A')\n", ft_toupper('A'));

    // Pruebas de ft_tolower
    printf("ft_tolower('A') = %c (Expected: 'a')\n", ft_tolower('A'));
    printf("ft_tolower('a') = %c (Expected: 'a')\n", ft_tolower('a'));

    // Pruebas de ft_strncmp
    printf("ft_strncmp('abc', 'abc', 3) = %d (Expected: 0)\n", ft_strncmp("abc", "abc", 3));
    printf("ft_strncmp('abc', 'abd', 3) = %d (Expected: -1)\n", ft_strncmp("abc", "abd", 3));

    // Pruebas de ft_atoi
    printf("ft_atoi('42') = %d (Expected: 42)\n", ft_atoi("42"));
    printf("ft_atoi('-42') = %d (Expected: -42)\n", ft_atoi("-42"));
    const char  *texto = "   -5325nb";
    printf("El string '%s' convertido a número es: %d\n", texto, ft_atoi(texto));
    printf("Func. original: El string '%s' convertido a número es: %d\n\n", texto, atoi(texto));

    // Pruebas de ft_memset
    char mem[10] = "abcdefghi";
    ft_memset(mem, 'x', 5);
    printf("ft_memset('abcdefghi', 'x', 5) = %s (Expected: 'xxxxxefghi')\n", mem);

    // Pruebas de ft_bzero
    char bzero_test[6] = "hello";
    ft_bzero(bzero_test, 3);
    printf("ft_bzero('hello', 3) = ");
    for (int i = 0; i < 5; i++)
        printf("%d ", bzero_test[i]);
    printf("(Expected: 0 0 0 108 111)\n");

    // Pruebas de ft_memcpy
    char src[] = "memcpy test";
    char dest[20];
    ft_memcpy(dest, src, 12);
    printf("ft_memcpy(dest, src, 12) = %s (Expected: 'memcpy test')\n", dest);

    // Pruebas de ft_memmove
    char overlap_test[] = "memmove overlap";
    ft_memmove(overlap_test + 5, overlap_test, 7);
    printf("ft_memmove(overlap + 5, overlap, 7) = %s (Expected: 'memmoemmove')\n", overlap_test);

    // Pruebas de ft_strchr
    printf("ft_strchr('hello', 'e') = %s (Expected: 'ello')\n", ft_strchr("hello", 'e'));
    printf("ft_strchr('hello', 'z') = %p (Expected: NULL)\n", ft_strchr("hello", 'z'));
    char    *string4 = "Hello, World!";
    char    *result5 = ft_strchr(string4, 'l');
    char    *result6 = strchr(string4, 'l');
    if (result5 != NULL && result6 != NULL && result5 == result6)
    {
        printf("Dest: %s\n", result5);
        printf("Func. original:  Dest: %s\n\n", result6);
    }
    else if (result5 != result6)
        printf("Resultados distintos en ft_strchr y strchr.\n\n");
    else
        printf("Character not found.\n\n");

    // Pruebas de ft_strlcpy
    char dest_strlcpy[10];
    ft_strlcpy(dest_strlcpy, "hello", 10);
    printf("ft_strlcpy(dest_strlcpy, 'hello', 10) = %s (Expected: 'hello')\n", dest_strlcpy);

    // Pruebas de ft_strlcat
    char dest_strlcat[15] = "world";
    ft_strlcat(dest_strlcat, "hello", 15);
    printf("ft_strlcat('world', 'hello', 15) = %s (Expected: 'worldhello')\n", dest_strlcat);

    // Pruebas de ft_strrchr
    printf("ft_strrchr('hello', 'l') = %s (Expected: 'lo')\n", ft_strrchr("hello", 'l'));

    // Pruebas de ft_memchr
    const char str[] = "Hola, mundo!";
    char ch = 'm';
    char *resultadomem;

    // Llamada a ft_memchr
    resultadomem = ft_memchr(str, ch, strlen(str));

    // Comprobar si se encontró el carácter
    if (resultadomem)
        printf("Carácter '%c' encontrado en la posición: %ld\n", ch, resultadomem - str);
    else
        printf("Carácter '%c' no encontrado en la cadena.\n", ch);

    // Prueba con un carácter que no existe en la cadena
    ch = 'z';
    resultadomem = ft_memchr(str, ch, strlen(str));

    if (resultadomem)
        printf("Memchr Carácter '%c' encontrado en la posición: %ld\n", ch, resultadomem - str);
    else
        printf("Memchr Carácter '%c' no encontrado en la cadena.\n", ch);
    printf("ft_memchr('abcdef', 'c', 6) = %s (Expected: 'cdef')\n", (char *)ft_memchr("abcdef", 'c', 6));

    // Pruebas de ft_memcmp
    printf("ft_memcmp('abc', 'abc', 3) = %d (Expected: 0)\n", ft_memcmp("abc", "abc", 3));
    printf("ft_memcmp('abc', 'abd', 3) = %d (Expected: -1)\n", ft_memcmp("abc", "abd", 3));

    // Pruebas de ft_strnstr
    printf("ft_strnstr('hello world', 'world', 11) = %s (Expected: 'world')\n", ft_strnstr("hello world", "world", 11));

    // Pruebas de ft_calloc
    int *calloc_test = (int *)ft_calloc(5, sizeof(int));
    printf("ft_calloc(5, sizeof(int)) = ");
    for (int i = 0; i < 5; i++)
        printf("%d ", calloc_test[i]);
    printf("(Expected: 0 0 0 0 0)\n");
    free(calloc_test);

    // Pruebas de ft_strdup
    char *dup = ft_strdup("hello");
    printf("ft_strdup('hello') = %s (Expected: 'hello')\n", dup);
    free(dup);

    // Pruebas de ft_substr
    char *substr = ft_substr("hello world", 6, 5);
    printf("ft_substr('hello world', 6, 5) = %s (Expected: 'world')\n", substr);
    free(substr);

    // Pruebas de ft_strjoin
    char *joined = ft_strjoin("hello", " world");
    printf("ft_strjoin('hello', ' world') = %s (Expected: 'hello world')\n", joined);
    free(joined);

    // Pruebas de ft_strtrim
    char *trimmed = ft_strtrim("  hola que tal  ", " ");
    printf("ft_strtrim('  hola que tal  ', ' ') = %s (Expected: 'hola que tal')\n", trimmed);
    free(trimmed);

    // Pruebas de ft_split
    char **split_result = ft_split("chinimala", ' ');
    printf("ft_split('hello world', ' ')[0] = %s (Expected: 'hello')\n", split_result[0]);
    printf("ft_split('hello world', ' ')[1] = %s (Expected: 'world')\n", split_result[1]);
    // Liberar memoria de split
    for (int i = 0; split_result[i] != NULL; i++)
        free(split_result[i]);
    free(split_result);
    
    //pruebas de itoa
    int numeros[] = {1234, -5678, 0, 42, -2147483648};
    char *resultado;
    int i;
    for (i = 0; i < 5; i++)
    {
        resultado = ft_itoa(numeros[i]);
        
        if (resultado)
        {
            printf("Número: %d -> ft_itoa: %s\n", numeros[i], resultado);
            free(resultado);
        }
        else
        {
            printf("Error al convertir el número %d\n", numeros[i]);
        }
    }
    
    //pruebas ft_putchar_fd
    printf("prueba putchar 'A' y salto linea\n");
    ft_putchar_fd('A', 1);  // 1 es el file descriptor de la salida estándar
    ft_putchar_fd('\n', 1); // Salto de línea en la consola
    
    //pruebas ft_striteri
    char strteti[] = "hola, mundo!";
    printf("-----ft_striteri----\n");
	printf("Antes: %s\n", strteti);
	ft_striteri(strteti, change_to_uppercase);
	printf("Después: %s\n", strteti);

    //pruebas de strmapi
    printf("----ft_strmapi-----\n");
    char strmapi[] = "hola, mundo!";
	char *resultadomapi;

	// Llamada a ft_strmapi, pasando la función para convertir en mayúscula
	resultadomapi = ft_strmapi(strmapi, change_to_uppercase2);
	if (resultado)
	{
		printf("Original: %s\n", strmapi);
		printf("Modificado: %s\n", resultadomapi);
		free(resultadomapi);  // Liberamos la memoria asignada por ft_strmapi
	}
	else
	{
		printf("Error al asignar memoria.\n");
	}
	
    return (0);
}
