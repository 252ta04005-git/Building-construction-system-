#include <stdio.h>

int main() {
    int choice;
    float length, width, height, area, volume;

    printf("====================================\n");
    printf("   BUILDING CONSTRUCTION SYSTEM\n");
    printf("====================================\n");

    do {
        printf("\n1. Calculate Floor Area");
        printf("\n2. Calculate Building Volume");
        printf("\n3. Show Construction Materials");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("\nEnter length of building (m): ");
                scanf("%f", &length);

                printf("Enter width of building (m): ");
                scanf("%f", &width);

                area = length * width;

                printf("Floor Area = %.2f square meters\n", area);
                break;

            case 2:
                printf("\nEnter length (m): ");
                scanf("%f", &length);

                printf("Enter width (m): ");
                scanf("%f", &width);

                printf("Enter height (m): ");
                scanf("%f", &height);

                volume = length * width * height;

                printf("Building Volume = %.2f cubic meters\n", volume);
                break;

            case 3:
                printf("\nCommon Construction Materials:\n");
                printf("1. Cement\n");
                printf("2. Sand\n");
                printf("3. Bricks\n");
                printf("4. Steel\n");
                printf("5. Concrete\n");
                printf("6. Wood\n");
                break;

            case 4:
                printf("\nThank you!\n");
                break;

            default:
                printf("\nInvalid choice! Please try again.\n");
        }

    } while(choice != 4);

    return 0;
}
