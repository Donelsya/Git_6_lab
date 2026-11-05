#include <iostream>
using namespace std;

int optimalSearch(int mas[], const int size, int key) {
    // Оптимальный бинарный поиск
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

int main() {
    const int N = 10000;
    int sortedMas[N];
    int key = 9584;
    for (int i = 0; i < N; i++)
        sortedMas[i] = i;
    cout << "Index of key: " << optimalSearch(sortedMas, N, key);
    return 0;
}