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
int main()
{

    int iValue1=0 , iValue2=0 , iResult=0;

    printf("enter the iValue1:");
    scanf("%d",&iValue1);

     printf("enter the iValue2:");
    scanf("%d",&iValue2);

    iResult= iValue1+iValue2 ;  // buisness logic 

    printf("%d\n",iResult);


    return 0;;
}