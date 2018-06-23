#pragma once

#include <string>

#include "../util/ints.h"

namespace vx {


enum RetCode : uint16_t {
	Success, Failure
};

const char RetMsg[][64] = {"Success", "Failure"};


}