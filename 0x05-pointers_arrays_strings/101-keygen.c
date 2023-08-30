#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* generate_password - Generates a random valid password for 101-crackme.
* @password: Pointer to store the generated password.
* @length: Length of the password.
*/
void generate_password(char *password, int length)
{
const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
int i;

srand(time(NULL));

for (i = 0; i < length; i++)
{
int index = rand() % (sizeof(charset) - 1);
password[i] = charset[index];
}

password[length] = '\0';
}

int main(void)
{
char password[9]; // Assuming maximum password length of 8 characters

generate_password(password, 8);
printf("%s\n", password);

return (0);
}
