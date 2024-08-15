#include "case_1.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void start();
void end();

int main(int argc, char* argv[]){
	system("chcp 1252 && cls");
	
	start();
	
	left_traffic_light();
	gap_left_up();
	up_traffic_light();
	gap_up_right();
	right_traffic_light();
	gap_right_down();
	down_traffic_light();
	
	end();
	
	return 0;
}

void start(){
	printf("\n\n\n\n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t_________|      |_________\n");
	printf("\t                          \n");
	printf("\t         SEMÁFORO         \n");
	printf("\t_________        _________\n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t                          \n");
	printf(" Pressione qualquer tecla para INICIAR...");
	getch();
}

void end(){
	system("cls");
	printf("\n\n\n");
	printf("\t                     ...  \n");
	printf("\t         |    * |         \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t         |    * |         \n");
	printf("\t_________|      |_________\n");
	printf("\t*                         \n");
	printf("\t                          \n");
	printf("\t_________        ________*\n");
	printf("\t         |      |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	system("timeout 1 >null");
	
	system("cls");
	printf("\n\n\n");
	printf("\t                     ...  \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t         |    * |         \n");
	printf("\t         |      |         \n");
	printf("\t_________|      |_________\n");
	printf("\t                          \n");
	printf("\t                          \n");
	printf("\t_________        _________\n");
	printf("\t         |    - |         \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	system("timeout 1 >null");
	
	system("cls");
	printf("\n\n\n");
	printf("\t                     ...  \n");
	printf("\t         |      |         \n");
	printf("\t         |    * |         \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t_________|      |_________\n");
	printf("\t                          \n");
	printf("\t                          \n");
	printf("\t_________        _________\n");
	printf("\t         |    - |         \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	system("timeout 1 >null");
	
	system("cls");
	printf("\n\n\n");
	printf("\t                     ...  \n");
	printf("\t         |    * |         \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t_________|      |_________\n");
	printf("\t                          \n");
	printf("\t                          \n");
	printf("\t_________        _________\n");
	printf("\t         |    - |         \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	system("timeout 1 >null");
	
	system("cls");
	printf("\n\n\n");
	printf("\t                     ...  \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t_________|      |_________\n");
	printf("\t                          \n");
	printf("\t                          \n");
	printf("\t_________        _________\n");
	printf("\t         |    - |         \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	system("timeout 1 >null");
	
	system("cls");
	printf("\n\n\n");
	printf("\t                     ...  \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t_________|      |_________\n");
	printf("\t                          \n");
	printf("\t                          \n");
	printf("\t_________        _________\n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	system("timeout 1 >null");
}
