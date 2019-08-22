// Chapter 3: Self-review exercise 3.48
// (Enforcing Privacy with Cryptography) Your application should read
//  a four-digit integer entered by the user and encrypt it as follows:
//  1. Replace each digit with the result of adding 7 to the digit and
//  getting the remainder after dividing the new value by 10.
//  2. Then swap the first digit with the third, and swap the second digit
//  with the fourth.
//  3. Then print the encrypted integer.

//  Write a separate application that inputs an encrypted four-digit integer
//  and decrypts it (by reversing the encryption scheme) to form the
//  original number.
#include <stdio.h>

int main(void)
{
    // get data from user, store in a temp value also
    int data;
    printf("%s", "Enter data to encrypt: ");
    scanf("%d", &data);

    // separate data into digits
    int digit4 = data % 10;
    data /= 10;
    int digit3 = data % 10;
    data /= 10;
    int digit2 = data % 10;
    data /= 10;
    int digit1 = data % 10;

    // encrypt data by: digit = (digit + 7) % 10
    digit4 = (digit4 + 7) % 10;
    digit3 = (digit3 + 7) % 10;
    digit2 = (digit2 + 7) % 10;
    digit1 = (digit1 + 7) % 10;

    // output the encrypted data
    printf("Your encrypted data is: %d%d%d%d\n",
            digit3, digit4, digit1, digit2);
}