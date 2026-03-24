#include <stdio.h>
#include <string.h>

// Global variables
struct User {
    char user_name[16];
    int pass_word;
};

struct User u[20];
int user_count = 0;   // tracks number of registered users

void new_user() {
    if (user_count < 20) {
        printf("Welcome!\nEnter your username: ");
        scanf("%15s", u[user_count].user_name); // limit input to avoid overflow

        printf("Enter your password (numbers only): ");
        scanf("%d", &u[user_count].pass_word);

        user_count++;
        printf("User added successfully!\n");
    } else {
        printf("No new users can be added. Sorry!\n");
    }
}

void login() {
    char name_inst[16];
    int pass_inst;
    int found = 0;

    printf("Enter your username: ");
    scanf("%15s", name_inst);  // fixed variable name

    for (int i = 0; i < user_count; i++) {
        if (strcmp(name_inst, u[i].user_name) == 0) {
            found = 1;
            printf("Enter your password: ");
            scanf("%d", &pass_inst);

            if (pass_inst == u[i].pass_word) {
                printf("Welcome, Login Successful!\n");
            } else {
                printf("Incorrect password!\n");
            }
            break;
        }
    }

    if (!found) {
        printf("No such user exists\n");
    }
}

int main() {
    int _input;

    printf("Which operation do you want to perform?\n1. Sign-Up\n2. Login\n");
    scanf("%d", &_input);

    if (_input == 1) {
        new_user();
    } else if (_input == 2) {
        login();
    } else {
        printf("Invalid option.\n");
    }

    return 0;
}

