#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{

    // Run dir + supplied arg(S)
    if (argc == 2)
    {
        // printf("The argument supplied is %s\n", argv[1]);

        // First part of the command is always the same
        char exp[] = "dir ";
        // Create a new char array that has the size of the command, and length of the supplied argument
        char target[sizeof exp + sizeof argv[1]];
        // Copies contents of foo to target buffer
        strcpy(target, exp);
        // Appends contents of bar to target buffer
        strcat(target, argv[1]);
        // Run the command
        system(target);
    }
    else if (argc > 2)
    {
        printf("Too many arguments supplied.\n");
    }
    // If no arguments are supplied, open the current directory in file explorer
    else
    {
        system("dir");
    }
    return 0;
}