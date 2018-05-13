#include "Dinjector.h"

class TCP
{
public:
	TCP();
	~TCP();

private:
	struct tcphdr 		*_tcpHeader;
	struct iphdr 		*_ipHeader;

	void computeChecksum();
	

};
