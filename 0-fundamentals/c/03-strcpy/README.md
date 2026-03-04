# Задача 03: Собственный strcpy на C

## Описание
Реализация функции копирования строки без использования стандартной strcpy.



### Структура проекта
```bash
03-strcpy/
        ├── src/
        │   ├── string_utils.h    — объявление функции
        │   └── string_utils.c    — реализация my_strcpy
        ├── tests/
        │   └── test_strcpy.c     — тесты
        ├── Makefile              — для сборки
        └── README.md             — документация
```

### 📖 Что такое strcpy?

Стандартная функция strcpy копирует строку из одного места в другое

## Цель
Реализовать свою версию этой функции.

## Моя реализация
```c
char *my_strcpy(char *dest, const char *src) {
    char *start = dest;
    while ((*dest++ = *src++));
    return start;
}
```

## Как запускать

```bash
# Компиляция
gcc -Wall -Wextra src/string_utils.c tests/test_strcpy.c -o test_strcpy

# Запуск тестов
./test_strcpy

Статус

✅ Выполнено
