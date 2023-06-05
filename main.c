#include <stdio.h>
#include <string.h>

void help() {
    printf("List of commands:\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
}

void command(char* action) {

    if (strcmp(action, "!help") == 0) {
        help();
    } else {
        printf("%s",action);
        printf(" is not recognized as a valid command use !help for a list of commands\n");
    }
}

int main() {
    char action[100];

    while (1) {
        printf("Task-Master/.> ");
        fgets(action, sizeof(action), stdin);

        action[strcspn(action, "\n")] = 0;

        command(action);
    }

    return 0;
}