#include <sys/socket.h>
#include <string.h>
#include <linux/in.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>

#define PORT 5000

int csocfd;
struct sockaddr_in mysockaddr;
u8* seed_buf;
FILE * yihuan_fd;