#pragma once
const int size = 10;


class Array
{
private:
    
    int data[size]; // Массив данных.
public: 
    Array(int* data) /*: data{ *data }{}*/; //Конструктор с параметрами.
    ~Array();
    Array(const Array& other);
    void setData(int* inputData); // Установка вводных данных.
    int* returnData(); // Возвращение данных.
    
};