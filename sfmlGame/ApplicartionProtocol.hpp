#ifndef APPLICATION_PROTOCOL
#define APPLICATION_PROTOCOL

#include "Ynet/Client.hpp"

#include "../Common/Common.hpp"


class ApplicartionProtocol : public Ynet::ClientInterface<CheckersMsgType>
{
};


#endif //APPLICATION_PROTOCOL