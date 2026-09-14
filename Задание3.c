#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Russian");

    // Вывод даты 19.02.08 в стиле индекса на конверте
    puts("       _      _   _     _   _  ");
    puts("  /|  |_|    | |  _|   | | |_|");
    puts("   |   _|    |_| |_    |_| |_|");

    getchar();
}
