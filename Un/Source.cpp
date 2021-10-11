#include <iostream>
#include <iomanip>
#include <chrono>
#include <thread>

// Initializing functions overloading
void draw(short spaces, short textures, bool putNewLine);
void draw(short spaces, short textures);

/* Init variable for scaling image*/
float scale = 1.0f; 

int main()
{
	while (true) {

		std::cout << "Scale image: ";
		std::cin >> scale; std::cout << "\n";

		std::cout.width(15 * scale);
		// Draw call with scaling value
		for (short i = 0; i < scale; i++) { draw(1, 1); draw(6, 2, true); }
		for (short i = 0; i < scale; i++) { draw(0, 2); draw(5, 3); draw(3, 2, true); }
		for (short i = 0; i < scale; i++) { draw(6, 5); draw(1, 1); draw(1, 1, true); }
		for (short i = 0; i < scale; i++) { draw(0, 2); draw(3, 6); draw(1, 3, true); }
		for (short i = 0; i < scale; i++) { draw(0, 11, true); }
		for (short i = 0; i < scale; i++) { draw(1, 4); draw(2, 1); draw(2, 2, true); }
		for (short i = 0; i < scale; i++) { draw(2, 3); draw(1, 2); draw(1, 5, true); }
		for (short i = 0; i < scale; i++) { draw(3, 12, true); }
		for (short i = 0; i < scale; i++) { draw(2, 6); draw(1, 6, true); }
		for (short i = 0; i < scale; i++) { draw(1, 6); draw(2, 6, true); }
		for (short i = 0; i < scale; i++) { draw(1, 10, true); }
		for (short i = 0; i < scale; i++) { draw(0, 4); draw(2, 5); draw(2, 1, true); }
		for (short i = 0; i < scale; i++) { draw(0, 3); draw(4, 4); draw(2, 2, true); }
		for (short i = 0; i < scale; i++) { draw(8, 3); draw(3, 1, true); }
		for (short i = 0; i < scale; i++) { draw(0, 2); draw(1, 3); draw(3, 2); draw(2, 2, true); }
		std::cout << "\n\n\n\n";
	}
	return 0;
}

void draw(short spaces, short textures, bool newLine) {
	// The main thread sleep 2 milliseconds
	std::this_thread::sleep_for(std::chrono::milliseconds(2));
	// Draw line
	std::cout << std::setw(spaces * 2 * scale) << std::setfill(' ') << ""
		<< std::setw(textures * 2 * scale) << std::setfill((char)219) << "";
	if (newLine) std::cout << "\n"; // The end line
}

void draw(short spaces, short textures) {
	draw(spaces, textures, false);
}