#include <stdio.h>

int main()
{
    //declaring the variables
    int num;
    char ch;
    float f;

    //--Integer--

    //input the integer
    printf("\nEnter the integer: ");
    scanf("%d", &num);//scanf(<datatype>, &<variable name>)  the variable should be declared earlier

    //output the integer
    printf("\nEntered integer is: %d", num);

    //--float--
    //the getchar function takes all the characters and clears it from the input buffer
    while(getchar() != '\n');

    //input the float
    printf("\nEnter the float : ");
    scanf("%f", &f);

    //output the float
    printf("\nEntered float is : %f", f);
    
    //input the Character
    printf("\nEnter the character : ");
    scanf("%c", &ch);//this code here is only for example. On continuous input buffer the scanf does not take the char as an input

    //output the character
    printf("\nYou entered the character : %c", ch);
    
    return 0;
}