/* pattern17
e 
d e 
c d e 
b c d e 
a b c d e 
*/

#include <stdio.h>

int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    for(int row = 0;row < num; row++)
    {
        for(int col = 0;col <= row;col++)
        {
            printf("%c ", num + 96 - (row - col));
        }
        printf("\n");
    }

    return 0;
}
