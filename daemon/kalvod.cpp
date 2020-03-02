#include <QCoreApplication>
#include <QDBusConnection>
#include <QDBusError>
#include <QDebug>

#include "MainAdaptor.hpp"

int main(int argc, char **argv) {
	QCoreApplication app(argc, argv);
	
	auto conn = QDBusConnection::sessionBus();
	
	QObject obj;
	MainAdaptor adaptor(&obj);
	
	conn.registerObject("/", &obj);
	
	if (!conn.registerService("org.kalvo")) {
		qWarning() << conn.lastError();
	}
	
	return app.exec();
}
