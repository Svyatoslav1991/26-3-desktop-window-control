#include "window.h"

int main() {
	std::cout << "\tTASK 26.3 DESKTOP WINDOW CONTROL\n\n";

	Window window;
	
	std::string action;

	do
	{
		std::cout << "\nEnter \"move\" to move the window\n";
		std::cout << "Enter \"resize\" to resize the window\n";
		std::cout << "Enter \"display\" to show the window\n";
		std::cout << "Enter \"exit\" to quit programm\n";
		action = myCin<decltype(action)>();

		if (action == "move")
		{
			int64_t x, y;

			std::cout << "Enter how much to move along the x-axis\n";
			x = myCin<decltype(x)>();
			std::cout << "Enter how much to move along the y-axis\n";
			y = myCin<decltype(y)>();

			window.move(x, y);

			std::cout << "New window coordinates ( " << window.getX() << ", " << window.getY() << ").\n";
		}
		else if (action == "resize")
		{
			int64_t height, width;

			std::cout << "New height\n";
			height = myCin<decltype(height)>();

			std::cout << "New width\n";
			width = myCin<decltype(width)>();

			window.resize(height, width);

			std::cout << "New window height is " << window.getHeight() << ", new window width is " << window.getWidth() << ".\n";
		}
		else if (action == "display")
		{
			window.display();
		}
		else if (action == "exit")
		{
			break;
		}
		else
		{
			std::cout << "You entered something wrong. Try again\n";
		}

	} while (true);



	return 0;
}