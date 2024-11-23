
#include <stdio.h>

int main() {
    int oddVehicles[100], evenVehicles[100];
    int oddCount = 0, evenCount = 0;
    int vehicleNumber, day;

    printf("Vehicle Regulation System\n");

    while (1) {
        printf("Enter the vehicle number (0 to quit): ");
        scanf("%d", &vehicleNumber);

        if (vehicleNumber == 0) {
            break;
        }
        printf("Enter the day (1 for odd, 2 for even): ");
        scanf("%d", &day);
        if (vehicleNumber % 2 == 0 && day == 2) {
            evenVehicles[evenCount] = vehicleNumber;
            evenCount++;
        } else if (vehicleNumber % 2 != 0 && day == 1) {
            oddVehicles[oddCount] = vehicleNumber;
            oddCount++;
        } else {
            printf("Invalid input. Vehicle cannot use the road on this day.\n");
        }
    }
    printf("Odd Number Ending Vehicles:\n");
    for (int i = 0; i < oddCount; i++) {
        printf("%d\n", oddVehicles[i]);
    }
    printf("Even Number Ending Vehicles:\n");
    for (int i = 0; i < evenCount; i++) {
        printf("%d\n", evenVehicles[i]);
    }
    return 0;
}
