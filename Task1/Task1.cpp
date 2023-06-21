
#include <iostream>

int main()
{
    setlocale(LC_ALL, "ru");

#define MODE 1
#ifdef MODE

#if MODE == 0
    std::cout << "Работаю в режиме тренировки" << std::endl;
#elif MODE == 1
    int a;
    int b;
    std::cout << "Работаю в боевом режиме" << std::endl;
#define ADD(a,b) (a+b)
    std::cout << "Введите число 1: ";
    std::cin >> a;
    std::cout << "Введите число 2: ";
    std::cin >> b;
    std::cout << "Результат сложения: " << ADD(a, b) << std::endl;
#undef MODE

#endif

#else
    std::cout << "Необходимо определить константу" << std::endl;
#endif

}

