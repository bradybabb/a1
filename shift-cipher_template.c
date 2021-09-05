// no idea how to turn in 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 500

int getUserChoice();
int getShift();
void getString(char buf[]);
void encrypt(char buf[], int shift);
void decrypt(char buf[], int shift);

int main()
{
	int option;

char buf[SIZE] = {'\0'};

int shift = 3;

while (1)

{

getUserChoice();

option = getUserChoice();
memset (buf, '\0', SIZE);

switch (option)

{

case 1:

shift = getShift();

break;

case 2:


getString(buf);

encrypt (buf, shift);

break;

case 3:


getString(buf);

decrypt (buf, shift);

break;

case 4:

return 0;


}

}


int getUserChoice(void);
{	
	int i;

	printf("--------------------------------\n");
	printf("|  1) Change Shift (default 3) |\n");
	printf("|  2) Encrypt a message        |\n");
	printf("|  3) Decrypt a message        |\n");
	printf("|  4) Quit                     |\n");
	printf("--------------------------------\n");
	printf("%s" , "Option: \n");
	scanf("%d" , &i);

	return i;

}

int getShift(void);
{	
	int i;

printf ("Enter new shift value: ");

scanf ("%d", &i);

printf ("\n");

return i;

}

void getString(char buf[]);
{
	char t;

printf ("Input: ");

scanf ("%c", &t);

scanf ("%[^\n]s", buf);

return t;

}

void encrypt(char buf[], int shift);
{
	int enc = 0, i;

enc = strlen (buf);

for (i = 0; i < enc; i++)

{

buf[i] = buf[i] + shift;

}

printf ("Output: %s \n", buf);

return;

}

void decrypt(char buf[], int shift);
{
	int dec = 0 , i;

dec = strlen (buf);

for (i = 0; i < dec; i++)

{

buf[i] = buf[i] - shift;

}

printf ("Output: %s \n", buf);

return;


}

