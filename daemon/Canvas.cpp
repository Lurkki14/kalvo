#include "Canvas.hpp"

int Canvas::registerAreaVariant(unsigned count) {
	int id = createID();
	CanvasArea area = {
		.id = id
	};
	m_ids.append(id);
	m_canvasAreas.append(area);
	
	return id;
}

int Canvas::createID() {
	// Find the first number from 0 to INF that isn't in the ID list
	if (m_ids.isEmpty()) {
		return 0;
	}
	
	int j = 0;
	for (int i : m_ids) {
		if (i < j) {
			return j;
		}
		j++;
	}
	return m_ids.last() + 1;
}
