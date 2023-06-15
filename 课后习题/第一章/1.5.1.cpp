#include <iostream>
#include <ctime>

const int N = 10;

using namespace std;

int a[N];
int maxv, minv;
int cnt;

void gen() {
    for (int i = 0; i < N; ++i) {
        a[i] = rand() % 20 + 1;
    }
}

int main() {
    srand(time(nullptr));
    for (int i = 0; i < 10; ++i) {
        gen();
        maxv = minv = a[0];
        for (int i = 0; i < N; ++i) {
            cnt++;
            if (a[i] > maxv) maxv = a[i];
            else if (a[i] < minv) minv = a[i];
        }
        cout << minv << " " << maxv << endl;
    }
    cout << cnt / N << endl;
}
