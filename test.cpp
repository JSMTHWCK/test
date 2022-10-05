#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a,b;
    cin >> a;
    cin >> b;
    const char *list[9] = {"one","two","three","four","five","six","seven","eight","nine"};

    for (int i = a; i <= b; i ++){
        if (i >9){
            if (i%2 == 0){
                std::cout << "even" << "\n";
            }
            else{
                std::cout << "odd" << "\n";
            }
        }
        else if (i >= 1){
            std::cout << list[i-1] << "\n";
        }
    }
    return 0;
}
