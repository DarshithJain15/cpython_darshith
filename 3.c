#include <stdio.h>

float calculateBill(char wardType, int days) {
float rate = (wardType == 'G') ? 1000 : (wardType == 'S') ? 2000 : 5000;
float total = rate * days;
return (days > 7) ? total * 0.95 : total;
}

int main() {
char name[50], wardType;
int days;

printf("Enter Patient Name: ");
scanf("%[^\n]s", name);
printf("Enter Ward Type (G/S/P): ");
scanf(" %c", &wardType);
printf("Enter Number of Days: ");
scanf("%d", &days);

float beforeDiscount = (wardType == 'G') ? 1000 * days : (wardType == 'S') ? 2000 * days : 5000 * days;
float finalBill = calculateBill(wardType, days);

printf("\nPatient Name: %s", name);
printf("\nTotal Bill Before Discount: %.2f INR", beforeDiscount);
if (days > 7) printf("\nDiscount Applied: %.2f INR", beforeDiscount - finalBill);
printf("\nFinal Bill Amount: %.2f\n INR", finalBill);
return 0;
}
