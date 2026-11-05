#include <iostream>
using namespace std;

int neoptimalSearch(int mas[], const int size, int key);

int main() {

    setlocale(LC_ALL, "ru");
    const int N = 10000;
    int sortedMas[N];
    int key = 9584;

    for (int i = 0; i < N; i++) {
        sortedMas[i] = i;
    }

    int result = neoptimalSearch(sortedMas, N, key);

    cout << "Результат неоптимального поиска: " << result << endl;

    return 0;
}

int neoptimalSearch(int mas[], const int size, int key) {
    for (int i = 0; i < size; i++) {
        if (mas[i] == key) {
            return i; 
        }
    }
    return -1;
}