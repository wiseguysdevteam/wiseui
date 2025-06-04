
#include <QApplication>
#include "WiseUI.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    WiseUI window;
    window.show();
    return app.exec();
}
