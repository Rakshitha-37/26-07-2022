/*pattern28
0
-1 2 
-3 4 -5 
6 -7 8 -9
10 -11 12 -13 14
*/

#include <stdio.h>

int main()
{
    int num, num1 = 0;
    printf("Enter number: ");
    scanf("%d", &num);
    for(int row = 0;row < num; row++)
    {
        for(int col = 0;col <= row;col++)
        {
            if(row <= num/2)
            {
                if((col % 2) == 0)
                {
                   if(num1 != 0)
                   {
                       printf("-%d ", num1);
                   }
                   else
                   {
                       printf("%d ", num1);
                   }
                }
                else
                {
                    printf("%d ", num1);
                }
            }
            else
            {
                if((col % 2) == 0)
                {
                    printf("%d ", num1);
                }
                else
                {
                    printf("-%d ", num1);
                }
            }
            num1 = num1 + 1;
        }
        printf("\n");
    }

    return 0;
}
