#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[] = {2, 3, 2, 5, 3, 2};
    int n = 6;
    vector<bool> visited(n, false);

    for (int i = 0; i < n; i++) {
        if (visited[i]) continue;      // already counted

        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = true;     // mark as counted
            }
        }
        cout << arr[i] << " appears " << count << " times\n";
    }
    return 0;
}