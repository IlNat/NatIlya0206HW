#pragma once
const int size = 10;


class Array
{
private:
    
    int data[size]; // ������ ������.
public: 
    Array(int* data) /*: data{ *data }{}*/; //����������� � �����������.
    ~Array();
    Array(const Array& other);
    void setData(int* inputData); // ��������� ������� ������.
    int* returnData(); // ����������� ������.
    
};