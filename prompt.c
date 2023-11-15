#include "simpleshell.h"

/**
 * show_ourPrompt - Displays the custom shell prompt "#daveafo$ ".
 *
 * This function is responsible for showing the prompt
 * at the beginning of each command input line.
 *
 * Return: This function does not return a value (void).
 */

void show_ourPrompt(void)
{
	printf("#daveafo$ ");
	fflush(stdout);
}
