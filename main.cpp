#include <iostream>

int main() {
    int arr[] {2, 7,11,15};
    int sum = 9, tempo = 0;
    for (int i = 0; i + 1 < 4; i++) {
        tempo += arr[i] + arr[i + 1];
        if (tempo == sum) {
            std::cout << arr[i] << "\t " << arr[i + 1];
            break;
        }
        tempo = 0;
    }
}
