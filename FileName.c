#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "rus");
    int system_type;
    int day_num;

    printf("Выберите тип нумерации (1 — с понедельника, 2 — с воскресенья): ");
    scanf("%d", &system_type);

    printf("Введите порядковый номер дня (1-7): ");
    scanf("%d", &day_num);

    int standard_day = (system_type == 1) ? day_num : ((day_num == 1) ? 7 : day_num - 1);

    printf("Результат: ");

    switch (standard_day) {
    case 1: printf("Понедельник\n"); break;
    case 2: printf("Вторник\n");      break;
    case 3: printf("Среда\n");        break;
    case 4: printf("Четверг\n");      break;
    case 5: printf("Пятница\n");      break;
    case 6: printf("Суббота\n");      break;
    case 7: printf("Воскресенье\n");  break;
    default: printf("Ошибка: неверный номер дня или тип нумерации!\n"); break;
    }

    return 0;
}
