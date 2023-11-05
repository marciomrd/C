#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Global variables*/

float i; float j; float result;

/*Bloc of vizualization*/

int calc (){

printf("\n====== Calculator ======\n");

printf("Insert the first value: \n");
scanf("%f", &i);

printf("Insert the second value: \n");
scanf("%f", &j);

system("cls");

options();

return 0;

}

int options(){

    int opt;

    printf("\n ====== Select a Option ====== \n");
    printf("\n 1 - Sum \n");
    printf("\n 2 - Subtraction \n");
    printf("\n 3 - Multiplication \n");
    printf("\n 4 - Division \n");
    printf("\n 0 - Exit \n");
    printf("\n======================\n");

    printf("\n Insert a option:");
    scanf("%d", &opt);

    switch (opt)
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
        break;
    }

    return 0;

}

/*Bloc of operations*/

int sum (){

result = i + j;

printf("\n Result is: %2.1f \n", result);
return 0;
    
}

int sub(){

result = i - j;

printf("\n Result is: %2.1f \n", result);
return 0;
    
}

int multi (){

result = i * j;

printf("\n Result is: %2.1f \n", result);
return 0;
    
}

int divi (){

result = i / j;

printf("\n Result is: %2.1f \n", result);
return 0;
    
}


