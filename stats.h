#include <vector>

namespace Statistics {
    // define the Stats structure here. See the tests to infer its properties
    struct Stats {
        float average;
        float maximum;
        float minimum;
    };
    Stats ComputeStatistics(const std::vector<float>& v);


};
