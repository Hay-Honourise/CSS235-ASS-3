/*
NAME        :: RAZAQ HAMMED ABIOLA
MATRIC NO   :: 230927
DEPARTMENT  :: COMPUTER SCIENCE
LEVEL       :: 200L
ASSIGHTNMENT::3       QUESTION 1:  Duplicate files
                                To delete duplicate files and keep the original source
*/
/*
IMPORTANT NOTICE!!!

 CREATE A FILE NAMED "dupe.txt"WITH IT'S CONTENT ON YOUR COMPUTER BEFORE RUNNING THE PROGRAM
 */


#include <stdio.h>
#include <stdlib.h>

int main(){

char T;
int N=1;


FILE* duplicate1;
    duplicate1 = fopen("dupe.txt", "r");
    if(duplicate1==NULL){

    printf("COULD NOT READ ANYTHING SO THE FILE IS EMPTY");
    exit(1);
    }

    while ((T=fgetc(duplicate1))!=EOF) //FOR T=fgetc(fp))!=EOF
    {
        if(T=='\n')
        {
        N=N+1;
        }

    }

fclose(duplicate1);

            printf("THE NUMBER OF FILES WHICH CAN'T BE DELETED IS: %d\n \n", N);


            printf("THE FILES ARE AS FOLLOW: \n");

            FILE* duplicate;
                duplicate=fopen("dupe.txt", "r");
                    char singleline [150];

                    while(!feof(duplicate)){
            fgets (singleline, 150, duplicate);
                puts(singleline);
                    }
                    fclose(duplicate);




return 0;

}

/*
                                    PSEUDOCOCODE TO SOLVE THE PROBLEM DUPLICATE FILE


                                    #INCLUDE <STDIO.H>          //A standard library to include the input,output and strings related functions
                                    #INCLUDE <STDLIB.H

                                    INT MAIN()// The brain of the program
                                    {

                                    CHAR T;     //Declaring Character
                                    INT N=1;       //Initialising N to be equall to 1


                                    FILE* duplicate1;
                                        duplicate1 = fopen("dupe.txt", "r");    // Open the Dupe to read in it
                                        IF(duplicate1==NULL){

                                        PRINTF("COULD NOT READ ANYTHING SO THE FILE IS EMPTY");// Message box to user when the program can't read the file
                                        EXIT(1);
                                        }

                                                        WHILE ((T=fgetc(duplicate1))!=EOF) //FOR T=fgetc(fp))!=EOF  // To get from the open file
                                                        {
                                                            IF(T=='\n')
                                                            {
                                                            N=N+1;                                                     //To add one to N
                                                            }

                                                        }

                                    FCLOSE(duplicate1);  //Clossing the opened file

                                                PRINTF("THE NUMBER OF FILES WHICH CAN'T BE DELETED IS: %d\n \n", N);  //Display message to user


                                                PRINTF("THE FILES ARE AS FOLLOW: \n"); Displaying message to the User

                                                FILE* duplicate;
                                                    duplicate=fopen("dupe.txt", "r");
                                                        char singleline [150];

                                                        while(!feof(duplicate)){
                                                fgets (singleline, 150, duplicate);
                                                    puts(singleline);
                                                        }
                                                        fclose(duplicate);




                                    RETURN 0;                       //To return 0 value

                                    }


                                    */








