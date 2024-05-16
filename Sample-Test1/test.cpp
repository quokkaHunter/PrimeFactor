#include "pch.h"
#include "../PrimeFactors/PrimeFactors.cpp"
#include <vector>

class PrimeFactorFixture : public testing::Test
{
public:
	PrimeFactor primeFactor;
	vector<int> expected = {};
};

TEST_F(PrimeFactorFixture, Op1) {
	expected = {};
	EXPECT_EQ(expected, primeFactor.op(1));
}
TEST_F(PrimeFactorFixture, Op2) {
	expected = {2};
	EXPECT_EQ(expected, primeFactor.op(2));
}
TEST_F(PrimeFactorFixture, Op3) {
	expected = {3};
	EXPECT_EQ(expected, primeFactor.op(3));
}
TEST_F(PrimeFactorFixture, Op4) {
	expected = {2, 2};
	EXPECT_EQ(expected, primeFactor.op(4));
}
TEST_F(PrimeFactorFixture, Op5) {
	expected = { 2, 3 };
	EXPECT_EQ(expected, primeFactor.op(6));
}
TEST_F(PrimeFactorFixture, Op6) {
	expected = { 2, 5 };
	EXPECT_EQ(expected, primeFactor.op(10));
}
TEST_F(PrimeFactorFixture, Op7) {
	expected = { 5, 7 };
	EXPECT_EQ(expected, primeFactor.op(35));
}