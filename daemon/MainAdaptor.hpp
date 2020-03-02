#pragma once

#include <QDBusAbstractAdaptor>
#include <QSizeF>

#include "Canvas.hpp"

class MainAdaptor : public QDBusAbstractAdaptor {
public:
	MainAdaptor(QObject *obj) : QDBusAbstractAdaptor(obj), m_canvas() {}
public Q_SLOTS:
	int registerAreaVariant(unsigned count);
private:
	Q_OBJECT
	Q_CLASSINFO("D-Bus Interface", "org.kalvo")
	
	Canvas m_canvas;
};
