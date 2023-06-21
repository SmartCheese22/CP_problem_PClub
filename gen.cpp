#include "testlib.h"
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);
    int t = atoi(argv[1]);
    cout<<t<<endl;
    for(int i=0;i<t;i++){
        
        int n = rnd.next(1,1000000);
        cout << n << " ";
        cout << rnd.next(1,n) << endl;
    }
}
