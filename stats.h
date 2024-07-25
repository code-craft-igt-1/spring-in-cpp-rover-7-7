#include <vector>

namespace Statistics {
    // define the Stats structure here , with average , maximum and minimum as its data members
    struct Stats {
        float average;
        float maximum;
        float minimum;
    };
    Stats ComputeStatistics(const std::vector<float>& v);


};
