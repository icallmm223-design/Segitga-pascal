#include <iostream>
#include <vector>

using namespace std; 

int main () {
    int n = 5; // jumlah baris
        
    for (int i = 0; i < n; i++) {
        
        // spasi agar bentuknya segitiga
        for (int s = 0; s < n - i; s++) {
            cout << " ";
            }
            
        
        int val = 1; // nilai
        for (int j = 0; j <= i; j++) {
            cout << val << " ";
            
            //rumus
            val = val * (i - j) / (j + 1);
        }
        cout << endl;
        
    }
    cout << "===============";
    
    cout << "\nname; mohamad rifky ramadani";
    cout << "\nNIM; 23104410065";
    cout << "\nProdi; Teknik informatika - 1B";

    cout << "\n===========";
 return 0;   
}
