#pragma once

#include <QRect>
#include <QVector>

struct CanvasArea {
	int mode;
	int id; // ID for receiving data
};

class Canvas {
public:
	Canvas() {};
	int registerAreaVariant(unsigned count);
private:
	static QSizeF variantAreaSize() {return QSizeF(0.2, 0.05);}
	int createID();
	QVector <CanvasArea> m_canvasAreas;
	QVector <int> m_ids;
};
