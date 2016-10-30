#pragma once
#include <stdio.h>
#include <conio.h>
#include <malloc.h>
#include <Windows.h>

struct block
{
	int x_eco, y_eco;
	int x_unit, y_unit;
	int x_resor, y_resor;
};




void gotoxy(int x, int y) {
	COORD Pos = { x - 1, y - 1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}
void printmap() {

	puts("│　　　　　　　　　　　　　┌───┐　　　　　　　　　　　　　　　　　　　　");
	puts("│　　　　　　　　　　　　　│김준수│　　　　　　　　　　　　　┌──────");
	puts("│　　　　　　　　　　　　　│　전사│　　　　　　　　　　　　　│　　　　　　");
	puts("│　　　　　　　　　　　　　└───┘　　　　　　　　　　　　　│　　　　　　");
	puts("├───┬───┬───┬───┬───┬───┬───┬───┤　　　　　　");
	puts("│　　　│　　　│　　　│　　　│　　　│　　　│　　　│　　　│　　　　　　");
	puts("│　　　│　　　│　　　│　　　│　　　│　　　│　　　│　　　│　　　　　　");
	puts("│　　　│　　　│　　　│　　　│　　　│　　　│　　　│　　　│　　　　　　");
	puts("├───┼───┼───┼───┼───┼───┼───┼───┤　　　　　　");
	puts("│　　　│　　　│　　　│　　　│　　　│　　　│　　　│　　　│　　　　　　");
	puts("│　　　│　　　│　　　│　　　│　　　│　　　│　　　│　　　│　　　　　　");
	puts("│　　　│　　　│　　　│　　　│　　　│　　　│　　　│　　　│　　　　　　");
	puts("├───┼───┼───┼───┼───┼───┼───┼───┤　　　　　　");
	puts("│　　　│　　　│　　　│　　　│　　　│　　　│　　　│　　　│　　　　　　");
	puts("│　　　│　　　│　　　│　　　│　　　│　　　│　　　│　　　│　　　　　　");
	puts("│　　　│　　　│　　　│　　　│　　　│　　　│　　　│　　　│　　　　　　");
	puts("├───┼───┼───┼───┼───┼───┼───┼───┤　　　　　　");
	puts("│　　　│　　　│　　　│　　　│　　　│　　　│　　　│　　　│　　　　　　");
	puts("│　　　│　　　│　　　│　　　│　　　│　　　│　　　│　　　│　　　　　　");
	puts("│　　　│　　　│　　　│　　　│　　　│　　　│　　　│　　　│　　　　　　");
	puts("├───┴───┴───┴───┴───┴───┴───┴───┤　　　　　　");
	puts("│　　　　　　　　　　　　　┌───┐　　　　　　　　　　　　　│　　　　　　");
	puts("│　　　　　　　　　　　　　│안용호│　　　　　　　　　　　　　│　　　　　　");
	puts("│　　　　　　　　　　　　　│　돚거│　　　　　　　　　　　　　│　　　　　　");
	puts("│　　　　　　　　　　　　　└───┘　　　　　　　　　　　　　└──────");


}