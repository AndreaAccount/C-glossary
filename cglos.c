#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char dv = '"';
	int lsel;
	char choice;
	printf("%s", "C GLOSSARY\nInstructions' syntax list, their function and definitions\n\n----------------------------------------------\n");
	printf("%s", "\nType:\n- 'L' to display the list of instructions currently \n  covered in this glossary.");
	printf("%s", "\n- 'E' to exit the program\n");
	do
	{	
		scanf("%c", &choice);
		choice = toupper(choice);
		if(choice != 'L')
			printf("ERROR: invalid option. Please, try again: ");
	} while(choice != 'L');
	if(choice == 'E' || choice == 'e')
		return 0;
	if(choice == 'L' || choice == 'l')
	{
				printf("%s", "\nVariables list:\n1. integer\n2. short\n3. long\n4. float\n5. double\n6. boolean\n7. char");
				printf("%s", "\n\nI/O commands list:\n8. putchar()\n9. getchar()\n10. printf()\n11. scanf()");
				printf("%s", "\n\nConditional control statements list:\n12. if\n13. if-else\n14. switch");
				printf("%s", "\n\nLoop statements list, 'break' and 'continue':\n15. while\n16. do-while\n17. for\n18. break\n19. continue\n");
				printf ("%s", "Which one do you choose?\nType the number: ");
				scanf("%i", &lsel);
	}
			switch(lsel)
			{
				// Variables
				case 1: printf("%s", "\n\nSYNTAX:  int [variable's name] = [variable's value (optional)];\n\nDEFINITION: an integer variable is a storage location (capacity: 16 or 32 bits, depending on the compiler) capable to 'contain' a integer number.");
						break;
				case 2: printf("%s", "\n\nSYNTAX:  short [variable's name] = [variable's value (optional)];\n\nDEFINITION: a short variable is a storage location (capacity: 16 bits)\ncapable to 'contain' an integer number.");
						break;
				case 3: printf("%s", "\n\nSYNTAX:  long [variable's name] = [variable's value (optional)];\n\nDEFINITION: a long variable is a storage location (capacity: 32 bits)\ncapable to 'contain' an integer number.");
						break;
				case 4: printf("%s", "\n\nSYNTAX:  float [variable's name] = [variable's value (optional)];\n\nDEFINITION: a float variable is a storage location (capacity: 32 bits)\ncapable to 'contain' a real number.");
						break;
				case 5: printf("%s", "\n\nSYNTAX:  double [variable's name] = [variable's value (optional)];\n\nDEFINITION: a double variable is a storage location (capacity: 64 bit)\ncapable to 'contain' a real number.");
						break;
				case 6: printf("%s", "\n\nSYNTAX: _Bool [variable's name] = [variable's value (optional)];\n\nDEFINITION: a boolean variable can have\nonly two values: TRUE (1) or FALSE (0).");
						break;
				case 7: printf("%s", "\n\nSYNTAX: char [variable's name] = ['variable's value' (optional)];\n\nDEFINITION: a char variable is a storage location (capacity: 8 bits) capable to\n'contain' an ASCII character.");
						break;
				// I/O commands
				case 8: printf("%s", "\n\nSYNTAX: putchar('[character]');\n        putchar([char variable]);\n\nFUNCTION: putchar() is used to display a single ASCII character or a char\nvariable's value.");
						break;
				case 9: printf("%s", "\n\nSYNTAX: [variable's name] = getchar();\n\nFUNCTION: getchar() is used to read an ASCII character from the keyboard.");
						break;
				case 10: printf("%s%c%s%c%s%c%s%c%s", "SYNTAX: printf(", dv, "%[type character]", dv, ", [variable/", dv, "string", dv, "/'character']);\n\nFUNCTION: printf() is used to print a character, a string or a variable's value.");
				break;			
			}
}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		

