#include <QCoreApplication>
#include <QDebug>
#include <iostream>

int addTen(int age) {
    return age + 10;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age = 0;

    qInfo() << "Enter your age in years:";
    std::cin >> age;

    int value = addTen(age);
    qInfo() << "In ten years you will be: " << value;

    return a.exec();
}
