/*
** EPITECH PROJECT, 2021
** B-CPP-500-NCE-5-1-babel-lionel.da-rocha-da-silva
** File description:
** Controller
*/

#ifndef CONTROLLER_HPP_
#define CONTROLLER_HPP_

#include <QMainWindow>

#include "MyUDP.hpp"
#include "MyTCP.hpp"
#include "LoginWidget.hpp"

class Controller : public QObject {
        Q_OBJECT
    public:
        Controller(int port, char *ip);
        ~Controller();

        void startBabel();

    signals:
    public slots:
        void sendUdpData();
        void listenData();
        void sendTcpLoginForm();

    protected:
    private:
        QMainWindow *_window;
        LoginWidget *_loginWidget;
        MyUDP *_readUdp;
        MyUDP *_writeUdp;
        MyTCP *_tcp;

        int _port;
        std::string _ip;

};

#endif /* !CONTROLLER_HPP_ */
