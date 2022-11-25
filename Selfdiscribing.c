/*
NAME        :: RAZAQ HAMMED ABIOLA
MATRIC NO   :: 230927
DEPARTMENT  :: COMPUTER SCIENCE
LEVEL       :: 200L
ASSIGHTNMENT::3       QUESTION 2:   AN INTEGER SAID TO BE SELF DESCRIBING ONLY IF FIRST DIGIT REPRESENT THE NUMBER OF ZERO'S (0) IN THE INTEGER
                                    AND IF THE FIRST DIGIT REPRESENT THE NUMBER OF ONE'S IN THE INTEGER.

*/


//A standard library to include the input,output and strings related functions
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
AN INTEGER IS SAID TO BE SELF DECRIBING IF THE FOLLOWING CONDITION IS SATISFIED
    >>>IF THE FIRST DIGIT REPRESENT THE NUMBER OF ZERO'S (0) IN THE INTEGER
    >>>IF THE SECOND DIGIT REPRESENT THE NUMBER OF ONE'S (1) IN THE INTEGER
*/
//PROGRAM TO CHECK IF AN INTEGER IS SELF DESCRIBING

int main ()// The brain of the program
{
    int T, n; // T REPRESENT THE NUMBER OF TEST CASES
    int digits [100];


    printf("PLEASE ENTER THE NUMBER OF TEST CASES: ");
   scanf("%d", &T);
    printf("TEST CASE=  %d \n", T);




       int first_number, second_number; //initialicing first_number and second_number
    printf("ENTER THE DIGITS WHERE (0 <= N <10^10): ");//asking user for inputs
    scanf("%d %d", &first_number, &second_number);

    //checks the first digit.
    if(first_number == 0) {
        printf("FIRST LETTER OF INTEGER: %d = AND SELF DESCRIBING",first_number,second_number);
    }

    //checks the second digit.
    else if (first_number ==1) {
        printf("FIRST LETTER OF INTEGER: %d AND IS SELF DESCRIBING", first_number, second_number);
    }

    //checks for the wrong inputs.
    else {
        printf("Result: %d IS WRONG INPUT >>> RUN THROUGH THE INSTRUCTION AGAIN!",first_number, second_number);
    }



    return 0;// return 0 values
}




/*
                                    PSEUDOCOCODE TO SOLVE THE SELF DESCRIBING

                                    //For each and every  standard library to include the input,output and strings related functions
                                    #INCLUDE <STDIO.H>
                                    #INCLUDE <STDLIB.H>
                                   INCLUDE <STRING.H>
                                    /*
                                    AN INTEGER IS SAID TO BE SELF DECRIBING IF THE FOLLOWING CONDITION IS SATISFIED
                                        >>>IF THE FIRST DIGIT REPRESENT THE NUMBER OF ZERO'S (0) IN THE INTEGER
                                        >>>IF THE SECOND DIGIT REPRESENT THE NUMBER OF ONE'S (1) IN THE INTEGER
                                    */
                                    //PROGRAM TO CHECK IF AN INTEGER IS SELF DESCRIBING

                                   /* INT MAIN ()// The brain of the program
                                    {
                                        INT T, n; // T REPRESENT THE NUMBER OF TEST CASES
                                        INT digits [100];


                                        PRINTF("PLEASE ENTER THE NUMBER OF TEST CASES: ");
                                       SCANF("%d", &T);
                                        PRINTF("TEST CASE=  %d \n", T);  Displaying takened output



                                           INT first_number, second_number; //initialicing first_number and second_number
                                        PRINTF("ENTER THE DIGITS WHERE (0 <= N <10^10): ");//asking user for inputs
                                        SCANF("%d %d", &first_number, &second_number);// STORING THE INPUT

                                        //checks the first digit.
                                                    IF(first_number == 0) {
                                                        PRINTF("FIRST LETTER OF INTEGER: %d = AND SELF DESCRIBING",first_number,second_number);
                                                    }

                                                    lse IF (first_number ==1) {                //checks the second digit.

                                                        PRINTF("FIRST LETTER OF INTEGER: %d AND IS SELF DESCRIBING", first_number, second_number);
                                                    }

                                        //checks for the wrong inputs.
                                        else {
                                            PRINTF("Result: %d IS WRONG INPUT >>> RUN THROUGH THE INSTRUCTION AGAIN!",first_number, second_number);
                                        }



                                        return 0;// return 0 values
                                    }


*/
