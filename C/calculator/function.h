#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Global variables*/

float number1; float number2; float result;

/*Bloc of vizualization*/

int calc (){

printf("\n====== Calculator ======\n");

printf("Insert the first value: \n");
scanf("%f", &number1);

printf("Insert the second value: \n");
scanf("%f", &number2);

system("cls");

options();

return 0;

}

int options(){

    int option;

    printf("\n ====== Select a Option ====== \n");
    printf("\n 1 - Sum \n");
    printf("\n 2 - Subtraction \n");
    printf("\n 3 - Multiplication \n");
    printf("\n 4 - Division \n");
    printf("\n 0 - Exit \n");
    printf("\n======================\n");

    printf("\n Insert a option:");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
        sum();
        break;

    case 2:
        sub();
        break;
    
    case 3:
        multi();
        break;
    
    case 4:
        divi();
        break;
    
    case 0:
        exit(1);
        break;
    
    default:
        printf("====== Error: invalid option ======\n");
        return 1;
        break;
    }

    return 0;

}

/*Bloc of operations*/

int sum (){

result = number1 + number2;

printf("\n Result is: %2.1f \n", result);
return 0;
    
}

int sub(){

result = number1 - number2;

printf("\n Result is: %2.1f \n", result);
return 0;
    
}

int multi (){

result = number1 * number2;

printf("\n Result is: %2.1f \n", result);
return 0;
    
}

int divi (){

if (number2 == 0)
{
    printf("\n Is not possible divide for 0!\n");
    return 1;
}
else{

    result = number1 / number2;

    printf("\n Result is: %2.1f \n", result);
    return 0;
}
    
}


