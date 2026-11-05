#include <iostream>
using namespace std;

int mySearch(int mas[], const int size, int key);

int main() {
    setlocale(LC_ALL, "ru");

    const int N = 10000;
    int sortedMas[N];
    int key = 9584;


    for (int i = 0; i < N; i++) {
        sortedMas[i] = i;
    }

    cout << "Тестирование моего поиска" << endl;
    cout << "Ищем число: " << key << endl;

    int result = mySearch(sortedMas, N, key);

    cout << "Результат (индекс): " << result << endl;

    return 0;
}

int mySearch(int mas[], const int size, int key) {
    int L = 0;
    int R = size - 1;
    int ind = -1;

    while (L <= R)
    {
        int i = (L + R) / 2;

        if (key == mas[i])
        {
            ind = i;
            break;
        }

        if (key < mas[i])
        {
            R = i - 1;
        }
        else
        {
            L = i + 1;
        }
    }
    return ind;
}