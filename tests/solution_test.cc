#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(FilterTest, ReturnEven) {
  Solution s;
  vector<int> v={1,2,3,4,5,6};
  vector<int> expected={2,4,6};
  vector<int> actual=s.Filter(v);
  EXPECT_EQ(expected, actual);
}
TEST(MapTest, ReturnXorby2) {
  Solution s;
  vector<int> v={1,2,3,4};
  vector<int> expected={3,0,1,6};
  vector<int> actual=s.Map(v);
  EXPECT_EQ(expected, actual);
}
TEST(ReduceTest, ReturnSum) {
  Solution s;
  vector<int> v={1,2,3,4};
  int expected=10;
  int actual=s.Sum(v);
  EXPECT_EQ(expected, actual);
}
