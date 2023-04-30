#include "..\include\screen.h"
#include "screen.h"

Screen::Screen() : window(N, M)
{

}

//*************************************************************

void Screen::moveWindow(int64_t dx, int64_t dy)
{
	int64_t x = window.getX() + dx;

	if (x >= M)
	{
		x = M - 1;
	}
	else if (x < 0)
	{
		x = 0;
	}

	window.setX(x);
	

	int64_t y = window.getY() + dy;

	if (y >= N)
	{
		y = N - 1;
	}
	else if (y < 0)
	{
		y = 0;
	}

	window.setY(y);
}

//*************************************************************

int64_t Screen::getWindowX() const
{
	return window.getX();
}

//*************************************************************

int64_t Screen::getWindowY() const
{
	return window.getY();
}

//*************************************************************

int64_t Screen::getWindowHeight() const
{
	return window.getHeight();
}

//*************************************************************

int64_t Screen::getWindowWidth() const
{
	return window.getWidth();
}

//*************************************************************

void Screen::resizeWindow(int64_t height, int64_t width)
{
	if (height < 1)
	{
		height = 1;
	}
	else if (height > N)
	{
		height = N;
	}

	window.setHeight(height);

	if (width < 1)
	{
		width = 1;
	}
	else if (width > N)
	{
		width = N;
	}

	window.setWidth(width);
}

//*************************************************************

void Screen::display()
{
	int64_t x = window.getX();
	int64_t y = window.getY();
	int64_t width = window.getWidth();
	int64_t height = window.getHeight();

	std::cout << "\n";
	for (int64_t i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (j >= x && j < x + width && i >= y && i < y + height)
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