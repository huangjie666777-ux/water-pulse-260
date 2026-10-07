#include <iostream>
#include <iterator>
#include <string>

#include "water_pulse260/json_adapter.h"

int main() {
    std::istreambuf_iterator<char> begin(std::cin);
    std::istreambuf_iterator<char> end;
    const std::string input(begin, end);
    const water_pulse260::Result result = water_pulse260::solve_json_string(input);
    std::cout << water_pulse260::result_to_json(result).dump(2) << '\n';
    if (result.status == water_pulse260::Status::InvalidInput) return 2;
    if (result.status == water_pulse260::Status::Infeasible) return 3;
    return 0;
}
