#include "stats.h"
#include <cfloat>
using namespace std;
using namespace Statistics;


Stats Statistics::ComputeStatistics(const std::vector<float>& v) {

    Stats s1;
    // Variables for storing sum , minimum , and maximum values.
    float sum = 0,mn = FLT_MAX,mx = FLT_MIN;
    for (auto i : v) {
        sum += i;
        mn =min(i,mn);
        mx = max(i,mx);
    }
    float avg = 0;
    // Calculation of average using sum and size of vector 
    if (v.size() > 0) {
         avg = (sum / (v.size()));
    }
    s1.average = avg;
    s1.minimum = mn;
    s1.maximum = mx;

    return s1;
}

