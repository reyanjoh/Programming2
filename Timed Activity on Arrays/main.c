#include <stdio.h>
#include <stdlib.h>

int main()
{
        //Accounts 2D array declaration
    int userCredentials[3][2] ={
        {123, 123},
        {456, 456},
        {789, 789}
    };
        //User Input Variables declaration
    int idInput, PinInput, ID_Is_valid, PIN_Is_valid;

        //Will Prompt User To Input ID
        printf("Enter ID number: ");
        ID_Is_valid = scanf("%d", &idInput);
        //Will Prompt User To PIN
        printf("\nEnter PIN: ");
        PIN_Is_valid = scanf("%d", &PinInput);

        //Authentication stage
    if( ID_Is_valid && PIN_Is_valid && /*<==== This Will not Authenticate the User if Any Input is Not a Number*/
        idInput == userCredentials[0][0] && PinInput == userCredentials[0][1] || /*<==== This Will not Authenticate the User if ID and PIN doesnt match/exist*/
        idInput == userCredentials[1][0] && PinInput == userCredentials[1][1] ||/*<==== This Will also not Authenticate the User if ID and PIN doesnt match/exist*/
        idInput == userCredentials[2][0] && PinInput == userCredentials[2][1]){/*<==== This Will also not Authenticate the User if ID and PIN doesnt match/exist*/

        //This will Run when Authenticated
        system("cls");
        system("color a");
        printf("\nYou have Successfully Logged In!\n\n");
        printf("ID # : %d \n\n\n\n", idInput);
        return 0;

    }else{
        //This will Run if User is Not Authenticated
        system("cls");
        system("color C");
        printf("\n\nInvalid ID!/PIN\n\n\n");
        return 0;
    }

}
