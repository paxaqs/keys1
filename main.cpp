#include <iostream>
#include <vector>
#include <limits>

int main() {
    // Пример массива для демонстрации. Замените на ваши данные.
    std::vector<int> A = {1, -5, 6, 3, -2, 7, -1, -8, 2, -3};
    int N = A.size();

    // Проверяем, что массив не пуст
    if (N == 0) {
        std::cout << "Массив пуст." << std::endl;
        return 0;
    }

    // Инициализируем переменные для хранения индексов
    // максимального и минимального элементов.
    int maxIndex = 0, minIndex = 0;

    // Поиск индексов максимального и минимального элементов
    for (int i = 1; i < N; ++i) {
        if (A[i] > A[maxIndex]) maxIndex = i;
        if (A[i] < A[minIndex]) minIndex = i;
    }

    // Если минимальный идет после максимального, меняем их местами.
    if (minIndex > maxIndex) {
        std::swap(minIndex, maxIndex);
    }

    // Суммирование отрицательных элементов между минимальным и максимальным
    int sum = 0;
    for (int i = minIndex + 1; i < maxIndex; ++i) {
        if (A[i] < 0) {
            sum += A[i];
        }
    }

    std::cout << "Сумма отрицательных элементов между максимальным и минимальным: " << sum << std::endl;

    return 0;
}