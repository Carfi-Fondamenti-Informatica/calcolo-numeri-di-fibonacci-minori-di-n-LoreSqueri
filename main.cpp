#include <iostream>
using namespace std;

int main() {
    int n=0, i=1, p=i, s=0, f=0;
    cin >> n;
    for (int i=1; i<n+2; i++) {

            f = p + s;
            p = s;
            s = f;
            if (f<=n) {
            cout << f << endl;
        }
    }
    return 0;
}
