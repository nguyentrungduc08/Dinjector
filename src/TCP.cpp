#include "Dinjector.h"
#include "TCP.h"

TCP::TCP(){
	std::cout << "Create TCP object" << std::endl;
}

TCP::~TCP(){
	std::cout << "Create TCP object" << std::endl;
}

/*
 * This API for compute checksum for TCP packet
 */
void TCP::computeChecksum(){
	int packetSize 							= sizeof(struct tcphdr);
	unsigned char *packet 					= new (sizeof(struct pseudo_Header) + packetSize);
	struct pseudo_Header *pseudoHeader 		= (struct pseudo_Header*) packet;
	struct tcphdr *tcp 						= (struct tcphdr *) (paket + sizeof(struct pseudo_Header));  


	memset(packet, 0, sizeof(struct pseudo_Header) + packetSize);

	memcpy(&pseudoHeader->_sourceAddreass, 	this->ipHeader->saddr, 4);
	memcpy(&pseudoHeader->_destAddress, 	this->ipHeader->daddr, 4);

	pseudoHeader->_placeholder 	= 0;
	pseudoHeader->_protocol 	= 6; //tcp
	pseudoHeader->_length 		= htons(sizeof(struct tcphdr));

	tcp->sources 	=	this->tcpHeader->sources;
	tcp->dest 		=	this->tcpHeader->dest;
	tcp->seq 		= 	this->tcpHeader->seq;
	tcp->ack_seq 	= 	this->tcpHeader->ack_seq;
	tcp->doff 		= 	this->tcpHeader->doff;
	tcp->window 	= 	this->tcpHeader->window;
	tcp->fin 		= 	this->tcpHeader->fin;
	tcp->syn 		= 	this->tcpHeader->syn;
	tcp->rst		= 	this->tcpHeader->rst;
	tcp->psh 		= 	this->tcpHeader->psh;
	tcp->ack 		= 	this->tcpHeader->ack;
	tcp->urg		= 	this->tcpHeader->urg;
	tcp->urg_prt	= 	this->tcpHeader->urg_prt;

	this->tcpHeader->check =	(cksum(u_short*) packetm sizeof(struct pseudo_Header)
									+ packetSize);
	free(packet);

	return;
}