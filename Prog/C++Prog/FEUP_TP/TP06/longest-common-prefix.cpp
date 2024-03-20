#include <string>
#include <vector>

std::string longest_prefix(const std::vector<std::string> &v) {
    std::string prefix;
    for (size_t i = 0; ; i++) {
        bool all_equal = true;
        for (size_t x = 1; x < v.size(); x++) {
            if (v[x][i] == v[x-1][i]) {
                continue;
            }
            else {
                all_equal = false;
                break;
            }
        }

        if (all_equal)
            prefix += v[0][i];
        else
            break;
    }

    return prefix;
}