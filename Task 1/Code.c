#include <stdio.h>

int main(void) {
    double price = 100.0;
    int qty = 15;
    int senior = 1;
    
    double total = price * qty - price * qty * 15/100 * senior + price * qty * 5/100;
    double net = total > 1000 ? total - 50 : total;
    
    int count = 0;
    count = count++ + 1;
    
    printf("Buggy total: %.2f, net: %.2f, count: %d\n", total, net, count);
    
    double correct_total = (price * qty) - ((price * qty * 0.15) * senior) + (price * qty * 0.05);
    double correct_net = correct_total > 1000 ? correct_total - 50 : correct_total;
    printf("Correct total: %.2f, net: %.2f\n", correct_total, correct_net);
    
    return 0;
}
