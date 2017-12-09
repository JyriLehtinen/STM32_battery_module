/*
 * display.c
 *
 *  Created on: 22.11.2017
 *      Author: FIHEMER
 */
#include <stdio.h>
#include "ST7565.h"

void drawTopInfo(void)
{
	// Write information text on top row
	uint8_t line = 1;
	uint8_t x = 0;
	char c[80];
	//int *volt = 0;
	//int *temp = 0;
	//int *charg = 0;
	sprintf(c, "hello!");
	ST7565_drawstring( x, line, c);

	// Parameterize these to the right spot
	uint8_t x0 = 0;
	uint8_t y0 = 8;
	uint8_t x1 = 0;
	uint8_t y1 = 8;
	uint8_t color = 1;

	ST7565_drawline(x0, y0, x1, y1, color);
	return;
}

void drawGraph(int* values)
{
	return;
}


void chargeView(void)
{
	/*
	 * This view will show graph of charge history
	 * Also on the top side "Current values" are present
	 */
	drawTopInfo();

	char title[20] = "Charge view";
	uint8_t line = 3;
	uint8_t x = 20;
	ST7565_drawstring(x , line, title);

	// Collect data and draw graph
	//drawGraph();
}

void voltageView(void)
{
	/*
	 * This view will show the graph of voltage history
	 * Also on the top side "Current values" are present
	 */
	drawTopInfo();

	char title[20] = "Voltage view";
	uint8_t line = 3;
	uint8_t x = 20;
	ST7565_drawstring(x , line, title);

	// Collect data and draw graph
	//drawGraph();
}

void temperatureView(void)
{
	/*
	 * This view will show the graph of temperature history
	 * Also on the top side "Current values" are present
	 */
	drawTopInfo();

	char title[20] = "Temperature view";
	uint8_t line = 3;
	uint8_t x = 20;
	ST7565_drawstring(x , line, title);

	// Collect data and draw graph
	//drawGraph();
}
