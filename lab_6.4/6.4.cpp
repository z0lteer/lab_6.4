#include <iostream>
#include <cmath>  // для std::abs

int countZeroElements(double* arr, int size) {
    int zeroCount = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] == 0) {
            zeroCount++;
        }
    }
    return zeroCount;
}

double sumAfterMinElement(double* arr, int size) {
    int minIndex = 0;
    for (int i = 1; i < size; ++i) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }

    double sum = 0;
    for (int i = minIndex + 1; i < size; ++i) {
        sum += arr[i];
    }
    return sum;
}

void sortOddElementsByAbs(double* arr, int size) {

    for (int i = 0; i < size; i += 2) {
        for (int j = i + 2; j < size; j += 2) {
            if (std::abs(arr[i]) > std::abs(arr[j])) {
                std::swap(arr[i], arr[j]);
            }
        }
    }
}

int main() {
    int n;
    std::cout << "enter masiv: ";
    std::cin >> n;

    double* arr = new double[n];

    std::cout << "enter elements:\n";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }


    int zeroCount = countZeroElements(arr, n);
    std::cout << "elements=0: " << zeroCount << std::endl;


    double sumAfterMin = sumAfterMinElement(arr, n);
    std::cout << "Sum min: " << sumAfterMin << std::endl;


    sortOddElementsByAbs(arr, n);
    std::cout << "Sum:\n";
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;


    delete[] arr;

    return 0;
}

