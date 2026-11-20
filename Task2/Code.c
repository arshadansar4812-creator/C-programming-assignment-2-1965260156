#include <stdio.h>

int slow_calls = 0;

int slow_verify(int id) {
    slow_calls++;
    return id % 2 == 0;
}

int main(void) {
    int senior = 1;
    int class_eligible = 0;
    
    slow_calls = 0;
    if (senior && class_eligible || slow_verify(1)) {
        printf("Condition met\n");
    }
    printf("Slow calls: %d\n", slow_calls);
    
    return 0;
}
