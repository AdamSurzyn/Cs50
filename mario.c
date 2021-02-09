#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int n;
    int h;
    int m;

    do
    {
        n = get_int("Mario tower width: ");
    }
    while (n < 1 || n > 8);

// First loop should let the loop begin on a new line and subtract 1 from n but it doesn't

    m = n - 1;
    h = n - m;

    for (int i = 0; i < n; i++)
    {

        // Adds 'space' before hashes
        {
            
            for (int j = 0; j < m; j++)

            printf(" ");
            
            m = m - 1;
        }
        // Prints amount of hashes equal to value given by user
        {
            for (int j = 0; j < h; j++)
        
            printf("#");
            
        }
        // Makes two spaces
        {   
            for (int j = 0; j < 2; j++)

            printf(" ");
            
        }
        // Prints amount of hashes equal to value given by user
        {
            for (int j = 0; j < h; j++)

            printf("#");
            
            h = h + 1;
        }

        printf("\n");

    }
}
