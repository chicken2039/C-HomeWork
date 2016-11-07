#pragma once
#include <stdio.h>
#include <conio.h>
#include <malloc.h>
#include <Windows.h>
#include <string>



void gotoxy(int x, int y) {//커서 옮기기
	COORD Pos = { x - 1, y - 1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

struct HQ //본거지
{
	int x2, y2;
	int x1, y1;
	int HQ_hp;
	char HQ_name[10];
	

};

struct block //블럭
{
	int x_eco, y_eco;
	int x_unit, y_unit;
	int x_resor, y_resor;
	BOOL summonAble;
};


void print_OnBoard(int x , int y,char ang[] ) //환경 출력
{
	gotoxy(x, y);
	printf("%s", ang);
	gotoxy(8, 26);//다시 명령줄로 돌아감
	
}

void printmap() {				//기본 맵

	puts("│　　　　　　　　　　　　　┌───┐　　　　　　　　　　　　　　　　　　　　");
	puts("│　　　　　　　　　　　　　│킹존스│　　　　　　　　　　　　　┌──────");
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
	puts("│　　　　　　　　　　　　　│카페인│　　　　　　　　　　　　　│　　　　　　");
	puts("│　　　　　　　　　　　　　│　돚거│　　　　　　　　　　　　　│　　　　　　");
	puts("│　　　　　　　　　　　　　└───┘　　　　　　　　　　　　　└──────");
	puts("│명령:");


}