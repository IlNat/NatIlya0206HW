#include <iostream>
#include "Windows.h"
#include "Array.h"
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "Hello World!\n";
    const int size = 10;
    int dataArray1[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Введите " << i << "-ый элемента массива: ";
        cin >> dataArray1[i];
    }
    Array array1(dataArray1);
    Array array2(array1);
    cout << array2.returnData();
}
