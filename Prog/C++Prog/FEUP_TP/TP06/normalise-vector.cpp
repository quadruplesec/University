#include <vector>
#include "print_vector.h"

template <typename T>
void normalise(std::vector<T> &v, const T &min, const T &max) {
    for (size_t i = 0; i < v.size(); i++) {
        if (v[i] < min) {v[i] = min; continue;}
        if (v[i] > max) {v[i] = max; continue;}
    }
}

int main(void) 
{ using namespace std;
    vector<double> v { -1.2, 2.2, -3.5, 4.3, 5.2 }; 
  normalise(v, 0.5, 5.1); print(v); return 0;}