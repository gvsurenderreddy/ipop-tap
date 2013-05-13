
#ifndef _SOCKET_UTILS_H_
#define _SOCKET_UTILS_H_

#ifdef __cplusplus
extern "C" {
#endif

int socket_utils_create_ipv4_udp_socket(const char* ip, uint16_t port);
int socket_utils_create_ipv6_udp_socket(uint16_t port, u_int32_t scope_id);

#ifdef __cplusplus
}
#endif

#endif
