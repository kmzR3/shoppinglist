#include <stdio.h>

int main() {
    int item, quantity, total, grand_total;
    printf("The menu:\n");
    printf("1. Maize flour: KES 200\n");
    printf("2. Sugar: KES 150\n");
    printf("3. Cooking Oil: KES 400\n");
    printf("4. Lentils: KES 300\n");
    printf("5. Soap: KES 150\n");
    printf("What do you want to buy? ");
    scanf("%d", &item);
    printf("How many do you want to buy? ");
    scanf("%d", &quantity);
    total = 0;

    // while (item != 0) {
    //     if (item == 1) {
    //         total = total + 200 * quantity;
    //     } else if (item == 2) {
    //         total = total + 150 * quantity;
    //     } else if (item == 3) {
    //         total = total + 400 * quantity;
    //     } else if (item == 4) {
    //         total = total + 300 * quantity;
    //     } else if (item == 5) {
    //         total = total + 150 * quantity;
    //     } else {
    //         printf("Invalid item number");
    //     }
    // }
    total = 0;
    while (total != 0) {    
        switch (item) {
            case 1:
                total = quantity * 200;
                total = total + total;
                printf("You have bought %d maize flour at KES 200 each.\nYour total is KES %d\n", quantity, total);
                break;
            case 2:
                total = total + quantity * 150;
                total = total + total;
                printf("You have bought %d sugar at KES 150 each.\nYour total is KES %d\n", quantity, total);
                break;
            case 3:
                total = total + quantity * 400;
                total = total + total;
                printf("You have bought %d cooking oil at KES 400 each.\nYour total is KES %d\n", quantity, total);
                break;
            case 4:
                total = total + quantity * 300;
                grand_total = grand_total + total;
                printf("You have bought %d lentils at KES 300 each.\nYour total is KES %d\n", quantity, total);
                break;
            case 5:
                total = total + quantity * 150;
                printf("You have bought %d soap at KES 150 each.\nYour total is KES %d\n", quantity, total);
                break;
            default:
                printf("Invalid item");
        }
    }

    // ask to add another item to shopping list
    printf("Do you want to add another item to your shopping list? (y/n) ");
    char answer;
    scanf(" %c", &answer);
    if (answer == 'y') {        
        main();
    }
    else {
        // add all the totals in the switches 
        printf("Your grand total is KES %d\n", total);
        
        printf("Thank you for shopping with us.\n");
    }
    

    return 0;
}
