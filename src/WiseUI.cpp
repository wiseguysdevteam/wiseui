

#include "WiseUI.h"
#include <QTabWidget>
#include <QVBoxLayout>
#include <QTextEdit>
#include <QLineEdit>
#include <QPushButton>

WiseUI::WiseUI(QWidget *parent) : QMainWindow(parent) {
    auto *tabs = new QTabWidget;
    tabs->addTab(new QTextEdit("Customer tab placeholder"), "Customers");
    tabs->addTab(new QTextEdit("Wise Guy AI placeholder"), "Wise Guy 🤖");

    auto *widget = new QWidget;
    auto *layout = new QVBoxLayout(widget);
    layout->addWidget(tabs);

    setCentralWidget(widget);
    setWindowTitle("Wise UI");
}
