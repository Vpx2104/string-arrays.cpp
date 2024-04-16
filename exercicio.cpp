#include <iostream>

using namespace std;
int main () {
    string str;

    cout << "digite uma string (exemplo 1)" << endl;
    cin >> str;

    cout << "a string digitada (exemplo 1):\n" << str << endl;

    string str = "(exemplo 1) \n";
    printf ("tamanho da string: %zu\n", str.size());
    return 0;
}