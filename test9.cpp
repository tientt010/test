#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> v = {1, 2, 2, 3, 3, 3, 4};
    auto it = std::unique(v.begin(), v.end());
    //v.resize(std::distance(v.begin(), it));
    for (int x : v) {
        std::cout << x << ' ';
    }
    std::cout << std::endl; // 1 2 3 4
    return 0;
}
