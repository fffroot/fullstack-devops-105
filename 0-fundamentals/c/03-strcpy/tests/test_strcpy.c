#include <stdio.h>

char *my_strcpy(char *dest, const char *src);

void run_test(const char *name,char *dest, const char *input){
    char *result = my_strcpy(dest, input);
    printf("Test: %s\n", name);
    printf("  Input: \"%s\"\n", input);
    printf("  Result: \"%s\"\n", dest);

        // Проверка что скопировалось правильно
    int i = 0;
    while (input[i] != '\0' && dest[i] != '\0') {
        if (input[i] != dest[i]) {
            printf("  ❌ FAILED at position %d: '%c' vs '%c'\n", i, input[i], dest[i]);
            break;
        }
        i++;
    }

    // Проверка возвращаемого значения
    if (result != dest) {
        printf("  ❌ FAILED: returned pointer doesn't match dest\n");
    } else {
        printf("  ✅ PASSED (returned pointer OK)\n");
    }
    printf("\n");
}

int main() {
    printf("=== Testing my_strcpy ===\n\n");

    // Тест 1: Обычная строка
    char dest1[20];
    run_test("Basic", dest1, "Hello");

    // Тест 2: Пустая строка
    char dest2[20];
    run_test("Empty", dest2, "");

    // Тест 3: Длинная строка
    char dest3[100];
    run_test("Long string", dest3, "This is a very long string to test copying");

    // Тест 4: Перезапись существующего содержимого
    char dest4[20] = "Old content";
    run_test("Overwrite", dest4, "New");

    // Тест 5: Проверка точного копирования (включая \0)
    char dest5[10];
    char *result = my_strcpy(dest5, "Hi");
    if (result == dest5) {
        printf("✅ Pointer return test PASSED\n");

        // Проверяем, что после 'i' идет '\0'
        if (dest5[2] == '\0') {
            printf("✅ Null terminator test PASSED\n");
        } else {
            printf("❌ Null terminator test FAILED\n");
        }
    } else {
        printf("❌ Pointer return test FAILED\n");
    }

    return 0;
}

