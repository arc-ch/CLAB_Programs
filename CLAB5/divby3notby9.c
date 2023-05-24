#include <stdio.h>
int main() {
    int i;
    for (i = 10; i< 100; i++) {
        if (i % 3 == 0 && i % 9 != 0) {
            printf("%d ", i);
        }
    }
return 0;
}