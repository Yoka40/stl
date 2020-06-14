#include "sort.hpp"
#include <algorithm>

std::deque<std::string> lengthSort(std::forward_list<std::string> flist)
{
    std::deque<std::string> deq;
    std::copy(flist.begin(), flist.end(), std::back_inserter(deq));
    std::sort(begin(deq), end(deq),
              [](const auto &lhs, const auto &rhs) {
                  if (lhs.size() == rhs.size())
                  {
                      return lhs < rhs;
                  }
                  return lhs.size() < rhs.size();
              });
    return deq;
}
