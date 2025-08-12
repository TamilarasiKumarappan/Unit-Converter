#include <stdio.h>

// Function declarations
void convertTemperature();
void convertDistance();
void convertWeight();

int main() {
    int choice;

    printf("Unit Converter\n");
    printf("================\n");
    printf("1. Temperature (Celsius <-> Fahrenheit)\n");
    printf("2. Distance (Kilometers <-> Miles)\n");
    printf("3. Weight (Kilograms <-> Pounds)\n");
    printf("4. Exit\n");

    while (1) {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                convertTemperature();
                break;
            case 2:
                convertDistance();
                break;
            case 3:
                convertWeight();
                break;
            case 4:
                printf("Exiting the program. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}

// Function to convert temperature
void convertTemperature() {
    int choice;
    float temp, converted;

    printf("\nTemperature Conversion:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temp);
        converted = (temp * 9 / 5) + 32;
        printf("Temperature in Fahrenheit: %.2f\n", converted);
    } else if (choice == 2) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temp);
        converted = (temp - 32) * 5 / 9;
        printf("Temperature in Celsius: %.2f\n", converted);
    } else {
        printf("Invalid choice!\n");
    }
}

// Function to convert distance
void convertDistance() {
    int choice;
    float distance, converted;

    printf("\nDistance Conversion:\n");
    printf("1. Kilometers to Miles\n");
    printf("2. Miles to Kilometers\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter distance in Kilometers: ");
        scanf("%f", &distance);
        converted = distance * 0.621371;
        printf("Distance in Miles: %.2f\n", converted);
    } else if (choice == 2) {
        printf("Enter distance in Miles: ");
        scanf("%f", &distance);
        converted = distance / 0.621371;
        printf("Distance in Kilometers: %.2f\n", converted);
    } else {
        printf("Invalid choice!\n");
    }
}

// Function to convert weight
void convertWeight() {
    int choice;
    float weight, converted;

    printf("\nWeight Conversion:\n");
    printf("1. Kilograms to Pounds\n");
    printf("2. Pounds to Kilograms\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter weight in Kilograms: ");
        scanf("%f", &weight);
        converted = weight * 2.20462;
        printf("Weight in Pounds: %.2f\n", converted);
    } else if (choice == 2) {
        printf("Enter weight in Pounds: ");
        scanf("%f", &weight);
        converted = weight / 2.20462;
        printf("Weight in Kilograms: %.2f\n", converted);
    } else {
        printf("Invalid choice!\n");
    }
}
