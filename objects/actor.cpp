#include "../objects/actor.h"

namespace vx {


Actor::Actor () {

}

RetCode Actor::move (Vector & displacement) {
	this->position->move(displacement);
	return RetCode::Success;
}

RetCode Actor::act () {
	return RetCode::Success;
}


}
