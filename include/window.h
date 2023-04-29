#pragma once
#include "functions.h"

class Window
{
public:
	Window();

	void display() const;
	void move(int64_t dx, int64_t dy);
	void resize(int64_t height, int64_t width);

	int64_t getX() const;
	int64_t getY() const;
	int64_t getHeight() const;
	int64_t getWidth() const;

private:
	int64_t m_x;
	int64_t m_y;

	int64_t m_height;
	int64_t m_width;
};