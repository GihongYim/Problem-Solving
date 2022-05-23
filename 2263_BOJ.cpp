#include <iostream>
#include <vector>
using namespace std;

int n;
int inorder[200005];
int postorder[200005];
int Index[200005];
void divide(int ins,int ine, int ps, int pe)
{
    if (ins > ine || ps > pe)
        return;

    int root = Index[postorder[pe]];
    int leftsize = root - ins;
    int rightsize = ine - root;

    cout << inorder[root] << ' ';

    divide(ins, root - 1, ps, ps + leftsize - 1);
    divide(root + 1, ine, ps + leftsize, pe - 1);

}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    int temp;
    for(int i = 1; i <= n;i++)
    {
        cin >> inorder[i];
        Index[inorder[i]] = i;
    }
    for(int i = 1; i <= n;i++)
    {
        cin >> postorder[i];
    }
    divide(1, n, 1, n);

    return (0);
}