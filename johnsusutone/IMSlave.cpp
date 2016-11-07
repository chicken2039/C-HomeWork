#include "func.h"

void initLinkedList(void);

void Apply_Command(char command[]);

int main()
{
	initLinkedList();
	char Command[50];						//명령어 변수

	struct block Block[4][7]; //블록 선언
	
	int game_Start;
		
	for (int i = 0; i < 4; i++)				//블럭 구조체에 커서값 부여
	{
		for (int j = 0; j < 7; j++)
		{
			Block[i][j].x_eco=(i*8)+3;
			Block[i][j].y_eco=(i*4)+6;
			Block[i][j].x_unit = (i * 8) + 3;
			Block[i][j].y_unit = (i * 4) + 6+1; 
			Block[i][j].x_resor = (i * 8) + 3;
			Block[i][j].y_resor = (i * 4) + 6 + 2;
		}
	}

	struct HQ My;		//적과 나 헤드쿼터 구조체 생성
	struct HQ Enemy;
	My.x1 = Block[3][3].x_eco;
	My.y1 = Block[3][3].y_eco;
	My.x2 = Block[3][4].x_eco;
	My.y2 = Block[3][4].y_eco;

	Enemy.x1 = Block[0][3].x_eco;
	Enemy.y1 = Block[0][3].y_eco;
	Enemy.x2 = Block[0][4].x_eco;
	Enemy.y2 = Block[0][4].y_eco;


	printf("게임시작(1),종료(그 이외):");
	scanf("%d", &game_Start);

	if (game_Start != 1)
	{
		return 0;
	}
	system("cls");
	
	


	printmap();
	for(int i=1;1;i++)
	{
		{
			printf("");
		}
		if (i%2==0)//내턴일때
		{
			gotoxy(8, 26);
			fflush(stdin);
			fgets(Command, 50, stdin);		//명령어 받기
			gotoxy(8, 26);
			printf("　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　");// 줄 비우기
			fflush(stdin);
			Apply_Command(Command);


		}

		else //상대 턴 일떄
		{
			Sleep(1000);		//상대 턴일때 텀을줌

								//인공지능 들어가야함
		}

	}



	return 0;

}

typedef struct unit //유닛
{
	char unit_Name[7];
	int x,y;				//유닛위치
	int atk;				//공격력
	int hp;					//채력
	BOOL AbleGather;		//채광가능 여부
	int MoveAble;			//움직임 가능?
	struct unit *next;		//다음 유닛
	struct unit *before;	//이전 유닛
}unit;

void initLinkedList(void)//head,tail 생성
{
	unit *head=(unit*)malloc(sizeof(unit));
	unit *tail=(unit*)malloc(sizeof(unit));
	head -> next=tail;

	tail -> next=NULL;
	
}

void Apply_Command(char command[])
{
	char* result;
	char* first[3];
	int i = 0;
	int j = 0;
	result = strtok(command, " ");
	while (result!=NULL,i<3)
	{
		
		first[i] = result;
		result = strtok(NULL, " ");

		i++;
	}
	if (first[0] == "make\0")
		printf("\n\n오늘밤!");
}

void Add_History ()
{


}
struct unit check_direct(int dr, struct unit orc) //(방향,기준)
{
	
}
void Move_Unit(struct unit orc)
{

}