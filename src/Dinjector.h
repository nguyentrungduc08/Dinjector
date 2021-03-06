#ifndef DINJECTION_H
#define DINJECTION_H

#include <bits/stdc++.h>

#include <unistd.h>
#include <stdio.h>
#include <time.h>
#include <stdint.h>
#include <sys/socket.h>
#include <sys/stat.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/wait.h>

#include <linux/if_packet.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <netinet/ip.h>
#include <netinet/tcp.h>
#include <netinet/ether.h>
#include <netinet/udp.h>

#define rep(i,n)    for((int) i = 0; i < (int) n; ++i)
#define X           first
#define Y           second

struct pseudo_Header
{
    u_int32_t           _sourceAddress;
    u_int32_t           _destAddress;
    u_int8_t            _placeholder;
    u_int8_t            _protocol;
    u_int16_t           _length;
};


#endif /* DINJECTION_H */
