#include<stdio.h>

int calculate(int a, int b, int type) {
    switch (type)
    {
    case 1 :
        return a + b;
        break;
    case 2 :
        return a - b; 
    case 3 :
        return a * b;
    case 4 :
        return a / b;
    }

}

int main() {
    printf("**** Lets Calculate **** \n");
    int action = 1;
    while (action == 1 || action == 2 || action == 3 || action == 4) {
        printf("\n\nChoose Action\n");
        printf("1 to add\n");
        printf("2 to subtract\n");
        printf("3 to multiply\n");
        printf("4 to divide\n");
        printf("Enter any other number to end\n");
        printf("Your choice? : ");
        scanf("%d",&action);
        if(action == 1 || action == 2 || action == 3 || action == 4 ) {
            int a,b,result;
            printf("\nEnter First Number: ");
            scanf("%d", &a);
            printf("\nEnter Second Number: ");
            scanf("%d", &b);
            result =  calculate(a, b, action);
            printf("\nResult is: %d", result);
        }
    };
    
    printf("\n\n**** Thank You ****");
}