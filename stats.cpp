#include "stats.h"
using namespace std;
using namespace Statistics;


Stats Statistics::ComputeStatistics(const std::vector<float>& v) {

    Stats s1;
    // Variables for storing sum , minimum , and maximum values.
    float sum = 0,mn = 1e9,mx = -1e9;
    for (auto i : v) {
        sum += i;
        if (i < mn)mn = i;
        if (i > mx)mx = i;
    }

    // Calculation of average using sum and size of vector 
    float avg = (sum / (v.size()));
    s1.average = float(avg);
    s1.minimum = float(mn);
    s1.maximum = float(mx);

    return s1;
}

