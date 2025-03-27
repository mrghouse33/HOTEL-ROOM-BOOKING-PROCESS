#include <stdio.h>

int main() {
    int n, date;
    char type[20];
    int perDayRent;
    int maintenance=500;
    int totalRent;
    printf("How can I help you, sir?\nI WANT ROOM\n");
    printf("Which room do you want, sir?\n");
    scanf("%s", type); 
    printf("FOR HOW MANY DAYS DO YOU WANT THE ROOM, SIR?\n");
    scanf("%d", &n); 
    printf("Per day rent is: \n");
    scanf("%d", &perDayRent); 
    printf("Enter today starting date  ");
    scanf("%d", &date);
    printf("Today's date is %d-4-25%d to %d-5-26%d\n", date, date, date + n ); 
    totalRent = (n * perDayRent);
    n*maintenance;
    printf("Total maintenance per stay: %d\n", n * maintenance+perDayRent);
    printf("Total rent for your stay: %d\n", totalRent*n);
    return 0;
}
