#include "stats.h"
#include <iostream>
using namespace std;
using namespace Statistics;


Stats Statistics::ComputeStatistics(const std::vector<float>& v) {
    Stats s1;

    float sum = 0;
    float mn = 1e9;
    float mx = -1e9;
    int count = 0;
    for (auto i : v) {
        sum += i;
        count++;
        if (i < mn)mn = i;
        if (i > mx)mx = i;

    }

    float avg = (sum / count);

    s1.average = float(avg);
    s1.minimum = float(mn);
    s1.maximum = float(mx);

    return s1;
}

