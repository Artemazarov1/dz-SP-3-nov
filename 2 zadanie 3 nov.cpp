#include <iostream>
using namespace std;

int sum(int n) 
{
    int sum = 0;
    while (n > 0) {
        sum += n % 10; // получаем последнюю цифру числа и добавляем ее к сумме
        n /= 10; // удаляем последнюю цифру из числа
    }
    return sum;
}

int more(int n) 
{
    while (n >= 10) {
        n = sum(n);
    }
    return n;
}

int main() 
{
    setlocale(0, "");
    int number;
    cout << "введите число: ";
    cin >> number;

    int result = more(number);
    cout << "итоговое однозначное число: " << result << endl;

    return 0;
}