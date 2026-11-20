#include <stdio.h>

int main(void) {
    double principal = 10000.0;
    double monthly_rate = 0.02;
    double payment = 2000.0;
    
    double balance = principal;
    int month = 0;
    double total_interest = 0.0;
    
    while (balance > 0.01 && month < 360) {
        month++;
        double interest = balance * monthly_rate;
        total_interest += interest;
        balance += interest;
        
        if (balance < payment) {
            payment = balance;
            balance = 0;
        } else {
            balance -= payment;
        }
        printf("Month %d: Balance = %.2f, Interest = %.2f\n", month, balance, interest);
    }
    
    printf("Total months: %d, Total interest: %.2f\n", month, total_interest);
    return 0;
}
