#include <stdio.h>
#include <string.h>

// Функція для обміну значеннями
void swap(char *x, char *y) {
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

// Рекурсивна функція для генерації анаграм
void generateAnagrams(char *word, int start, int end, int *count) {
    int i;
    if (start == end) {
        // Виводимо знайдену анаграму
        printf("%s\n", word);
        (*count)++;
    } else {
        for (i = start; i <= end; i++) {
            // Міняємо місцями першу букву зі словом
            swap((word + start), (word + i));
            // Генеруємо анаграми для підслова
            generateAnagrams(word, start + 1, end, count);
            // Повертаємо початковий порядок букв у слові
            swap((word + start), (word + i));
        }
    }
}

int main() {
    char word[15];
    int count = 0;

    // Зчитуємо слово зі вводу
    printf("Введіть слово: ");
    scanf("%s", word);

    int length = strlen(word);

    // Викликаємо функцію для генерації анаграм та підрахунку їх кількості
    generateAnagrams(word, 0, length - 1, &count);

    // Виводимо кількість анаграм
    printf("Кількість анаграм: %d\n", count);

    return 0;
}
