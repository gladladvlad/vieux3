#pragma once

#include <string>

#include "../util/ints.h"

class RetCode {
	public:
	uint16_t getStatus ();
	std::string getMessage ();

	RetCode (uint16_t newStatus, std::string newMessage);

	private:
	uint16_t status;
	std::string message;
};
