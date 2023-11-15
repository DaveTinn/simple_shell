#include "simpleshell.h"
/**
 * show_ourPrompt - Displays the custom shell prompt "#daveafo$ ".
 *
 * This function is responsible for showing the prompt
 * at the beginning of each command input line.
 *
 * Return: Nothing
 */
void show_ourPrompt(void)
{
	char *ourPrompt;

	ourPrompt = "#daveafo$ ";
	write(STDOUT_FILENO, ourPrompt, strlen(ourPrompt));
}
