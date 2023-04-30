#include "..\include\window.h"
#include "window.h"

Window::Window(int64_t height, int64_t width) : m_x(0), m_y(0), m_height(height), m_width(width)
{
	
}

//******************************************************************************************

int64_t Window::getX() const
{
	return m_x;
}

//******************************************************************************************

int64_t Window::getY() const
{
	return m_y;
}

//******************************************************************************************

int64_t Window::getHeight() const
{
	return m_height;
}

//******************************************************************************************

int64_t Window::getWidth() const
{
	return m_width;
}

//******************************************************************************************

void Window::setX(int64_t x)
{
	m_x = x;
}

//******************************************************************************************

void Window::setY(int64_t y)
{
	m_y = y;
}

//******************************************************************************************

void Window::setHeight(int64_t height)
{
	m_height = height;
}

//******************************************************************************************

void Window::setWidth(int64_t width)
{
	m_width = width;
}

//******************************************************************************************