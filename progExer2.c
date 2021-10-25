// imports header file
#include <stdio.h>

//declare main function
int main(void)
{
    //  1. Type in and run the six programs presented in this chapter.

    //  2. Write a program that prints the following text.
    printf("In C, lowercase letters are significant.\n");
    printf("main() is where program execution begins.\n");
    printf("Opening and closing braces enclose program statements in a routine.\n");
    printf("All program statements must be terminated by a semicolon.\n");

    //  3. What output would you expect from the following program?
    printf("Testing...");
    printf("....1");
    printf("...2");
    printf("..3");
    printf("\n");

    /*  4. Write a program that subtracts the value 15 from 87 and displays the
result, together with an appropriate message, at the terminal.*/
    int val1, val2, result;
    val1 = 15;
    val2 = 87;
    result = val2 - val1;
    printf("The resulf of substracting %i minus %i equals to %i.\n", val1, val2, result);

    /*  5. Identify the syntactic errors in the following program. Then type in and
run the corrected program to ensure you have correctly identified all the
mistakes.*/
    /*INT  sum;
        COMPUTE RESULT
        sum = 25 + 37 - 19
        /* DISPLAY RESULTS //
        printf ("The answer is %i\n" sum);
        return 0;*/
    int sum;
    // COMPUTE RESULT
    sum = 25 + 37 - 19;
    // DISPLAY RESULTS
    printf("The answer is %i\n", sum);
    // return 0;

    //  6. What output might you expect from the following program?
    int answer, result1;
    answer = 100;
    result1 = answer - 10;
    printf("The result is %i\n", result1 + 5); //95
    return 0;
}