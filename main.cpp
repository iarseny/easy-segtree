#include <iostream>

using namespace std;

// набор баллов с помощью  до построенного на макс.сумму

const int N = 1e5 + 5;
const int LOG = 20;

int tree[4 * N];
int a[N];

int sparse[LOG][N];

int get_max(int l, int r) {
    int 
}

int main() {
    ios_base::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        sparse[0][i] = a[i];
    }
    
    for (int i = 1; i < LOG; i++) {
        for (int j = 0; j < n; j++) {
            sparse[i][j] = max(sparse[i - 1][j], sparse[i - 1][j + (1 << (i - 1))]);
        }
    }
    
    
}
