#include "stats.h"

#include "gtest/gtest.h"
#include "cmath"

TEST(Statistics, ReportsAverageMinMax) {
    auto computedStats = Statistics::ComputeStatistics({ 1.5, 8.9, 3.2, 4.5 });
    float epsilon = 0.001;
    EXPECT_LT(std::abs(computedStats.average - 4.525), epsilon);
    EXPECT_LT(std::abs(computedStats.maximum - 8.9), epsilon);
    EXPECT_LT(std::abs(computedStats.minimum - 1.5), epsilon);
}

TEST(Statistics, AverageNaNForEmpty) {
    auto computedStats = Statistics::ComputeStatistics({ 1.5,8.9,3.2,4.5 });
    EXPECT_EQ(0, std::isnan(computedStats.average));
    EXPECT_EQ(0, std::isnan(computedStats.maximum));
    EXPECT_EQ(0, std::isnan(computedStats.minimum));
}
