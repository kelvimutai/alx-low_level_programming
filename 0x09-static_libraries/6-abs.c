#include "main.h"
 
/**
 * _abs - computes the absolute value of an integer
 * @n: the int to check
 * Return: the absolute value of int
 */
int _abs(int n)
{
        	if (n >= 0)
        	{
                    	return (n);
        	}
        	return (-n);
}
 
 
 
============================
 
 
9-strcpy.c
                    	
#include "main.h"




/**


 * char *_strcpy - program copies the string pointed to by src


 * @dest: copy to


 * @src: copy from


 * Return: string value


 */


char *_strcpy(char *dest, char *src)


{


        	int a = 0;


        	int b = 0;


 


        	while (*(src + a) != '\0')


        	{


                    	a++;


        	}


        	for ( ; b < a ; b++)


        	{


                    	dest[b] = src[b];


        	}


        	dest[a] = '\0';


        	return (dest);


}
