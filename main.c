#include <stdio.h>

void printBinary(int num)
{
    for (int i = sizeof(int) * 8 - 1; i >= 0; i--)
    {
        printf("%d", (num >> i) & 1);
    }
    printf("\n");
}

int main()
{
    int value, key, encrypted, decrypted;
    char verbose;

    printf("Enter a value: ");
    scanf("%d", &value);

    printf("Enter a key (number of bits for XOR): ");
    scanf("%d", &key);

    printf("Enable verbose mode? (y/n): ");
    scanf(" %c", &verbose);

    encrypted = value ^ key;

    decrypted = encrypted ^ key;

    printf("Original value (Decimal): %d\n", value);
    if (verbose == 'y')
    {
        printf("Binary: ");
        printBinary(value);
    }

    printf("Encrypted value (Decimal): %d\n", encrypted);
    if (verbose == 'y')
    {
        printf("Binary: ");
        printBinary(encrypted);
    }

    printf("Decrypted value (Original): %d\n", decrypted);
    if (verbose == 'y')
    {
        printf("Binary: ");
        printBinary(decrypted);
    }

    return 0;
}