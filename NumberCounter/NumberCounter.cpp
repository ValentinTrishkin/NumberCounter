// NumberCounter.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <algorithm>

class Functor
{
public:
    Functor(std::vector<int> arr) : arr_(arr) {};
    int get_count()
    {
        for (int i : arr_)
        {
            if (i % 3 == 0)
            {
                counter++;
            }
        }
        return counter;
    };
    int get_sum()
    {
        for (int i : arr_)
        {
            if (i % 3 == 0)
            {
                sum += i;
            }
        }
        return sum;
    };
    void operator()()
    {
        get_count();
        get_sum();
        show_sum();
        show_count();
    };
    void show_sum()
    {
        std::cout << "[OUT] get_sum() = " << sum << std::endl;
    }
    void show_count()
    {
        std::cout << "[OUT] get_count() = " << counter << std::endl;
    }
private:
    std::vector<int> arr_;    
    int counter = 0;
    int sum = 0;
};
void print(std::vector<int> a)
{
    std::cout << "[IN]: ";
    for (int i : a)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::vector<int> a{ 4, 1, 3, 6, 25, 54 };
    print(a);
    Functor functor(a);
    functor();
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
