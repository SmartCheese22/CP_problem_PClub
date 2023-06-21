#include <iostream>
#include <iomanip> 

int main() {
    int t;
    std::cin>>t;
    while(t--){
    long long N, R;
    std::cin >> N >> R;
    float t = static_cast<float>(N + 1) / (R + 1);
    std::cout << std::fixed << std::setprecision(2) << t<<"\n";}
    return 0;
}
