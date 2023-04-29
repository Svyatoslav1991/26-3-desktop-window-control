#include "..\include\window.h"

Window::Window() : m_x(0), m_y(0), m_height(N), m_width(M)
{

}

//******************************************************************************************

void Window::display() const
{
	std::cout << "\n";
	for (int64_t i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (j >= m_x && j < m_x + m_width && i >= m_y && i <= m_y + m_height)
			{
				std::cout << 1 << " ";
			}
			else
			{
				std::cout << 0 << " ";
			}
		}

		std::cout << "\n";
	}
	std::cout << "\n";
}

//******************************************************************************************

void Window::move(int64_t dx, int64_t dy)
{
	m_x += dx;

	if (m_x >= M)
	{
		m_x = M - 1;
	}
	else if (m_x < 0)
	{
		m_x = 0;
	}

	m_y += dy;

	if (m_y >= N)
	{
		m_y = N - 1;
	}
	else if (m_y < 0)
	{
		m_y = 0;
	}
}

//******************************************************************************************

void Window::resize(int64_t height, int64_t width)
{
	m_height = height;

	if (m_height < 1)
	{
		m_height = 1;
	}
	else if (m_height > N)
	{
		m_height = N;
	}

	m_width = width;

	if (m_width < 1)
	{
		m_width = 1;
	}
	else if (m_width > N)
	{
		m_width = N;
	}
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