#include <stdio.h>
struct Card{
    int number;
    int color;
    int shape; 
};

//num is from 1 to 13
//color 0 for Black & 1 for Red
/*  Shape
    1 for Heart
    2 for Diamond
    3 for Spade
    4 for Club
*/

int main()
{
    struct Card Deck[52]={{1,1,1},{1,1,2}};
    printf("%d \n", Deck[0].shape);
    return 0;
}