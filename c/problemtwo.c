/* --------------------------------------------------------------------------
** Filename:    problemtwo.c 
**
** Description:	Write a function that combines two lists by alternatingly 
**              taking elements. For example: given the two lists [a, b, c] 
**              and [1, 2, 3], the function should return [a, 1, b, 2, c, 3].
** 
** Author:      Matthew Jarvis        
** Created:     30th Oct, 2015
**
** TODO:        Merge lists that contain elements of different types. 
** --------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
 
/* 
 * Function: mergeLists
 * ---------------------------------------------------
 * Merges two lists into one (in a zip-like manner).
 * 
 * a: The first list to merge (with b).
 * b: The second list to merge (with a).
 * c: The list a and b are to be merged into.
 */
void mergeLists(char a[], int lena, char b[], int lenb, char c[], int lenc)
{	
	int countab = 0;
	int countc = 0;
	
	while (1)
	{
		if (countab < lena)
		{
			c[countc] = a[countab];
			countc++;
		}
		if (countab < lenb)
		{
			c[countc] = b[countab];
			countc++;
		}
			
		countab++;
		
		if (countc == lenc)
			break;
	}
}


/* 
 * Function: printList
 * ---------------------------------------------------
 * Prints a list to the console.
 * 
 * list: The list to print.
 */
void printList(char list[], int len)
{
	printf("(");
	int isFirstElement = 1;  // boolean value
	for (int i = 0; i < len; i++)
	{
		if (!isFirstElement)
			printf(", ");

		printf("%c", list[i]);
		isFirstElement = 0;
	}
	printf(")");
}


int main()
{
	// The lists to merge.
	char lista[] = { 'a', 'b', 'c' };
	char listb[] = { '1', '2', '3', '4', '5', '6' };
	int lena = sizeof(lista) / sizeof(lista[0]);
	int lenb = sizeof(listb) / sizeof(listb[0]);
	
	// The merged list.
	int lenc = lena + lenb;
	char listc[lenc];
	mergeLists(lista, lena, listb, lenb, listc, lenc);
	
	/* Main program */
	printf("List a: ");
	printList(lista, lena);
	printf("\n");
	
	printf("List b: ");
	printList(listb, lenb);
	printf("\n");
	
	printf("Merged: ");
	printList(listc, lenc);
	printf("\n");
}