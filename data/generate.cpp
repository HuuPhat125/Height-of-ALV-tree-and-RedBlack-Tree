#include <bits/stdc++.h>
#include <chrono>
#include <cstdlib>
using namespace std;
using namespace std::chrono;
const int max_n = 1e6;

int main() {
    srand(time(0)); //
    // 8 bo so random
    for(int k = 1 ; k < 9 ; k++){
        string file_name = "test_" + to_string(k) +".inp";
        ofstream file(file_name);
        file << max_n << endl;
        for(int i = 0 ; i < max_n ; i++){
            int x = rand() % max_n + (int)rand()/RAND_MAX ;
            file << fixed << setprecision(4) << x <<" ";
        }
        file.close();
    }

    // bo so tang dan
    ofstream file1("test_9.inp");
    file1 << max_n << endl;
    for(int i = 0 ; i < max_n ; i++){
        int x = rand() / (int)RAND_MAX + i ;
        file1 << fixed << setprecision(4) << x << " ";
    }
    file1.close();

    // bo so giam dan
    ofstream file2("test_10.inp");
    file2 << max_n << endl;
    for(int i = max_n ; i > 0 ; i--){
        int x = (int)rand() / (int)RAND_MAX + i;
        file2 << fixed << setprecision(4) << x << " ";
    }
    file2.close();
    return 0;
}