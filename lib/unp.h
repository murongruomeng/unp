#ifdef __unp_h
#define __unp_h

#include <sys/socket.h>

#define SA struct sockaddr

char *sock_ntop(const SA *, socklen_t);
#endif
