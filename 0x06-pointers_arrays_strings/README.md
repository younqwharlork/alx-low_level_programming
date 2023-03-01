README


#More pointers, arrays and strings.


#TASKS


0. strcat


Write a function that concatenates two strings.


Prototype: char *_strcat(char *dest, char *src);

This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte

Returns a pointer to the resulting string dest

FYI: The standard library provides a similar function: strcat. Run man strcat to learn more.


1. strncat


Write a function that concatenates two strings.


Prototype: char *_strncat(char *dest, char *src, int n);

The _strncat function is similar to the _strcat function, except that

it will use at most n bytes from src; and

src does not need to be null-terminated if it contains n or more bytes

Return a pointer to the resulting string dest

FYI: The standard library provides a similar function: strncat. Run man strncat to learn more.


2. strncpy


Write a function that copies a string.


Prototype: char *_strncpy(char *dest, char *src, int n);

Your function should work exactly like strncpy

FYI: The standard library provides a similar function: strncpy. Run man strncpy to learn more.


3. strcmp


Write a function that compares two strings.


Prototype: int _strcmp(char *s1, char *s2);

Your function should work exactly like strcmp

FYI: The standard library provides a similar function: strcmp. Run man strcmp to learn more.


4. I am a kind of paranoid in reverse. I suspect people of plotting to make me happy


Write a function that reverses the content of an array of integers.


Prototype: void reverse_array(int *a, int n);

Where n is the number of elements of the array



5. Always look up


Write a function that changes all lowercase letters of a string to uppercase.


Prototype: char *string_toupper(char *);


6. Expect the best. Prepare for the worst. Capitalize on what comes


Write a function that capitalizes all words of a string.


Prototype: char *cap_string(char *);

Separators of words: space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }


7. Mozart composed his music not for the elite, but for everybody


Write a function that encodes a string into 1337.


Letters a and A should be replaced by 4

Letters e and E should be replaced by 3

Letters o and O should be replaced by 0

Letters t and T should be replaced by 7

Letters l and L should be replaced by 1

Prototype: char *leet(char *);

You can only use one if in your code

You can only use two loops in your code

You are not allowed to use switch

You are not allowed to use any ternary operation


8. rot13


Write a function that encodes a string using rot13.


Prototype: char *rot13(char *);

You can only use if statement once in your code

You can only use two loops in your code

You are not allowed to use switch

You are not allowed to use any ternary operation


9. Numbers have life; they're not just symbols on paper


Write a function that prints an integer.


Prototype: void print_number(int n);

You can only use _putchar function to print

You are not allowed to use long

You are not allowed to use arrays or pointers

You are not allowed to hard-code special values


10. A dream doesn't become reality through magic; it takes sweat, determination and hard work


Add one line to this code, so that the program prints a[2] = 98, followed by a new line.


You are not allowed to use the variable a in your new line of code

You are not allowed to modify the variable p

You can only write one statement

You are not allowed to use ,

    You are not allowed to code anything else than the line of expected line of code at the expected line

    Your code should be written at line 19, before the ;

    Do not remove anything from the initial code (not even the comments)

        and don’t change anything but the line of code you are adding (don’t change the spaces to tabs!)

        You are allowed to use the standard library


        11. It is the addition of strangeness to beauty that constitutes the romantic character in art


        Write a function that adds two numbers.


        Prototype: char *infinite_add(char *n1, char *n2, char *r, int size_r);

        Where n1 and n2 are the two numbers

        r is the buffer that the function will use to store the result

        size_r is the buffer size

        The function returns a pointer to the result

        You can assume that you will always get positive numbers, or 0

        You can assume that there will be only digits in the strings n1 and n2

        n1 and n2 will never be empty

        If the result can not be stored in r the function must return 0


        12. Noise is a buffer, more effective than cubicles or booth walls


        Write a function that prints a buffer.


        Prototype: void print_buffer(char *b, int size);

        The function must print the content of size bytes of the buffer pointed by b

        The output should print 10 bytes per line

        Each line starts with the position of the first byte of the line in hexadecimal (8 chars), starting with 0

        Each line shows the hexadecimal content (2 chars) of the buffer, 2 bytes at a time, separated by a space

        Each line shows the content of the buffer. If the byte is a printable character, print the letter, if not, print .

        Each line ends with a new line \n

        If size is 0 or less, the output should be a new line only \n

        You are allowed to use the standard library

        The output should look like the following example, and formatted exactly the same way



====================================


MAIN.H file


#ifndef MAIN_H

#define MAIN_H


