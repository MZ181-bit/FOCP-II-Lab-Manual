#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int arr[1000];
    int freq[1001] = {0};

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        freq[arr[i]]++;
    }

    int favourite = 0;
    int maxCount = 0;

    for (int i = 0; i <= 1000; i++) {
        if (freq[i] > maxCount) {
            maxCount = freq[i];
            favourite = i;
        }
    }

    cout << favourite << endl;
    return 0;
}