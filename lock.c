#include <stdio.h>
int main()
{
    char passcode[5] = "1234";
    char userInput[5];
    int ret = 0;

    printf("passcode: %s\n", passcode);
    printf("Please enter code:");

    scanf("%s", userInput);
    ret = strcmp(passcode, userInput);
    printf("passcode: %s\n", passcode);
    printf("input: %s\n", userInput);
    if (ret == 0)
    {
        printf("Passcodes match\n");
    }
    else
    {
        printf("No match\n");
    }
    return 0;
}
