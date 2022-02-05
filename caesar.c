#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key");
        //return 1;
    }
    string text = get_string("plaintext: ");
    int n=strlen(text);
    int K;
    char C;
for (int i=0; i<n ;i++)
{
    if(argc == 2 && isupper(text[i]))
    {
        K = atoi(argv[1]);
        C =((( (text[i]- 65)+ K)% 26)+ 65);
        //printf("CYPHERTEXT: %c\n",C);
    }
    else if(argc == 2 && islower(text[i]))
    {
        K = atoi(argv[1]);
        C =( ( ( (text[i]- 97) + K) % 26)+ 97);
    }
  printf("CYPHERTEXT: %c\n",C);
}
return 0;
printf("\n");

}