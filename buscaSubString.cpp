#include<iostream>
#include<string>

int main() {
    std::string str = "hello world";
    int pos = str.find("world");
    if(pos !=std::string::npos) {
        printf("encontrado na posição: d\n", pos);
    } else {
        printf("não encotrado.\n");
    }
    return 0;
}