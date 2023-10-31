#include <iostream>
#include <string>
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

    SOCKET sockFd;
    struct sockaddr_in serverAddress;
    string serverIp("127.0.0.1");
    int serverPortNumber = 5000;

    if (argc != 3)
    {
        cout << "Client: No Server IP and Port provided! Using default ones!\n";
    }
    else
    {
        serverIp = argv[1];
        serverPortNumber = atoi(argv[2]);
    }

    // Create socket
    cout << "Client: Creating socket!" << endl;
    sockFd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockFd == INVALID_SOCKET)
    {
        cerr << "Client: Socket creating failed!" << endl;
        WSACleanup();
        return 1;
    }
    else
        cout << "Client: Successfully created socket" << endl;

    serverAddress.sin_family = AF_INET;
    serverAddress.sin_addr.s_addr = inet_addr(serverIp.c_str());
    serverAddress.sin_port = htons(serverPortNumber);

    // Connect the client socket to the server socket
    if (connect(sockFd, (struct sockaddr *)&serverAddress, sizeof(serverAddress)) == SOCKET_ERROR)
    {
        cerr << "Client: Connection with the server failed!" << endl;
        closesocket(sockFd);
        WSACleanup();
        return 1;
    }
    else
        cout << "Client: Connected to the server.." << endl;

    char message[2000];

    int message_size;
    while (true)
    {
        message_size = 0;
        memset(message, 0, sizeof(message));
        cout << "Enter message: ";
        message[message_size++] = getchar();
        while (message[message_size - 1] != '\n')
        {
            message[message_size++] = getchar();
            if (message_size == 2000)
            {
                cout << "You cannot enter a message longer than 2000 characters" << endl;
                closesocket(sockFd);
                WSACleanup();
                return 1;
            }
        }
        send(sockFd, message, message_size, 0);
        if (strncmp(message, "exit", 4) == 0)
        {
            cout << "Client: Exiting!" << endl;
            break;
        }
    }

    closesocket(sockFd);
    WSACleanup();

    return 0;
}
