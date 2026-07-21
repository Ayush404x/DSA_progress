#include <stdio.h>
#include <stdlib.h>

int furthestDistanceFromOrigin( char* moves); 

int modulus(int x);

int main(void)
{
    int n;
    scanf("%d", &n);
    char* moves = (char*) malloc(n * sizeof(char));

    scanf("%s", moves);

   printf("%d", furthestDistanceFromOrigin( moves));

    return 0;
}

int furthestDistanceFromOrigin( char* moves)
{
    int movement = 0, c_left=0, c_right=0;
    for(int i = 0; moves[i] != '\0'; i++)
    {
        if(moves[i] == 'L')
            c_left++;
        else if(moves[i] == 'R')
            c_right++;
    }

    for(int i = 0; moves[i] != '\0'; i++)
    {
        if(c_left > c_right)    // L occurs more frequently than R
        {
            // _ = L
            if(moves[i] == 'L' || moves[i] == '_')
                movement--;
            else
                movement++;
        }
        else   
        {
            // _ = R
            if(moves[i] == 'R' || moves[i] == '_')
                movement++;
            else
                movement--;
        }
    }
    return modulus(movement);
}

int modulus(int x)
{
    if(x > 0)   return x;
    else        return -x;
}