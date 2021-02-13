#include "NeuroNet.h"
#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[]) {
  NeuroNet neuroNet(10);
  QApplication a(argc, argv);
  MainWindow w;
  w.show();
  return a.exec();
}
