#include <stdio.h>

int welcome_to_coffee_shop(){

#define COFFEE_PRICE 2.5
#define TEA_PRICE 2.0
#define SMOOTHIE_PRICE 3.0

//    int main(){
        int numCOffees = 0, numTeas = 0, numSmoothies = 0;
        float totalCost;
        char choice;

        printf("Welcome to our Coffees Shop \n");

        do {
            printf("\n--------MENU--------\n");
            printf("1. coffees ($%.2f)\n", COFFEE_PRICE);
            printf("2. tea ($%.2f)\n", TEA_PRICE);
            printf("3. smoothies ($%.2f)\n", SMOOTHIE_PRICE);
            printf("4. Quit \n");

            printf("ENTER YOUR CHOICE (1-4) : ");
            scanf("%c", &choice);

            switch (choice) {
                case '1':
                    numCOffees++;
                    break;
                case '2':
                    numTeas++;
                    break;
                case '3':
                    numSmoothies++;
                    break;
                case '4':
                    break;
                default:
                    printf("Invalid choice. Please try again \n");
            }

        }while (choice != '4');

            totalCost = (numSmoothies * SMOOTHIE_PRICE ) + (numTeas * TEA_PRICE) + (numCOffees * COFFEE_PRICE);

            printf("\n ORDER Detail : \n");
            printf("Coffees : %d \n",numCOffees);
            printf("Teas : %d \n",numTeas);
            printf("Smoothies : %d \n",numSmoothies);
            printf("Total Cost  : $%.2f \n",totalCost);

            printf("\n Thank you for order our coffees shop . Enjoy your drink \n");

            return  0;



    }
//}