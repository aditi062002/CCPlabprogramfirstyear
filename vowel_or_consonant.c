#include <stdio.h>

void vowel_con(char c)
{
    switch(c){
      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u':
       printf("vowel\n");
       break;
       default:
          printf("consonant\n");
    }

}
int main()
{
    printf("Enter character to check vowel or consonant: ");
    char c;
    scanf("%c",&c);
    printf("%c is ",c);
    vowel_con(c);

    return 0;
}
