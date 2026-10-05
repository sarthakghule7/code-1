/*
    1. understand the problem statement 
    2. write the algorithm
    3. decide th programming lang
    4. write the programm
    5. test the programm

*/

///////////////////////////////////////////////////////
//
// 1 : understand the problem statement 
//   user is going to enter any two integrs 
//   and we have to perforn addition 
//
//////////////////////////////////////////////////////


/////////////////////////////////////////////////////
//
// 2 : write the algorithm
     /*
        START
            accept 1st num as no1
            accept 2nd num as no2
            create variable ans to store result
            perform addtion and stored into ans 
            display the result
        STOP
     */
// 
//
///////////////////////////////////////////////////////

   
///////////////////////////////////////////////////////
//
// 3 : decide the programming lang 
//     we select c programming 
//
///////////////////////////////////////////////////////


//////////////////////////////////////////////////////
//
// 4 : write a programm 
//
//////////////////////////////////////////////////////




#include<stdio.h>

///////////////////////////////////////////////////////
//
// Function name : Addition
// Input         : Integer , Integer
// Output        : Integer
// Description   : Performs Addition
// Date          : 04/10/2026
// Author        : Sarthak Machindra Ghule
//
///////////////////////////////////////////////////////

int  Addition(int iNo1, int iNo2)
{
    int iAns = 0;
    iAns = iNo1+iNo2;// buisness loogic
    return iAns;
}

////////////////////////////////////////////////////////
//
//  Entry point of the application
//
/////////////////////////////////////////////////////////

int main()
{

    int iValue1=0 , iValue2=0 , iResult=0;

    printf("enter the iValue1:\n");
    scanf("%d",&iValue1);

    printf("enter the iValue2:\n");
    scanf("%d",&iValue2);

    iResult = Addition(iValue1,iValue2);  

    printf("the adiition is :%d\n",iResult);

    return 0;
} 

/////////////////////////////////////////////////////////
//
//  5 : test the programm
//      
//      tested test cases 
//   -------------------------------------------
//     input1     input2       output
//   ------------------------------------------
//      11          10          21
//      10          0           11
//      0           10          10
//      20          -9          11
//      -9          20          11
//      -10         -11         -21
//
/////////////////////////////////////////////////////////