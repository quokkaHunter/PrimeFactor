#include "pch.h"
#include "../PrimeFactors/PrimeFactors.cpp"
#include <vector>

TEST(PrimeFactor, Op1) {
	PrimeFactor primeFactor;
	vector<int> expected = {};
	EXPECT_EQ(expected, primeFactor.op(1));
}
TEST(PrimeFactor, Op2) {
	PrimeFactor primeFactor;
	vector<int> expected = {2};
	EXPECT_EQ(expected, primeFactor.op(2));
}