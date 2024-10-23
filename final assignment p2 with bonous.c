
#include <stdio.h>
#include <math.h>

int main() {
    int choice, result;
    float num1, num2;

    printf("\n********************************************\n");
    printf("*           Operations Manager Tool        *\n");
    printf("*         1. Add                           * \n");
    printf("*         2. Subtract                      *\n");
    printf("*         3. Multiply                      *\n");
    printf("*         4. Divide                        *\n");
    printf("*         5. Modulus                       *\n");
    printf("*         6. Absolute Difference           *\n");
    printf("*         7. Square Root Calculation       *\n");
    printf("*         8. Distance Calculation          *\n");
    printf("*         9. Exit                          *\n");
    printf("*                                          *\n");
    printf("********************************************\n");
    printf("Select an option (1-9): ");
    scanf("%d", &choice);

      if (choice >= 1 && choice <= 6) {
        printf("Enter the first number: ");
        scanf("%f", &num1);
        printf("Enter the second number: ");
        scanf("%f", &num2);
    } else if (choice == 7) {
        printf("Enter a non-negative number: ");
        scanf("%f", &num1);
    }

    switch (choice) {
        case 1:
            printf("The result is: %.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
            break;
        case 2:
            printf("The result is: %.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
            break;
        case 3:
            printf("The result is: %.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
            break;
        case 4:
            if (num2 != 0) {
                printf("The result is: %.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
            } else {
                printf("Division by zero is not allowed.\n");
            }
            break;
        case 5:
            if ((int)num2 != 0) {
                result = (int)num1 % (int)num2;
                printf("The result of %d %% %d  (from %.2f %% %.2f) is: %d\n", (int)num1, (int)num2, num1, num2, result);
            } else {
                printf("Modulus by zero is not allowed.\n");
            }
            break;
        case 6:
            printf("The absolute difference is: %.2f\n", fabs(num1 - num2));
            break;
        case 7:
            if (num1 >= 0) {
                printf("The square root of %.2f is: %.2f\n", num1, sqrt(num1));
            } else {
                printf("Square root of negative numbers is not allowed.\n");
            }
            break;
        case 8: {
            float x1, y1, x2, y2;
            printf("Enter the coordinates:\n");
            printf("x1 = ");
            scanf("%f", &x1);
            printf("y1 = ");
            scanf("%f", &y1);
            printf("x2 = ");
            scanf("%f", &x2);
            printf("y2 = ");
            scanf("%f", &y2);
            float distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
            printf("The distance between the points is: %.2f\n", distance);
            break;
        }
        case 9:
            printf("Exiting the program. Goodbye!\n");
            break;
        default:
            printf("Invalid selection. Please restart the program and select a valid option.\n");
            return 1;
    }

    return 0;
}
