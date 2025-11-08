#include <iostream>
using namespace std;

int main()
{
    int fs, cs, es, bs;
    int fn, cn, en, bn;
    int q;
    int query, n;
    int cookie = 0;

    cin >> fs >> cs >> es >> bs;
    cin >> fn >> cn >> en >> bn;

    cin >> q;

    for (int qq = 0; qq < q; qq++) {
        cin >> query >> n;

        if (query == 1) {
            if ((n * fn <= fs) && (n * cn <= cs) && (n * en <= es) && (n * bn <= bs)) {
                cookie += n;
                fs -= n * fn;
                cs -= n * cn;
                es -= n * en;
                bs -= n * bn;
                cout << cookie << '\n';
            } else {
                cout << "Hello, siumii\n";
            }
        }
        else if (query == 2) {
            fs += n;
            cout << fs << '\n';
        }
        else if (query == 3) {
            cs += n;
            cout << cs << '\n';
        }
        else if (query == 4) {
            es += n;
            cout << es << '\n';
        }
        else if (query == 5) {
            bs += n;
            cout << bs << '\n';
        }
    }
}