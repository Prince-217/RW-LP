#include <stdio.h>
#include <string.h>

main()
{
    char pwd[100];
    int i, length;
    int hasLetter, hasDigit, hasSpecial;

    while (1)
    {
        hasLetter = 0;
        hasDigit = 0;
        hasSpecial = 0;

        printf("\nEnter your password: ");
        scanf("%s", pwd);

        length = strlen(pwd);

        if (length < 6)
        {
            printf("Password must be at least 6 characters long.\n");
        }

        for (i = 0; pwd[i] != '\0'; i++)
        {
            if ((pwd[i] >= 'a' && pwd[i] <= 'z') ||
                (pwd[i] >= 'A' && pwd[i] <= 'Z'))
            {
                hasLetter = 1;
            }
            else if (pwd[i] >= '0' && pwd[i] <= '9')
            {
                hasDigit = 1;
            }
            else
            {
                hasSpecial = 1;
            }
        }

        if (!hasLetter)
            printf("Password must contain at least one letter.\n");

        if (!hasDigit)
            printf("Password must contain at least one digit.\n");

        if (!hasSpecial)
            printf("Password must contain at least one special symbol.\n");

        if (length >= 6 && hasLetter && hasDigit && hasSpecial)
        {
            printf("\nYour password is Strong.\n");
            break;
        }
        else
        {
            printf("Please try again.\n");
        }
    }
    
    // Q2. WAP of login mechanism...!!
    
    printf("\n\nLogin Mechanism Programme...!!\n\n");
    printf("Available Emails And Passw	ords ::");
    printf("\n==================================");
    printf("\nadmin@gmail.com => PWD :- 123456");
    printf("\nxyz@gmail.com   => PWD :- 123456");
    printf("\n==================================");

    while (1)
    {
        char email[100];
        char pswd[100];

        printf("\n\nEnter your email :- ");
        scanf("%s", email);

        printf("Enter your password :- ");
        scanf("%s", pswd);

        if ((strcmp(email, "admin@gmail.com") == 0 || strcmp(email, "xyz@gmail.com") == 0) && strcmp(pswd, "123456") == 0)
        {
            printf("\nLogin Successful...!!");
            break;
        }
        else
        {
            printf("\nLogin Failed. Invalid Credentials.");
        }
    }

    printf("\n\nThank You...!!");
}
