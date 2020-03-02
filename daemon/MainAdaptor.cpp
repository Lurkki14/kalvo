#include <QDebug>

#include "MainAdaptor.hpp"

int MainAdaptor::registerAreaVariant(unsigned count) {
	return m_canvas.registerAreaVariant(count);
}
