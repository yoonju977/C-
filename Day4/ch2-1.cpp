#include <iostream>
using namespace std;

int main() {
    
    const int rows = 3;  
    const int cols = 9;  

    int matrix [rows][cols];

    
    for (int i = 1; i <= rows; i++) {  
        for (int j = 1; j <= cols; j++) {  
            cout << (i * j);  
            if (j < cols) {
                cout << ", ";  
            }
        }
        cout << endl;  
    }

    cout << "계속하려면 아무 키나 누르십시오..." << endl;

    return 0;
}