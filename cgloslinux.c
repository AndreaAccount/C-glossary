#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
	char end;
	do
	{
		char dv = '"';
		char choice;
		int lsel;
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
		if(choice == 'E')
			return 0;
		if(choice == 'L')
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
					case 10: printf("%s%c%s%c%s%c%s%c%s", "\n\nSYNTAX: printf(", dv, "%[type character]", dv, ", [variable/", dv, "string", dv, "/'character']);\n\nFUNCTION: printf() is used to print a character, a string or a variable's value.");
							 break;
					case 11: printf("%s%c%s%c%s", "\n\nSYNTAX: scanf(", dv, "%[type character]", dv, ", &[variable]);\n\nFUNCTION: scanf() is used to read a value and 'put it into a variable'.");
							 break;
					// Conditional control statements
					case 12: printf("%s", "\n\nSYNTAX: if([variable] [logical operator] [value/other variable]){...}\n\nFUNCTION: the 'if' statement execute the code between the curly brackets\nif the condition(s) in the round brackets is/are true.");
							 break;
					case 13: printf("%s", "\n\nSYNTAX: if([variable] [logical operator] [value/other variable]){code 1} else{code 2}\n\nFUNCTION: the 'if-else' statement executes the code number 1\nif the condition(s) in the round brackets is/are true.\nIf not, the statement 'else' will execute the code number 2");
							 break;
					case 14: printf("%s", "\n\nSYNTAX: switch([variable]){ case [variable's value 1]: ...; break;\n                            case [variable's value 2]: ...; break;}\n\nFUNCTION: the switch statement executes a code or another one\ndepending on the variable's value.");
							 break;
					// Loops
					case 15: printf("%s", "\n\nSYNTAX: while([variable] [logical operator] [value/other variable]){...}\n\nFUNCTION: the 'while' loop executes a code for an undefined number of times,\nuntil the condition between the round brackets become false.");
							 break;
					case 16: printf("%s", "\n\nSYNTAX: do{...}while([variable] [logical operator] [value/other variable]);\n\nFUNCTION: the 'do-while' loop executes a code one time and then repeats\nit until the condition between the round brackets become false.");
							 break;
					case 17: printf("%s", "\n\nSYNTAX: for([initialization]; [condition]; [increment]){...}\n\nFUNCTION: this loop executes the code between the curly brackets for a certain\nnumbers of times.");
							 break;
					case 18: printf("%s", "\n\nSYNTAX: while(condition 1){if(condition 2){break}}\n\nFUNCTION: 'break' is used to exit from a loop or a switch statement.\nSee also: 'if' statement (12) and 'while' loop (15)");
							 break;
					case 19: printf("%s", "\n\nSYNTAX: while(condition 1){if(condition 2){continue}}\n\nFUNCTION: 'continue' is used to skip an iteration of a loop without 'breaking'\nit.\nSee also: 'if' statement (12) and 'while' loop (15)");
							 break;
				}
		printf("%s", "\n\nDo you want to continue? Type 'Y' to repeat the program or another key to close it: ");
		scanf("%s", &end);
		end = toupper(end);
		system("clear");
	} while(end == 'Y');
	return 0;
}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		

