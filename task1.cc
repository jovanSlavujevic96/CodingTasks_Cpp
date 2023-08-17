// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <map>

// Example:
// unique and ordered inputs
// Input: [0, 1, 2, 3, 4, 5, 6, 60, 70, 80, 90] and k = 3 and val = 5
// Output: [4, 5, 6]

std::vector<int> kClosestValues(std::vector<int>& nums, int k, int val)
{
  std::vector<int> ret;
  std::multimap<int, int> mmap;
  for (int n : nums)
  {
      mmap.insert(std::make_pair(std::abs(n-val), n));
  }
  for (auto it = mmap.cbegin(); it != mmap.cend() && k > 0; it++, k--)
  {
      ret.push_back(it->second);
  }
  return ret;
}

int main() {
    std::vector<int> v = {0, 1, 2, 3, 4, 5, 6, 60, 70, 80, 90};
    std::vector<int> closestValues = kClosestValues(v, 3, 5);
    
    for (int c : closestValues) {
        std::cout << c << " ";
    }
    std::cout << std::endl;

    return 0;
}