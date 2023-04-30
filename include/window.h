#pragma once
#include "functions.h"

class Window
{
public:
	Window(int64_t height, int64_t width);

	int64_t getX() const;
	int64_t getY() const;
	int64_t getHeight() const;
	int64_t getWidth() const;

	void setX(int64_t x);
	void setY(int64_t y);
	void setHeight(int64_t height);
	void setWidth(int64_t width);

private:
	int64_t m_x;
	int64_t m_y;

	int64_t m_height;
	int64_t m_width;
};