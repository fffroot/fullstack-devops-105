#include <stdio.h>

// Объявляем функцию (она в другом файле)
unsigned int my_strlen(const char *str);

void run_test(const char *name, const char *input, unsigned int expected) {
    unsigned int result = my_strlen(input);
    if (result == expected) {
        printf("✅ %s: \"%s\" = %u\n", name, input, result);
    } else {
        printf("❌ %s: \"%s\" = %u (expected %u)\n", name, input, result, expected);
    }
}

int main() {
    printf("=== Testing my_strlen ===\n\n");
    
    run_test("Basic", "Hello", 5);
    run_test("Empty", "", 0);
    run_test("Spaces", "C Programming", 13);
    run_test("Single", "X", 1);
    run_test("Numbers", "12345", 5);
    run_test("Special", "!@#$%", 5);
    
    return 0;
}
