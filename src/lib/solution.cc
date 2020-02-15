#include "solution.h"
#include <vector>
#include <algorithm>
using namespace std;

bool IsEven(int n)
{
  return ((n%2)==0);
}

vector<int> Solution::Filter(vector<int>& v)
{
  vector<int> v1(v.size());
  auto it=copy_if(v.begin(),v.end(),v1.begin(),IsEven); //[](int n){return n%2==0;}
  v1.resize(distance(v1.begin(),it));
  return v1;
}

int xorby2(int n)
{
  return (n^2);
} 
vector<int> Solution::Map(vector<int>& v)
{
  vector<int> v1(v.size());
  transform(v.begin(),v.end(),v1.begin(),xorby2);
  return v1;
}

int Solution::Sum(vector<int>& v)
{
  int s=0;
  s=accumulate(v.begin(),v.end(),s);
  return s;
}

