#include <stdio.h>

double add(double x, double y) {
    return x + y;
}

double subtract(double x, double y) {
    return x - y;
}

double multiply(double x, double y) {
    return x * y;
}

double divide(double x, double y) {
    if (y == 0) {
        printf("Error! Division by zero.\n");
        return 0; // Return 0 for division by zero, can also handle with an exit if needed
    }
    return x / y;
}

int main() {
    int choice;
    double num1, num2;

    while (1) {
        printf("Select operation:\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        
        printf("Enter choice (1/2/3/4): ");
        scanf("%d", &choice);

        if (choice < 1 || choice > 4) {
            printf("Invalid choice! Please choose a valid operation.\n");
            continue;
        }

        printf("Enter first number: ");
        scanf("%lf", &num1);
        printf("Enter second number: ");
        scanf("%lf", &num2);

        switch (choice) {
            case 1:
                printf("%.2lf + %.2lf = %.2lf\n", num1, num2, add(num1, num2));
                break;
            case 2:
                printf("%.2lf - %.2lf = %.2lf\n", num1, num2, subtract(num1, num2));
                break;
            case 3:
                printf("%.2lf * %.2lf = %.2lf\n", num1, num2, multiply(num1, num2));
                break;
            case 4:
                divide(num1, num2); // Division handles its own output
                break;
        }

        printf("Do you want to perform another calculation? (1 for yes, 0 for no): ");
        int nextCalculation;
        scanf("%d", &nextCalculation);
        if (nextCalculation != 1) {
            break;
        }
    }

    return 0;
}
