#include <stdio.h>

int main() {

    FILE *fp;
    char customerName[50];
    int choice, qty;
    float price = 0, total = 0, gst, finalAmount;
    char more;

    printf("\n====== RESTAURANT BILLING SYSTEM ======\n");

    // Take customer name
    printf("Enter Customer Name (No spaces): ");
    scanf("%49s", customerName);

    char fileName[60];
    sprintf(fileName, "%s.txt", customerName);

    fp = fopen(fileName, "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // File heading
    fprintf(fp, "===== BILL FOR %s =====\n", customerName);
    fprintf(fp, "\nITEM\tQTY\tPRICE\n");

    // Menu
    printf("\n---- MENU ----\n");
    printf("1. Idly                    - Rs. 10\n");
    printf("2. Vada                    - Rs. 15\n");
    printf("3. Coffee                  - Rs. 20\n");
    printf("4. Dosa                    - Rs. 40\n");
    printf("5. Veg Fried Rice          - Rs. 70\n");
    printf("6. Chicken Fried Rice      - Rs. 90\n");
    printf("7. Chicken Biryani         - Rs. 120\n");
    printf("8. Mutton Biryani          - Rs. 160\n");

    do {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        printf("Enter quantity: ");
        scanf("%d", &qty);

        switch (choice) {
            case 1: price = 10; fprintf(fp, "Idly\t%d\t%.2f\n", qty, price * qty); break;
            case 2: price = 15; fprintf(fp, "Vada\t%d\t%.2f\n", qty, price * qty); break;
            case 3: price = 20; fprintf(fp, "Coffee\t%d\t%.2f\n", qty, price * qty); break;
            case 4: price = 40; fprintf(fp, "Dosa\t%d\t%.2f\n", qty, price * qty); break;
            case 5: price = 70; fprintf(fp, "Veg FR\t%d\t%.2f\n", qty, price * qty); break;
            case 6: price = 90; fprintf(fp, "Chk FR\t%d\t%.2f\n", qty, price * qty); break;
            case 7: price = 120; fprintf(fp, "Chk Briy\t%d\t%.2f\n", qty, price * qty); break;
            case 8: price = 160; fprintf(fp, "Mut Briy\t%d\t%.2f\n", qty, price * qty); break;

            default:
                printf("Invalid choice!\n");
                continue;
        }

        total += price * qty;

        printf("Add more items? (y/n): ");
        scanf(" %c", &more);

    } while (more == 'y' || more == 'Y');

    // Calculations
    gst = total * 0.05;
    finalAmount = total + gst;

    // Save totals in file
    fprintf(fp, "\nTotal Amount: %.2f\n", total);
    fprintf(fp, "GST (5%%): %.2f\n", gst);
    fprintf(fp, "Final Amount: %.2f\n", finalAmount);

    fclose(fp);

    // ----------- SCREEN DISPLAY (Corrected) ------------
    printf("\n============== BILL SUMMARY ==============\n");
    printf(" Total Amount      : Rs %.2f\n", total);
    printf(" GST (5%%)          : Rs %.2f\n", gst);
    printf(" Final Amount      : Rs %.2f\n", finalAmount);
    printf("==========================================\n");
    printf("Bill saved successfully in file: %s\n", fileName);

    return 0;
}