int _putchar(char c);

char *_strcat(char *dest, char *src);

char *_strncat(char *dest, char *src, int n);

char *_strncpy(char *dest, char *src, int n);

int _strcmp(char *s1, char *s2);

void reverse_array(int *a, int n);

char *string_toupper(char *a);

char *cap_string(char *a);

char *leet(char *a);

char *rot13(char *a);

void print_number(int n);

char *infinite_add(char *n1, char *n2, char *r, int size_r);

void print_buffer(char *b, int size);


#endif



====================================


0-strcat.c


#include "main.h"

/**

 * _strcat - concatenates two strings

 * @dest: input value

 * @src: input value

 *

 * Return: void

 */

char *_strcat(char *dest, char *src)

{

        int i;

        int j;


        i = 0;

        while (dest[i] != '\0')

        {

                i++;

        }

        j = 0;

        while (src[j] != '\0')

        {

                dest[i] = src[j];

                i++;

                j++;

        }


        dest[i] = '\0';

        return (dest);

}

==================================


1-strncat.c


#include "main.h"

/**

 * _strncat - concatenate two strings

 * using at most n bytes from src

 * @dest: input value

 * @src: input value

 * @n: input value

 *

 * Return: dest

 */

char *_strncat(char *dest, char *src, int n)

{

        int i;

        int j;


        i = 0;

        while (dest[i] != '\0')

        {

                i++;

        }

        j = 0;

        while (j < n && src[j] != '\0')

        {

        dest[i] = src[j];

        i++;

        j++;

        }

        dest[i] = '\0';

        return (dest);

}



=====================================


2-strncpy.c


#include "main.h"

/**

 * _strncpy - copy a string

 * @dest: input value

 * @src: input value

 * @n: input value

 *

 * Return: dest

 */

char *_strncpy(char *dest, char *src, int n)

{

        int j;


        j = 0;

        while (j < n && src[j] != '\0')

        {

                dest[j] = src[j];

                j++;

        }

        while (j < n)

        {

                dest[j] = '\0';

                j++;

        }


        return (dest);

}



====================================



3-strcmp.c


#include "main.h"

/**

 * _strcmp - compare string values

 * @s1: input value

 * @s2: input value

 *

 * Return: s1[i] - s2[i]

 */

int _strcmp(char *s1, char *s2)

{

        int i;


        i = 0;

        while (s1[i] != '\0' && s2[i] != '\0')

        {

                if (s1[i] != s2[i])

                {

                        return (s1[i] - s2[i]);

                }

                i++;

        }

        return (0);

}



====================================



4-rev_array.c


#include "main.h"

/**

 * reverse_array - reverse array of integers

 * @a: array

 * @n: number of elements of array

 *

 * Return: void

 */

void reverse_array(int *a, int n)

{

        int i;

        int t;


        for (i = 0; i < n--; i++)

        {

                t = a[i];

                a[i] = a[n];

                a[n] = t;

        }

}



====================================



5-string_toupper.c


#include "main.h"

/**

 * string_toupper - change all lowercase to uppercase

 * @n: pointer

 *

 * Return: n

 */

char *string_toupper(char *n)

{

        int i;


        i = 0;

        while (n[i] != '\0')

        {

                if (n[i] >= 'a' && n[i] <= 'z')

                        n[i] = n[i] - 32;

                i++;

        }

        return (n);

}



====================================



6-cap_string.c


#include "main.h"


/**

 * cap_string - Capitalizes all words of a string.

 * @str: The string to be capitalized.

 *

 * Return: A pointer to the changed string.

 */

char *cap_string(char *str)

{

        int index = 0;


        while (str[index])

        {

                while (!(str[index] >= 'a' && str[index] <= 'z'))

                        index++;


                if (str[index - 1] == ' ' ||

                    str[index - 1] == '\t' ||

                    str[index - 1] == '\n' ||

                    str[index - 1] == ',' ||

                    str[index - 1] == ';' ||

                    str[index - 1] == '.' ||

                    str[index - 1] == '!' ||

                    str[index - 1] == '?' ||

                    str[index - 1] == '"' ||

                    str[index - 1] == '(' ||

                    str[index - 1] == ')' ||

                    str[index - 1] == '{' ||

                    str[index - 1] == '}' ||

                    index == 0)

                        str[index] -= 32;


                index++;

        }


        return (str);

}



====================================



7-leet.c


#include "main.h"

/**

 * leet - encode into 1337speak

 * @n: input value

 * Return: n value

 */

char *leet(char *n)

