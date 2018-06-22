#include "../util/retcode.h"

uint16_t RetCode::getStatus () {
	return this->status;
}
std::string RetCode::getMessage () {
	return this->message;
}

RetCode::RetCode (uint16_t newStatus, std::string newMessage) {
	this->status = newStatus;
	this->message = newMessage;
}
