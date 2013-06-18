
#ifndef _SVPN_H_
#define _SVPN_H_

#include "../lib/threadqueue/threadqueue.h"

#define MTU 1300
#define BUFLEN 2048
#define BUF_OFFSET 40 // Gives room to store the headers
#define ID_SIZE 20
#define TABLE_SIZE 100
#define MAXBUF 1024

#define IPV6_ADDR_FILE "../ipv6_addr"

typedef struct thread_opts {
    int sock4;
    int sock6;
    int tap;
    char mac[6];
    const char *local_ip4;
    const char *local_ip6;
    struct threadqueue *send_queue;
    struct threadqueue *rcv_queue;
    void (*send_signal)(struct threadqueue *);
} thread_opts_t;

#endif
