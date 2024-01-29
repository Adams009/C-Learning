#include "main.h"

void print_chars(char start) {
    if (start == 'z') {
        printf("%c\n", start);
        return;
    }
    
    if ((start >= 'A' && start <= 'Z') || (start >= 'a' && start <= 'z')) {
        printf("%c ", start);
    }
    
    print_chars(start + 1);
}