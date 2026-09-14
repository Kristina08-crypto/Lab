#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "");

    puts("**********************************************");
    puts("*                                            *");
    puts("*   Тема: Разработка консольного приложения  *");
    puts("*                                            *");
    puts("*            Группа: бОТИ-262                *");
    puts("*                                            *");
    puts("*        Студент: Порошкова К.Ю.             *");
    puts("*                                            *");
    puts("**********************************************");
}
void date()
{
    puts("       _      _   _     _   _  ");
    puts("  /|  |_|    | |  _|   | | |_|");
    puts("   |   _|    |_| |_    |_| |_|");
}
void main()
{
    setlocale(LC_ALL, "RUS");
    puts("Нажмите Enter для продолжения");
    getchar();
    date();
    name();
    puts("Продолжение программы");
    return 0;
}


