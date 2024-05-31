// C code for finding count of string in a given 2D
// character array.
#include <stdio.h>
#include <string.h>

#define ARRAY_SIZE(a) (sizeof(a) / sizeof(*a))
// utility function to search complete string from any
// given index of 2d char array
int internalSearch(char *needle, int row,
                int col, char **hay,
                int row_max, int col_max)
{
    int found = 0;
    if (row >= 0 && row <= row_max && col >= 0 &&
        col <= col_max && *needle == hay[row][col])
        {
        char match = *needle++;
        hay[row][col] = 0;

        if (*needle == 0) {
            found = 1;
        } else {
            // through Backtrack searching in every directions
            found += internalSearch(needle, row,
                                    col+1, hay,
                                    row_max, col_max);
            found += internalSearch(needle, row, col-1,
                                    hay, row_max, col_max);
            found += internalSearch(needle, row+1, col,
                                    hay, row_max, col_max);
            found += internalSearch(needle, row-1, col,
                                    hay, row_max, col_max);
        }

        hay[row][col] = match;
    }

    return found;
}

// Function to search the string in 2d array
int searchString(char *needle, int row, int col,
                char **str, int row_count, int col_count)
{
    int found = 0;
    int r, c;

    for (r = 0; r < row_count; ++r) {
        for (c = 0; c < col_count; ++c) {
            found += internalSearch(needle, r, c, str,
                            row_count - 1, col_count - 1);
        }
    }

    return found;
}
// Driver code
int main(void){

    char needle[] = "MAGIC";
    char *input[] = {
        "BBABBM",
        "CBMBBA",
        "IBABBG",
        "GOZBBI",
        "ABBBBC",
        "MCIGAM"
    };
    char *str[ARRAY_SIZE(input)];
    int i;
    for (i = 0; i < ARRAY_SIZE(input); ++i) {
        str[i] = malloc(strlen(input[i]));
        strcpy(str[i], input[i]);
    }

    printf("count: %d\n", searchString(needle, 0, 0,
            str, ARRAY_SIZE(str), strlen(str[0])));

    return 0;
}

