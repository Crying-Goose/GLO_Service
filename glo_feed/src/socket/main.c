#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>

int main() {
	int sockfd;
 	struct sockaddr_in addr;

	if (sockfd = socket(AF_INET,SOCK_STREAM,0) < 0){
		printf("socket Error\n");
		exit (1);
	}
	
	printf("size of addr [%d]\n",sizeof(addr));
	memset(&addr, 0x00, sizeof(addr));
	addr.sin_family = AF_INET;
	addr.sin_addr.s_addr = INADDR_ANY;
	addr.sin_port = htons(8083);
	printf ("sockfd is [%d]\n",sockfd);

	return 0;
}
