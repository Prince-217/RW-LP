#include <stdio.h>

main() {
   
    // Q1. WAP to Convert the given string into uppercase...!!
    
    int i = 0, j = 0, k = 0;
    
    char str[100];

    printf("Enter any string in lower case: ");
    scanf(" %[^\n]",&str);

    while (str[i] != '\0') 
	{
    	if (str[i] >= 'a' && str[i] <= 'z')
		{
            str[i] = str[i] - 32;
        }
        i++;
    }

    printf("Uppercase string: %s", str);
    
    
	// Q2. WAP to Convert the given string into uppercase...!!

    char str2[100];

    printf("\n\nEnter any string in UPPER case: ");
    scanf(" %[^\n]",&str2);

    while (str2[j] != '\0') 
	{
    	if (str2[j] >= 'A' && str2[j] <= 'Z')
		{
            str2[j] = str2[j] + 32;
        }
        j++;
    }
    
    printf("Lowercase string: %s", str2);
    
    
    // Q3. WAP to Convert the given string into togglecase...!!

    char str3[100];

    printf("\n\nEnter any string in ToGglE case: ");
    scanf(" %[^\n]",&str3);

    while (str3[k] != '\0') 
	{
    	if (str3[k] >= 'A' && str3[k] <= 'Z')
		{
            str3[k] += 32;
        }
        else if(str3[k] >= 'a' && str3[k] <= 'z')
        {
        	str3[k] -= 32;
		}
		k++;
    }
    
    printf("Togglecase string: %s", str3);
}
