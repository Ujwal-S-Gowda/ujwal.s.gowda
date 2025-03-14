/* Calculate the income tax paid by an employee to the government
    INCOME         TAX
    2.5L-5L        5%
    5L-10L         20%
    above 10L      30%  */

    #include <stdio.h>

    int main() {
        int inc, taxamt;
        printf("Enter your income: ");
        scanf("%d", &inc);
        printf("\nEntered income is %d\n", inc);
    
        if (inc <= 250000) {
            printf("\nNo income tax is applicable for income below 2.5 LAKH\n");
        } 
        else if (inc > 250000 && inc <= 500000) {
            taxamt = (inc - 250000) * 5 / 100;
            printf("\nTotal income tax paid or to be paid: %d\n", taxamt);
        } 
        else if (inc > 500000 && inc <= 1000000) {
            taxamt = (250000 * 5 / 100) + (inc - 500000) * 20 / 100;
            printf("\nTotal income tax paid or to be paid: %d\n", taxamt);
        } 
        else {
            taxamt = (250000 * 5 / 100) + (500000 * 20 / 100) + (inc - 1000000) * 30 / 100;
            printf("\nTotal income tax paid or to be paid: %d\n", taxamt);
        }
    
        return 0;
    }
    