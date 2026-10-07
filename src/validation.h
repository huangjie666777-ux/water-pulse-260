#pragma once

#include <string>
#include <unordered_map>

#include "water_pulse260/water_flow.h"

namespace water_pulse260 {

struct ValidatedModel {
    Model model;
    std::unordered_map<std::string, int> node_index;
};

struct ValidationOutcome {
    bool ok = false;
    std::string error;
    ValidatedModel value;
};

ValidationOutcome validate_model(Model model);

}  // namespace water_pulse260
