/// @file output.h  @version 1.0 @date 08/21/2012
/// @author BlahGeek@Gmail.com
#ifndef H_OUTPUT_
#define H_OUTPUT_
#include <X11/Xlib.h>
#include <X11/Xutil.h>
#include <cstdint>
#include <iostream>
using namespace std;

class Output{
	protected:
		int width, height;
	public:
		Output(int width, int height){};
		virtual ~Output(){};
		virtual void draw(int x, int y, uint8_t r, uint8_t g, uint8_t b) = 0;
		virtual void finish() = 0;
};

#endif

