#include <stdio.h>
#include <string.h>
int main() {
    int n, date, perDayRent, maintenance = 500, totalRent, finalRent;
    char type[20];
    float discount = 0;
    printf("Welcome to our Room Booking Service!\n");
    printf("Which type of room do you want, sir/madam (e.g., Deluxe, Suite, Standard)?\n");
    scanf("%s", type); 
    printf("FOR HOW MANY DAYS DO YOU WANT THE ROOM?\n");
    scanf("%d", &n); 
    printf("Enter the per-day rent (in INR):\n");
    scanf("%d", &perDayRent); 
    printf("Enter  starting date (day of the month):\n");
    scanf("%d", &date);
    totalRent = n * perDayRent;
    if (n > 7 && n <= 14) {
        discount = 0.10 * totalRent;  
    } else if (n > 14) {
        discount = 0.20 * totalRent; 
    }
    finalRent = totalRent - discount + (n * maintenance);
    printf("\n--- Booking Summary ---\n");
    printf("Room Type: %s\n", type);
    printf("Stay Duration: %d days (From %d-4-2025 to %d-4-2025)\n", n, date, date + n);
    printf("Per Day Rent: INR %d\n", perDayRent);
    printf("Total Rent (before discount): INR %d\n", totalRent);
    printf("Discount Applied: INR %.2f\n", discount);
    printf("Maintenance Charges: INR %d\n", n * maintenance);
    printf("Final Rent (after discount and adding maintenance): INR %d\n", finalRent);
    printf("\nThank you for choosing our service. Have a pleasant stay!\n");
    return 0;
}
