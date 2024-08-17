#include <QApplication>
#include <QMainWindow>
#include <QPushButton>

int main(int argc, char* argv[]) {
    QApplication app(argc, argv);

    QMainWindow mainWindow;
    mainWindow.setWindowTitle("Qt Application");

    QPushButton button("Hello, Qt!", &mainWindow);
    button.setGeometry(100, 100, 200, 40);

    mainWindow.show();
    return app.exec();
}
