/*
				VIEUX QUEST 3:
				the video game
				2017 (R) (C)
*/
#define SDL_MAIN_HANDLED

#include <SDL.h>
#include <SDL_image.h>
#include <string>
#include <cstdio>

#include "init.h"

int main (int argc, char* args[]) {
	std::string varg = "";
	int width = -1, height = -1;
	unsigned int fps = 0;

	for (int i = 1; i < argc; ++i) {
		varg = args[i];

		if (varg == "-w") {
			varg.assign(args[++i]);
			width = std::stoi(varg);
		} else if (varg == "-h") {
			varg.assign(args[++i]);
			height = std::stoi(varg);
		} else if (varg == "-fps") {
			varg.assign(args[++i]);
			fps = std::stoi(varg);
		}
	}
	
	if (width < 1) {
		fprintf(stdout, "not on my watch! width set to default 800\n");
		width = 800;
	}
	if (height < 1) {
		fprintf(stdout, "and height was set to default 600 and lo for the dev saw it was nice\n");
		height = 600;
	}
	if (fps == 0) {
		fprintf(stdout, "fps set to default 60\n");
		fps = 60;
	}

	bool running = true;

	SDL_Window * window = nullptr;
	SDL_Renderer * renderer = nullptr;
	SDL_Event event;
	
	init(window, renderer, width, height);

	SDL_Texture * img = load_image("./res/img/img1.bmp", renderer);

	unsigned long long startTick;

	while (running) {
		startTick = SDL_GetTicks();

		while (SDL_PollEvent(&event)) {
			if (event.type == SDL_QUIT) {
				running = false;
				break;
			}
			if (event.type == SDL_KEYDOWN) {
				if (event.key.keysym.sym == SDLK_q) {
					running = false;
					break;
				}
			}
		}

		// Clear screen
		SDL_RenderClear(renderer);
		// Render texture
		SDL_RenderCopy(renderer, img, NULL, NULL);
		// Update window
		SDL_RenderPresent(renderer);

		// Cap the fps
		if ((1000 / fps) > SDL_GetTicks() - startTick) {
			SDL_Delay(1000 / fps - (SDL_GetTicks() - startTick));
		}
	}
	
	SDL_DestroyTexture(img);
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
	SDL_Quit();
	return 0;
}
