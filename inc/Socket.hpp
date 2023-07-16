#ifndef SOCKET_HPP
#define SOCKET_HPP

#include "./Global.hpp"

class Socket
{
private:
    int fd_socket;
    sockaddr_in connect_int; // soketin bağlanacağı adres ve port bilgilerini almak için

public:
    Socket();
    ~Socket();

    bool Create(int port);
    bool Bind();
    bool Listen();
    bool Accept(Socket &newSocket);
    bool Connect(string &ipAdress);
    bool Send(string &message);
    void SetNonBlocking(bool isNonBlocking);
    int Receive(string &message);
    void Close();

    int getSocketFd();
};

#endif
