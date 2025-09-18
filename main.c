#include <stdio.h>

int main(void)
{
    char c, d;
    
    printf("Enter a character : ");
    scanf("%c", &c);
    
    d= c+1;
    printf("The next character of %c (%d) is %c (%d).\n", c, c, d, d);
    system("PAUSE");
    return 0;
}
