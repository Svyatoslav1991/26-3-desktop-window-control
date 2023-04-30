#pragma once

#include "window.h"

class Screen
{
public:
	Screen();

	void moveWindow(int64_t dx, int64_t dy);
	void resizeWindow(int64_t height, int64_t width);
	void display();

	int64_t getWindowX() const;
	int64_t getWindowY() const;
	int64_t getWindowHeight() const;
	int64_t getWindowWidth() const;

private:
	
	const int64_t N = 50;
	const int64_t M = 80;
	Window window;
};