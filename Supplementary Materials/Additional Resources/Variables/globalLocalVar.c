//C program  to illustrate global and local variable
#include<stdio.h>

int globalVar1 = 22, globalVar2 = 44;
void test();

int main()
{
   int mainVar1 = 22, mainVar2 = 44;
        // mainVar1, mainVar2 are local variables of main function
        /*mainVar1 and mainVar2 variables are having scope
        within this main function only.
        These are not visible to test funtion.*/
        /* If you try to access testVar1 and  testVar2 in this function,
        you will get 'testVar1' undeclared and 'testVar2' undeclared error */
   printf("All global variables are accessed from main function");
   printf("\nvalues: globalVar1=%d:globalVar2=%d",globalVar1,globalVar2);
   printf("\n main local variables values : mainVar1 = %d and mainVar2 = %d", mainVar1, mainVar2);
   test();
   return;
}
void test()
{
   int testVar1 = 50, testVar2 = 80;
        // testVar1, testVar2 are local variables of test function
        /*testVar1 and testVar2 variables are having scope
        within this test function only.
        These are not visible to main function.*/
        /* If you try to access mainVar1 and mainVar2 in this function,
        you will get 'mainVar1' undeclared and 'mainVar2' undeclared
        error */
   printf("\nAll global variables are accessed from test function");
   printf("\nvalues: globalVar1=%d:globalVar2=%d\n",globalVar1,globalVar2);
   printf("\ntest local variables values : testVar1 = %d and testVar2 = %d", testVar1, testVar2);
}