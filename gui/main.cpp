#include <QApplication>
#include <root.hpp>

int main(int argc, char *argv[]) {
	QApplication app(argc, argv);
	test();
	return QApplication::exec();
}