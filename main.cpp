#include <iostream>
#include <array>
#include <algorithm>
#include <numeric>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    constexpr std::array numbers = {5, 3, 8, 1, 9, 2, 7, 4, 6, 10};

    std::cout << "Original: ";
    for (const auto n : numbers) std::cout << n << ' ';
    std::cout << '\n';

    auto sorted = numbers;
    std::sort(sorted.begin(), sorted.end());

    std::cout << "Sorted:   ";
    for (const auto n : sorted) std::cout << n << ' ';
    std::cout << '\n';

    const auto [min, max] = std::minmax_element(sorted.begin(), sorted.end());
    const int sum = std::accumulate(sorted.begin(), sorted.end(), 0);
    const double avg = static_cast<double>(sum) / sorted.size();

    std::cout << "Sum: " << sum << '\n'
              << "Average: " << avg << '\n'
              << "Min: " << *min << '\n'
              << "Max: " << *max << '\n';

    return 0;
}
