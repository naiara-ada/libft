#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

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
    char *trimmed = ft_strtrim("  hello  ", " ");
    printf("ft_strtrim('  hello  ', ' ') = %s (Expected: 'hello')\n", trimmed);
    free(trimmed);

    // Pruebas de ft_split
    char **split_result = ft_split("hello world", ' ');
    printf("ft_split('hello world', ' ')[0] = %s (Expected: 'hello')\n", split_result[0]);
    printf("ft_split('hello world', ' ')[1] = %s (Expected: 'world')\n", split_result[1]);
    // Liberar memoria de split
    for (int i = 0; split_result[i] != NULL; i++)
        free(split_result[i]);
    free(split_result);

    return 0;
}
