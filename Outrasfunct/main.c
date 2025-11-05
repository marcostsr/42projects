/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcos-t <marcos-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 19:11:37 by marcos-t          #+#    #+#             */
/*   Updated: 2025/10/22 17:20:57 by marcos-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int ft_atoi(const char *str);
void ft_bzero(void *prt, size_t num);
int ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
void	*ft_memchr(const void *s,int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *ptr, int value, size_t n);
char *ft_strchr(const char *s, int c);
char	ft_strlcat(char *dest, char *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
int ft_strlen(char *str);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strnstr(const char *big, const char *little, size_t num);
char *ft_strrchr(const char *s, int c);
char	ft_tolower(char c);
char	ft_toupper(char c);

void teste_1(){
	printf("\nTeste do atoi\n");
	const char *s1="    -345436+++ + gef  sdf";
	const char *s2=" +425423ttt";
	int n1=atoi(s1);
	int n2=atoi(s2);
	int n3=ft_atoi(s1);
	int n4=ft_atoi(s2);
	printf("\nAtoi nativo1: %d \nAtoi nativo2: %d",n1,n2);
	printf("\nAtoi Funcao1: %d \nAtoi Funcao2: %d",n3,n4);
}

void teste_2(){
	printf("\n\nTeste do bzero\n");
	char buf1[10]="test123456";
	char buf2[10]="test123456";
	ft_bzero(buf1,5);
	bzero(buf2,5);
	printf("\nft_bzero vs bzero %s\n",memcmp(buf1,buf2,10) == 0 ? "PASS" : "FAIL");
}

void teste_3(void) {
    printf("\nTesting ft_isalnum:\n");
    char chars[] = {'A', 'z', '0', '9', '@', 0};
	size_t len = sizeof(chars) / sizeof(chars[0]);
    for (int i = 0; i < len; i++) {
        int ft_res = ft_isalnum(chars[i]);
        int std_res = isalnum(chars[i]);
        printf("Char: %c | ft_isalnum: %d | isalnum: %d | %s\n", 
               chars[i], ft_res, std_res, ft_res == std_res ? "PASS" : "FAIL");
    }
}
void teste_4(void) {
    printf("\nTesting ft_isalpha:\n");
    char chars[] = {'A', 'z', '0', '@', 0};
    for (int i = 0; chars[i]; i++) {
        int ft_res = ft_isalpha(chars[i]);
        int std_res = isalpha(chars[i]);
        printf("Char: %c | ft_isalpha: %d | isalpha: %d | %s\n", 
               chars[i], ft_res, std_res, ft_res == std_res ? "PASS" : "FAIL");
    }
}

void teste_5(void) {
    printf("\nTesting ft_isascii:\n");
    int chars[] = {0, 127, 128, -1, 65};
    for (int i = 0; i < 5; i++) {
        int ft_res = ft_isascii(chars[i]);
        int std_res = isascii(chars[i]);
        printf("Char: %d | ft_isascii: %d | isascii: %d | %s\n", 
               chars[i], ft_res, std_res, ft_res == std_res ? "PASS" : "FAIL");
    }
}

void teste_6(void) {
    printf("\nTesting ft_isdigit:\n");
    char chars[5] = {'0', '9', 'a', '@', 0};
	size_t len = sizeof(chars) / sizeof(chars[0]);
    for (int i = 0; i < len; i++) {
        int ft_res = ft_isdigit(chars[i]);
        int std_res = isdigit(chars[i]);
        printf("Char: %c | ft_isdigit: %d | isdigit: %d | %s\n", 
               chars[i], ft_res, std_res, ft_res == std_res ? "PASS" : "FAIL");
    }
}

void teste_7(void) {
    printf("\nTesting ft_isprint:\n");
    char chars[] = {'A', ' ', '~', 31, 127, 0};
    for (int i = 0; chars[i]; i++) {
        int ft_res = ft_isprint(chars[i]);
        int std_res = isprint(chars[i]);
        printf("Char: %d | ft_isprint: %d | isprint: %d | %s\n", 
               chars[i], ft_res, std_res, ft_res == std_res ? "PASS" : "FAIL");
    }
}

void teste_8(void) {
    printf("\nTesting ft_memchr:\n");
    char str[] = "Hello, World!";
    char *ft_res = ft_memchr(str, 'o', strlen(str));
    char *std_res = memchr(str, 'o', strlen(str));
    printf("ft_memchr vs memchr: %s\n", ft_res == std_res ? "PASS" : "FAIL");
}

void teste_9(void) {
    printf("\nTesting ft_memcpy:\n");
    char src[] = "Hello";
    char ft_dest[10] = "123456789";
    char std_dest[10] = "123456789";
    ft_memcpy(ft_dest, src, 5);
    memcpy(std_dest, src, 5);
    printf("ft_memcpy vs memcpy: %s\n", memcmp(ft_dest, std_dest, 10) == 0 ? "PASS" : "FAIL");
}

void teste_10(void) {
    printf("\nTesting ft_memmove:\n");
    char str[] = "Hello, World!";
    char ft_dest[20] = "12345678901234567890";
    char std_dest[20] = "12345678901234567890";
    ft_memmove(ft_dest + 2, ft_dest, 5);
    memmove(std_dest + 2, std_dest, 5);
    printf("ft_memmove vs memmove: %s\n", memcmp(ft_dest, std_dest, 20) == 0 ? "PASS" : "FAIL");
}

void teste_11(void) {
    printf("\nTesting ft_memset:\n");
    char ft_buf[10] = "123456789";
    char std_buf[10] = "123456789";
    ft_memset(ft_buf, 'A', 5);
    memset(std_buf, 'A', 5);
    printf("ft_memset vs memset: %s\n", memcmp(ft_buf, std_buf, 10) == 0 ? "PASS" : "FAIL");
}

void teste_12(void) {
    printf("\nTesting ft_strchr:\n");
    char str[] = "Hello, World!";
    char *ft_res = ft_strchr(str, 'o');
    char *std_res = strchr(str, 'o');
    printf("ft_strchr vs strchr: %s\n", ft_res == std_res ? "PASS" : "FAIL");
}
void teste_13(void) {
    printf("\nTesting ft_strlcat:\n");
    char ft_dest[20] = "Hello";
    char std_dest[20] = "Hello";
    char src[] = ", World!";
    size_t ft_res = ft_strlcat(ft_dest, src, 20);
    size_t std_res = strlcat(std_dest, src, 20);
    printf("ft_strlcat vs strlcat: %s\n", 
           (ft_res == std_res && strcmp(ft_dest, std_dest) == 0) ? "PASS" : "FAIL");
}

void teste_14(void) {
    printf("\nTesting ft_strlcpy:\n");
    char ft_dest[20];
    char std_dest[20];
    char src[] = "Hello, World!";
    size_t ft_res = ft_strlcpy(ft_dest, src, 10);
    size_t std_res = strlcpy(std_dest, src, 10);
    printf("ft_strlcpy vs strlcpy: %s\n", 
           (ft_res == std_res && strcmp(ft_dest, std_dest) == 0) ? "PASS" : "FAIL");
}

void teste_15(void) {
    printf("\nTesting ft_strlen:\n");
    char *strs[] = {"", "Hello", "Hello, World!", NULL};
    for (int i = 0; strs[i]; i++) {
        size_t ft_res = ft_strlen(strs[i]);
        size_t std_res = strlen(strs[i]);
        printf("Input: '%s' | ft_strlen: %zu | strlen: %zu | %s\n", 
               strs[i], ft_res, std_res, ft_res == std_res ? "PASS" : "FAIL");
    }
}

void teste_16(void) {
    printf("\nTesting ft_strncmp:\n");
    char *s1 = "Hello";
    char *s2 = "Hellp";
    size_t n[] = {3, 5, 0};
    for (int i = 0; i < 3; i++) {
        int ft_res = ft_strncmp(s1, s2, n[i]);
        int std_res = strncmp(s1, s2, n[i]);
        printf("n: %zu | ft_strncmp: %d | strncmp: %d | %s\n", 
               n[i], ft_res, std_res, (ft_res == std_res || (ft_res * std_res > 0)) ? "PASS" : "FAIL");
    }
}

void teste_17(void) {
    printf("\nTesting ft_strnstr:\n");
    char *haystack = "Hello, World!";
    char *needles[] = {"World", "Hello", "", NULL};
    size_t len = strlen(haystack);
    for (int i = 0; needles[i]; i++) {
        char *ft_res = ft_strnstr(haystack, needles[i], len);
        char *std_res = strnstr(haystack, needles[i], len);
        printf("Needle: '%s' | ft_strnstr: %p | strnstr: %p | %s\n", 
               needles[i], ft_res, std_res, ft_res == std_res ? "PASS" : "FAIL");
    }
}

void teste_18(void) {
    printf("\nTesting ft_strrchr:\n");
    char str[] = "Hello, World!";
    char *ft_res = ft_strrchr(str, 'o');
    char *std_res = strrchr(str, 'o');
    printf("ft_strrchr vs strrchr: %s\n", ft_res == std_res ? "PASS" : "FAIL");
}

void teste_19(void) {
    printf("\nTesting ft_tolower:\n");
    char chars[] = {'A', 'z', '0', '@', 0};
    for (int i = 0; chars[i]; i++) {
        int ft_res = ft_tolower(chars[i]);
        int std_res = tolower(chars[i]);
        printf("Char: %c | ft_tolower: %c | tolower: %c | %s\n", 
               chars[i], ft_res, std_res, ft_res == std_res ? "PASS" : "FAIL");
    }
}

void teste_20(void) {
    printf("\nTesting ft_toupper:\n");
    char chars[] = {'a', 'Z', '0', '@', 0};
    for (int i = 0; chars[i]; i++) {
        int ft_res = ft_toupper(chars[i]);
        int std_res = toupper(chars[i]);
        printf("Char: %c | ft_toupper: %c | toupper: %c | %s\n", 
               chars[i], ft_res, std_res, ft_res == std_res ? "PASS" : "FAIL");
    }
}

int main(void)
{
	/*teste_1();
	teste_2();
	teste_3();
	teste_4();
	teste_5();
	teste_6();
	teste_7();
	teste_8();
	teste_9();*/
	teste_10();
	teste_11();
	teste_12();
	teste_13();
	teste_14();
	teste_15();
	teste_16();
	teste_17();
	teste_18();
	teste_19();
	teste_20();
	
	return(0);
}
