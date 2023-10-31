#include <iostream>
#include <WinSock2.h>

using namespace std;

int main(int argc, char const *argv[])
{
    WSADATA wsaData;
    if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0)
    {
        cerr << "Failed to initialize Winsock" << endl;
        return 1;
    }

    SOCKET sockFd, acceptFd;
    struct sockaddr_in serverAddress, clientAddress;
    int serverPortNumber = 5000;
    int clientLength;

    cout << "Server: Creating socket!" << endl;
    sockFd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockFd == INVALID_SOCKET)
    {
        cerr << "Server: Socket creating failed!" << endl;
        WSACleanup();
        return 1;
    }
    else
        cout << "Server: Successfully created socket" << endl;

    serverAddress.sin_family = AF_INET;
    serverAddress.sin_addr.s_addr = INADDR_ANY;
    serverAddress.sin_port = htons(serverPortNumber);

    if (bind(sockFd, (struct sockaddr *)&serverAddress, sizeof(serverAddress)) == SOCKET_ERROR)
    {
        cerr << "Server: Socket bind failed!" << endl;
        closesocket(sockFd);
        WSACleanup();
        return 1;
    }
    else
        cout << "Server: Socket successfully binded!" << endl;

    if (listen(sockFd, 5) == SOCKET_ERROR)
    {
        cerr << "Server: Listen failed" << endl;
        closesocket(sockFd);
        WSACleanup();
        return 1;
    }
    else
        cout << "Server: Listening successfully!" << endl;

    clientLength = sizeof(clientAddress);
    acceptFd = accept(sockFd, (struct sockaddr *)&clientAddress, &clientLength);
    if (acceptFd == INVALID_SOCKET)
    {
        cerr << "Server: Accept failure!" << endl;
        closesocket(sockFd);
        WSACleanup();
        return 1;
    }
    else
        cout << "Server: Accept successful!" << endl;

    char message[2000]; // message buffer.

    int message_size;
    while (true)
    {
        message_size = 0;
        memset(message, 0, sizeof(message));
        recv(acceptFd, message, sizeof(message), 0);
        cout << "Message from client: " << message;

        if (strncmp(message, "exit", 4) == 0)
        {
            cout << "Server: Exiting!" << endl;
            break;
        }
        memset(message, 0, sizeof(message));
    }

    closesocket(sockFd);
    closesocket(acceptFd);
    WSACleanup();

    return 0;
}
