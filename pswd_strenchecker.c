#include <stdio.h>
#include <string.h>
#include <ctype.h>


char password[100];  /*defined the string as array of 100 characters with 100th character being the null terminal*/
   
      int i;                  /*loop counter*/
    


   /*Condition Flags to confirm if we have the following, if we do then set flags to 1*/

int upper_case = 0;
int lower_case = 0;
int has_digits = 0;
int has_whitespaces = 0;
int has_punctuation = 0;




/*Execution point of program*/

int main(int argc, char** argv) {


     /*Prompts user to enter a password*/

    printf("Please enter password: \n");



    /*Gets the name of password as input*/

fgets(password, 100, stdin);



password[strcspn(password, "\n")] = '\0';


 /*The for loops loops through each character within the password*/

 /*password[i] != '\0'; sets it so the loop counter stops at the null terminator*/
for (int i = 0; password[i] != '\0'; i ++){



    /*Asking if my password has an upper case*/

    if (isupper(password[i])) {


        /*If password has upper case then condition flag is set to 1*/

        upper_case = 1;

}


    /*Asking if my password has a lower case*/

    if (islower(password[i])) {


        /*If password has lower case then condition flag is set to 1*/
        lower_case = 1;
    }

        /*Asking if my password has any digits*/

    if (isdigit(password[i])) {

        /*If password has any digits then condition flag is set to 1*/

        has_digits = 1;

}

        /*Asking if my password has any whitespaces/spaces*/

if (isspace(password[i])) {
       
        /*If password has any whitespaces/spaces then condition flag is set to 1*/

        has_whitespaces = 1;

}

 /*Asking if my password has any punctuation*/

if (ispunct(password[i])) {

    /*If password has any punctuation then condition flag is set to 1*/

    has_punctuation = 1;

}

}



     /*Scoring*/

    int score = (upper_case + lower_case + has_digits + has_whitespaces + has_punctuation);

    printf("score: %d\n", score);

    
    if (score <= 2){

    printf("Weak\n");

    }


    else
    
    if (score == 3){

    printf("Medium\n");
    
    }


    else {

    printf("Strong\n");


}

/* clear anything left in the input buffer */
int c;
while ((c = getchar()) != '\n' && c != EOF) {
    /* keep reading until newline or end, discarding */
}

/* now pause for real */
printf("\nPress Enter to exit...");
getchar();


}