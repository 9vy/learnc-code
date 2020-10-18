#include <stdio.h>

int main() 
{
    char ch;
    char s[50]; //String
    char sen[100]; 
    scanf("%c\n%s\n%[^\n]%*c",&ch,&s,&sen); // %[^\n]
    printf("%c\n%s\n%s",ch,s,sen);
    return 0;
}
/* Sample Input 0

C
Language
Welcome To C!!

Sample Output 0

C
Language
Welcome To C!!
*/
