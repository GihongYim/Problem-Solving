#include <stdio.h>

//  @@@   @@@   @@@   @@@
// @   @ @   @ @   @ @   @
// @    @    @ @    @    @
// @         @ @         @
//  @       @   @       @
//   @     @     @     @
//    @   @       @   @
//     @ @         @ @
//      @           @

int main(void)
{
    char heart[9][12] = {
        " @@@   @@@  ",
        "@   @ @   @ ",
        "@    @    @ ",
        "@         @ ",
        " @       @  ",
        "  @     @   ",
        "   @   @    ",
        "    @ @     ",
        "     @      "
        };
    int N;

    scanf("%d", &N);
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < 12; k++) {
                printf("%c", heart[i][k]);
            }
        }
        printf("\n");
    }
    return 0;
}