#include <iostream>  // cout

#include "tasks.hpp"

using namespace std;

int main() {
    // можете написать сюда свой код для отладки программы и дополнительного тестирования функций
    int a = 0;
    int b = 0;
    swap_args(&a, &b);
    cout << a<< b;
}