#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    char op;
    float num1, num2;
    char response[10];

    do {
        printf("Enter thr first number: ");
        scanf("%f", &num1);

        printf("Enter the operator: ");
        scanf(" %c", &op);

        printf("Enter the second number: ");
        scanf("%f", &num2);

        switch(op){
            case '+':
                printf("%.1f + %.1f = %.1f\n", num1, num2, num1 + num2);
                break;
            case '-':
                printf("%.1f - %.1f = .%1f\n", num1, num2, num1 - num2);
                break;
            case '*':
                printf("%.1f * %.1f = .%1f\n", num1, num2, num1 * num2);
                break;
            case '/':
                if(num2 != 0){
                    printf("%.1f / %.1f = .%1f\n", num1, num2, num1 / num2);
                }else{
                    printf("Error: Division by zero\n");
                }
                break;
            default:
                printf("Invalid operator!\n");
        }
        
        printf("Another operation? (yes/no): ");
        scanf("%s", response);

        for(int i = 0; response[i]; i++){
            response[i] = tolower(response[i]);
        }

    } while(strcmp(response, "yes") == 0);

    printf("Calculator closed \n");
    return 0;
}
