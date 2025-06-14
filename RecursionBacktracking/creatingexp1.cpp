// CODEFPRCES 
#include <iostream>
#include <vector>
using namespace std;

bool check( vector<int>& A, int index, long long currentSum, int X) {
    if (index == A.size()) {
        return currentSum == X;
    }

    return check(A, index + 1, currentSum + A[index], X) ||
           check(A, index + 1, currentSum - A[index], X);
}

int main() {
    int N, X;
    cin >> N >> X;
    vector<int> A(N);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    if (check(A, 1, A[0], X)) {     // start from index 1 as first index cannot be negative 
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}