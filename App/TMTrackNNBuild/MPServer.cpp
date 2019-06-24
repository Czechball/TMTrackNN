#include <winsock2.h>
#include <ws2tcpip.h>
#include "MPServer.h"
#include "Builder.h"
#pragma comment(lib, "Ws2_32.lib")

#define TMTRACKNN_PORT 60050
#define MESSAGE_TYPE_BUFSIZE 4
#define BUFSIZE 32

enum MessageType {
	BUILD = 0,
	CANCEL_BUILD = 1
};

MPServer::MPServer(std::unique_ptr<Builder> builder):
	builder(std::move(builder))
{
}


MPServer::~MPServer()
{
}

void MPServer::waitForClient()
{
	clientSocket = SOCKET_ERROR;
	while (clientSocket == SOCKET_ERROR) {
		clientSocket = accept(mainSocket, NULL, NULL);
	}
}

void MPServer::readBuild()
{
	//std::cout << "Read build\n";
	char buf[4] = { 0, 0, 0, 0 };
	//writeString("StadiumRoadMain\n");
	//while (true) {
		//send(clientSocket, buf, 4, 0);
	//}
	//writeString("StadiumRoadMain");
}

std::string MPServer::readString(int& bytesRecv)
{
	char buf[64];
	bytesRecv = recv(clientSocket, buf, 64, 0);
	if (bytesRecv <= 0) {
		return "";
	}

	// TODO
	return "";
}


int MPServer::readInt32(int& bytesRecv)
{
	char buf[4];
	bytesRecv = recv(clientSocket, buf, 4, 0);
	if (bytesRecv != 4) {
		return -1;
	}

	return (int)*buf;
}

void MPServer::writeString(const std::string& str)
{
	int size = str.size();
	char* buf = static_cast<char*>(static_cast<void*>(&size));
	//send(clientSocket, buf, 4, 0);
	//for (auto c : str) {
	//	char b[1] = { c };
	//	send(clientSocket, b, 1, 0);
	//}
	send(clientSocket, str.data(), size, 0);
}

void MPServer::run()
{
	WSADATA wsaData;
	int res = WSAStartup(MAKEWORD(2, 2), &wsaData);
	if (res != NO_ERROR) {
		std::cerr << "Failed to startup!\n";
		return;
	}

	mainSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	if (mainSocket == INVALID_SOCKET) {
		std::cerr << "Error creating socket: " << WSAGetLastError() << "\n";
		WSACleanup();
		return;
	}

	IN_ADDR addr;
	inet_pton(AF_INET, "127.0.0.1", &addr);

	sockaddr_in service;
	memset(&service, 0, sizeof(service));
	service.sin_family = AF_INET;
	service.sin_addr = addr;
	service.sin_port = htons(TMTRACKNN_PORT);

	if (bind(mainSocket, (SOCKADDR*)&service, sizeof(service)) == SOCKET_ERROR) {
		std::cout << "Binding to socket failed.\n";
		closesocket(mainSocket);
		WSACleanup();
		return;
	}

	if (listen(mainSocket, 1) == SOCKET_ERROR) {
		std::cout << "Error listening on socket.\n";
		WSACleanup();
		return;
	}

	std::cout << "Server ready!\n";
	waitForClient();

	while (true) {
		int bytesRecv;
		int message = readInt32(bytesRecv);
		if (bytesRecv == 0 || bytesRecv == WSAECONNRESET) {
			waitForClient();
			continue;
		}
	
		if (bytesRecv < 0) {
			waitForClient();
			continue;
		}

		switch (message) {
		case BUILD:
			readBuild();
			break;
		case CANCEL_BUILD:
			builder->stop();
			break;
		}

		//for (int i = 0; i < bytesRecv; i++) {
		//	std::cout << buf[i];
		//}

		//send(clientSocket, buf, bytesRecv, 0);

		//std::cout << "\n";
	}
}