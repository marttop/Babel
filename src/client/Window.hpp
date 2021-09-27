/*
** EPITECH PROJECT, 2021
** B-CPP-500-NCE-5-1-babel-lionel.da-rocha-da-silva
** File description:
** Window
*/

#ifndef WINDOW_HPP_
#define WINDOW_HPP_

#include <QObject>
#include <QWidget>
#include <QTextEdit>
#include <QPushButton>
#include <QHBoxLayout>

#include "MyUDP.hpp"

#include "Message.hpp"

class Window : public QWidget {
    Q_OBJECT
    public:
        Window(MyUDP *udp);
        ~Window();

    signals:
        void messageSent(const Message &message);

    public slots:
        void setMessage(const Message &message);

    private slots:
        void sendMessage();

    private:
        Message thisMessage;
        QTextEdit *editor;
        MyUDP *_udp;
};

#endif /* !WINDOW_HPP_ */