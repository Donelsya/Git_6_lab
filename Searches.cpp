#include <iostream>
using namespace std;

int neoptimalBinarSearch(int mas[], const int size, int key);
int optimalBinarSearch(int mas[], const int size, int key);

int main() {
    setlocale(LC_ALL, "ru");

    const int N = 10000;
    int sortedMas[N];
    int key = 9584;

    for (int i = 0; i < N; i++) {
        sortedMas[i] = i;
    }

    cout << "Ищем число: " << key << endl;

    int result1 = neoptimalBinarSearch(sortedMas, N, key);
    int result2 = optimalBinarSearch(sortedMas, N, key);

    cout << "Результат неоптимального поиска: " << result1 << endl;
    cout << "Результат оптимального поиска: " << result2 << endl;

    return 0;
}

int neoptimalBinarSearch(int mas[], const int size, int key) {
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

int optimalBinarSearch(int mas[], const int size, int key) {
    int index = -1;
    int left = 0;
    int right = size - 1;

    while (left < right)
    {
        int mid = (left + right) / 2;

        if (key > mas[mid])
        {
            left = mid + 1;
        }
        else
            right = mid;
    }
    if (mas[left] == key)
    {
        index = left;
    }
    else
    {
        index = -1;
    }
    return index;
}