{

        int i, j;

        char s1[] = "aAeEoOtTlL";

        char s2[] = "4433007711";


        for (i = 0; n[i] != '\0'; i++)

        {

                for (j = 0; j < 10; j++)

                {

                        if (n[i] == s1[j])

                        {

                                n[i] = s2[j];

                        }

                }

        }

        return (n);

}



====================================


100-rot13.c


#include "main.h"

#include <stdio.h>


/**

 * rot13 - encoder rot13

 * @s: pointer to string params

 *

 * Return: *s

 */


char *rot13(char *s)

{

        int i;

        int j;

        char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

        char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";


        for (i = 0; s[i] != '\0'; i++)

        {

                for (j = 0; j < 52; j++)

                {

                        if (s[i] == data1[j])

                        {

                                s[i] = datarot[j];

                                break;

                        }

                }

        }

        return (s);

}



====================================



101-print_number.c


#include "main.h"


/**

 * print_number - print numbers chars

 * @n: integer params

 * Return: 0

 */


void print_number(int n)

{

        unsigned int n1;


        n1 = n;


        if (n < 0)

        {

                _putchar('-');

                n1 = -n;

        }


        if (n1 / 10 != 0)

        {

                print_number(n1 / 10);

        }

        _putchar((n1 % 10) + '0');

}




====================================



102-magic.c


#include <stdio.h>


int main(void)

{

  int n;

  int a[5];

  int *p;


  a[2] = 1024;

  p = &n;

  /*

   * write your line of code here...

   * Remember:

   * - you are not allowed to use a

   * - you are not allowed to modify p

   * - only one statement

   * - you are not allowed to code anything else than this line of code

   */

  *(p + 5) = 98;

  /* ...so that this prints 98\n */

  printf("a[2] = %d\n", a[2]);

  return (0);

}



===================================


103-infinite_add.c


#include "main.h"


/**

 * rev_string - reverse array

 * @n: integer params

 * Return: 0

 */


void rev_string(char *n)

{

        int i = 0;

        int j = 0;

        char temp;


        while (*(n + i) != '\0')

        {

                i++;

        }

        i--;


        for (j = 0; j < i; j++, i--)

        {

                temp = *(n + j);

                *(n + j) = *(n + i);

                *(n + i) = temp;

        }

}


/**

 * infinite_add - add 2 numbers together

 * @n1: text representation of 1st number to add

 * @n2: text representation of 2nd number to add

 * @r: pointer to buffer

 * @size_r: buffer size

 * Return: pointer to calling function

 */


char *infinite_add(char *n1, char *n2, char *r, int size_r)

{

        int overflow = 0, i = 0, j = 0, digits = 0;

        int val1 = 0, val2 = 0, temp_tot = 0;


        while (*(n1 + i) != '\0')

                i++;

        while (*(n2 + j) != '\0')

                j++;

        i--;

        j--;

        if (j >= size_r || i >= size_r)

                return (0);

        while (j >= 0 || i >= 0 || overflow == 1)

        {

                if (i < 0)

                        val1 = 0;

                else

                        val1 = *(n1 + i) - '0';

                if (j < 0)

                        val2 = 0;

                else

                        val2 = *(n2 + j) - '0';

                temp_tot = val1 + val2 + overflow;

                if (temp_tot >= 10)

                        overflow = 1;

                else

                        overflow = 0;

                if (digits >= (size_r - 1))

                        return (0);

                *(r + digits) = (temp_tot % 10) + '0';

                digits++;

                j--;

                i--;

        }

        if (digits == size_r)

                return (0);

        *(r + digits) = '\0';

        rev_string(r);

        return (r);

}




===================================



104-print_buffer.c



#include "main.h"

#include <stdio.h>


/**

 * print_buffer - prints buffer

 * @b: buffer

 * @size: size

 * Return: void

 */


void print_buffer(char *b, int size)

{

        int o, j, i;


        o = 0;


        if (size <= 0)

        {

                printf("\n");

                return;

        }

        while (o < size)

        {

                j = size - o < 10 ? size - o : 10;

                printf("%08x: ", o);

                for (i = 0; i < 10; i++)

                {

                        if (i < j)

                                printf("%02x", *(b + o + i));

                        else

                                printf("  ");

                        if (i % 2)

                        {

                                printf(" ");

                        }

                }

                for (i = 0; i < j; i++)

                {

                        int c = *(b + o + i);


                        if (c < 32 || c > 132)

                        {

                                c = '.';

                        }

                        printf("%c", c);

                }

                printf("\n");

                o += 10;

        }

}
