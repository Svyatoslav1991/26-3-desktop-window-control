# 26-3-desktop-window-control

Implement a window simulation in a visual user interface.
The window is located on the virtual screen of the monitor, 80 × 50 pixels in size.
The window has several parameters, which are also set in pixels: two-dimensional coordinates of the upper left corner and dimensions, width and height.
In this case, the width and height cannot be negative, and the coordinates cannot go beyond the screen area.

The user interacts with the program using commands:
The move command takes a vector by which to move the window on the screen.
A message with the new window coordinates appears on the screen.

The resize command asks the new window size from standard input.
After resizing, a message with the new size is displayed on the screen.

The display command prints the current monitor image to the console.
0 is a pixel outside the window area, 1 is with the window.

The close command closes the window, exiting the program.
