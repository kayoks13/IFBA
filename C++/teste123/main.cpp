#include <iostream>

using namespace std;

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int* b = &a[4];
    int i = 4;

    while(i >= 0)
    {
        cout << *b << endl;
        b--;
        i--;
    }

    cout << "Hello world!" << endl;
    return 0;
}
