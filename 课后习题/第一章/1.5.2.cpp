#include <iostream>
#include <queue>

const int N = 10;

using namespace std;

priority_queue<int, vector<int>, greater<int>> q;

int a[N];
int k;

void gen() {
    for (int i = 0; i < N; ++i) {
        a[i] = rand() % 100 + 1;
        q.push(a[i]);
    }
}

int main() {
    srand(time(nullptr));
    gen();
    for (int i = 0; i < N; ++i) cout << a[i] << " ";
    cout << endl;
    cout << "请输入k" << endl;
    cin >> k;
    for (int i = 1; i < k; ++i) q.pop();
    cout << "第k小的元素：" << q.top() << endl;
}
