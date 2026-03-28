#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minNumberofexercises(int E, int N, vector<int>& A) {
    vector<int> allexercies;

    // Add each exercise twice
    for (int i = 0; i < N; i++) {
        allexercies.push_back(A[i]);
        allexercies.push_back(A[i]);
    }

    // Sort in descending order to prioritize higher energy-draining exercises
    sort(allexercies.rbegin(), allexercies.rend());

    int count = 0;

    // Perform exercises
    for (int i = 0; i < allexercies.size(); i++) {
        E -= allexercies[i];
        count++;

        // If energy is 0 or below, return the count
        if (E <= 0) {
            return count;
        }
    }

    // If we never reach 0 energy, return -1
    return -1;
}

int main() {
    int E, N;
    cin >> E >> N;
    vector<int> A(N);

    // Input exercises' energy drain values
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    // Call function and print result
    cout << minNumberofexercises(E, N, A) << endl;
    
    return 0;
}
