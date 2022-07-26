/*pattern9
1 
4 9 
16 25 36
49 64 81 100
121 144 169 196 225
*/

#include <stdio.h>

int main()
{
    int num, num1 = 1, res;
    printf("Enter number: ");
    scanf("%d", &num);
    for(int row = 0;row < num; row++)
    {
        for(int col = 0;col <= row;col++)
        {
            res = num1 * num1;
            printf("%d ", res);
            num1 = num1 + 1;
        }
        printf("\n");
    }

    return 0;
}
