#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct items {
    char item[30];
    float price;
    int qty;
};

struct orders {
    char customer[50];
    char date[30];
    int numOfItems;
    struct items itm[50];
};

// Function to generate bill header
void generateBillHeader(char name[50], char date[30]) {
    printf("\n\n");
    printf("\t      AKU RESTAURANT");
    printf("\n\t    -------------------");
    printf("\nDate: %s", date);
    printf("\nInvoice To: %s", name);
    printf("\n---------------------------------------");
    printf("\nItems\t\tQty\t\tTotal");
    printf("\n---------------------------------------\n");
}

// Function to generate bill body
void generateBillBody(char item[30], int qty, float price) {
    printf("%-15s\t%-8d\t%-8.2f\n", item, qty, price * qty);
}

// Function to generate bill footer
void generateBillFooter(float total) {
    float discount = 0.1 * total;
    float netTotal = total - discount;
    float cgst = 0.09 * netTotal;
    float grandTotal = netTotal + (2 * cgst);

    printf("\n---------------------------------------");
    printf("\nSub Total\t\t\t%.2f", total);
    printf("\nDiscount @10%%\t\t\t%.2f", discount);
    printf("\n---------------------------------------");
    printf("\nNet Total\t\t\t%.2f", netTotal);
    printf("\nCGST @9%%\t\t\t%.2f", cgst);
    printf("\nSGST @9%%\t\t\t%.2f", cgst);
    printf("\n---------------------------------------");
    printf("\nGrand Total\t\t\t%.2f", grandTotal);
    printf("\n---------------------------------------\n");
}

int main() {
    int choice, numItems;
    struct orders ord;
    struct orders order;
    FILE *fp;
    char searchName[50];
    char saveBill, continueFlag = 'y';

    while (continueFlag == 'y') {
        system("cls");  // Use "clear" for Linux/macOS
        float total = 0;
        int invoiceFound = 0;

        printf("\t========== AKU RESTAURANT ==========\n");
        printf("\n1. Generate Invoice");
        printf("\n2. Show All Invoices");
        printf("\n3. Search Invoice");
        printf("\n4. Exit");
        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);
        getchar();  // To clear the buffer

        switch (choice) {
            case 1:
                system("cls");
                printf("\nEnter Customer Name: ");
                fgets(ord.customer, 50, stdin);
                ord.customer[strcspn(ord.customer, "\n")] = 0;  // Remove newline
                strcpy(ord.date, __DATE__);

                printf("\nEnter Number of Items: ");
                scanf("%d", &numItems);
                ord.numOfItems = numItems;

                for (int i = 0; i < numItems; i++) {
                    getchar();  // Clear input buffer
                    printf("\nEnter Item %d Name: ", i + 1);
                    fgets(ord.itm[i].item, 30, stdin);
                    ord.itm[i].item[strcspn(ord.itm[i].item, "\n")] = 0;

                    printf("Enter Quantity: ");
                    scanf("%d", &ord.itm[i].qty);

                    printf("Enter Unit Price: ");
                    scanf("%f", &ord.itm[i].price);

                    total += ord.itm[i].qty * ord.itm[i].price;
                }

                // Display the bill
                generateBillHeader(ord.customer, ord.date);
                for (int i = 0; i < numItems; i++) {
                    generateBillBody(ord.itm[i].item, ord.itm[i].qty, ord.itm[i].price);
                }
                generateBillFooter(total);

                // Save invoice option
                printf("\nSave Invoice? (y/n): ");
                getchar();  // Clear input buffer
                scanf("%c", &saveBill);
                if (saveBill == 'y') {
                    fp = fopen("Restaurantbill.dat", "a+");
                    if (fp == NULL) {
                        printf("\nError opening file.");
                    } else {
                        fwrite(&ord, sizeof(struct orders), 1, fp);
                        fclose(fp);
                        printf("\nInvoice saved successfully!");
                    }
                }
                break;

            case 2:
                system("cls");
                fp = fopen("Restaurantbill.dat", "r");
                if (fp == NULL) {
                    printf("\nNo previous invoices found!\n");
                } else {
                    printf("\n ***** Previous Invoices *****\n");
                    while (fread(&order, sizeof(struct orders), 1, fp)) {
                        float tot = 0;
                        generateBillHeader(order.customer, order.date);
                        for (int i = 0; i < order.numOfItems; i++) {
                            generateBillBody(order.itm[i].item, order.itm[i].qty, order.itm[i].price);
                            tot += order.itm[i].qty * order.itm[i].price;
                        }
                        generateBillFooter(tot);
                    }
                    fclose(fp);
                }
                break;

            case 3:
                system("cls");
                printf("Enter Customer Name: ");
                fgets(searchName, 50, stdin);
                searchName[strcspn(searchName, "\n")] = 0;

                fp = fopen("Restaurantbill.dat", "r");
                if (fp == NULL) {
                    printf("\nNo invoices found!\n");
                } else {
                    while (fread(&order, sizeof(struct orders), 1, fp)) {
                        float tot = 0;
                        if (strcmp(order.customer, searchName) == 0) {
                            generateBillHeader(order.customer, order.date);
                            for (int i = 0; i < order.numOfItems; i++) {
                                generateBillBody(order.itm[i].item, order.itm[i].qty, order.itm[i].price);
                                tot += order.itm[i].qty * order.itm[i].price;
                            }
                            generateBillFooter(tot);
                            invoiceFound = 1;
                        }
                    }
                    fclose(fp);
                    if (!invoiceFound) {
                        printf("\nNo invoice found for %s\n", searchName);
                    }
                }
                break;

            case 4:
                printf("\nThank you for using the system. Goodbye! :)\n");
                exit(0);
                break;

            default:
                printf("\nInvalid choice, please try again.\n");
                break;
        }

        printf("\nDo you want to perform another operation? (y/n): ");
        getchar();  // Clear buffer
        scanf("%c", &continueFlag);
    }

    printf("\nThank you for using the system. Goodbye! :)\n");
    return 0;
}
