#include "case_1.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void left_traffic_light(){
	int time = 0;
	
	for(time = 0; time <= 14; time++){
		system("cls");
		printf("\n\n\n");
		printf("\t                     %02ds\n", time);
		switch (time){
			case 0:
				print_left_state_0();
				break;
			case 1:
				print_left_state_1();
				break;
			case 2:
				print_left_state_2();
				break;
			case 3:
				print_left_state_3();
				break;
			case 4:
				print_left_state_4();
				break;
			case 5:
				print_left_state_5();
				break;
			case 6:
				print_left_state_6();
				break;
			case 7:
				print_left_state_7();
				break;
			case 8:
				print_left_state_8();
				break;
			case 9:
				print_left_state_9();
				break;
			case 10:
				print_left_state_10();
				break;
			case 11:
				print_left_state_11();
				break;
			case 12:
				print_left_state_12();
				break;
			case 13:
				print_left_state_13();
				break;
			case 14:
				print_left_state_14();
				break;
			default:
				break;
		}
		system("timeout 1 >null");
	}
}

void up_traffic_light(){
	int time = 0;
	
	for(time = 0; time <= 14; time++){
		system("cls");
		printf("\n\n\n");
		printf("\t                     %02ds\n", time);
		switch (time){
			case 0:
				print_up_state_0();
				break;
			case 1:
				print_up_state_1();
				break;
			case 2:
				print_up_state_2();
				break;
			case 3:
				print_up_state_3();
				break;
			case 4:
				print_up_state_4();
				break;
			case 5:
				print_up_state_5();
				break;
			case 6:
				print_up_state_6();
				break;
			case 7:
				print_up_state_7();
				break;
			case 8:
				print_up_state_8();
				break;
			case 9:
				print_up_state_9();
				break;
			case 10:
				print_up_state_10();
				break;
			case 11:
				print_up_state_11();
				break;
			case 12:
				print_up_state_12();
				break;
			case 13:
				print_up_state_13();
				break;
			case 14:
				print_up_state_14();
				break;
			default:
				break;
		}
		system("timeout 1 >null");
	}
}

void right_traffic_light(){
	int time = 0;
	
	for(time = 0; time <= 14; time++){
		system("cls");
		printf("\n\n\n");
		printf("\t                     %02ds\n", time);
		switch (time){
			case 0:
				print_right_state_0();
				break;
			case 1:
				print_right_state_1();
				break;
			case 2:
				print_right_state_2();
				break;
			case 3:
				print_right_state_3();
				break;
			case 4:
				print_right_state_4();
				break;
			case 5:
				print_right_state_5();
				break;
			case 6:
				print_right_state_6();
				break;
			case 7:
				print_right_state_7();
				break;
			case 8:
				print_right_state_8();
				break;
			case 9:
				print_right_state_9();
				break;
			case 10:
				print_right_state_10();
				break;
			case 11:
				print_right_state_11();
				break;
			case 12:
				print_right_state_12();
				break;
			case 13:
				print_right_state_13();
				break;
			case 14:
				print_right_state_14();
				break;
			default:
				break;
		}
		system("timeout 1 >null");
	}
}

void down_traffic_light(){
	int time = 0;
	
	for(time = 0; time <= 14; time++){
		system("cls");
		printf("\n\n\n");
		printf("\t                     %02ds\n", time);
		switch (time){
			case 0:
				print_down_state_0();
				break;
			case 1:
				print_down_state_1();
				break;
			case 2:
				print_down_state_2();
				break;
			case 3:
				print_down_state_3();
				break;
			case 4:
				print_down_state_4();
				break;
			case 5:
				print_down_state_5();
				break;
			case 6:
				print_down_state_6();
				break;
			case 7:
				print_down_state_7();
				break;
			case 8:
				print_down_state_8();
				break;
			case 9:
				print_down_state_9();
				break;
			case 10:
				print_down_state_10();
				break;
			case 11:
				print_down_state_11();
				break;
			case 12:
				print_down_state_12();
				break;
			case 13:
				print_down_state_13();
				break;
			case 14:
				print_down_state_14();
				break;
			default:
				break;
		}
		system("timeout 1 >null");
	}
}

// GAPs (transição entre os semáforos)
void gap_left_up(){
	system("cls");
	printf("\n\n\n");
	printf("\t                     ...  \n");
	printf("\t         | -    |         \n");
	printf("\t         | -    |         \n");
	printf("\t         | -  * |         \n");
	printf("\t         | -  * |         \n");
	printf("\t_________| -    |_________\n");
	printf("\t                 -  -  -  \n");
	printf("\t                          \n");
	printf("\t_________    *   _________\n");
	printf("\t         | *  - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         | *  - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	system("timeout 1 >null");
	
	system("cls");
	printf("\n\n\n");
	printf("\t                     ...  \n");
	printf("\t         | -    |         \n");
	printf("\t         | -  * |         \n");
	printf("\t         | -  * |         \n");
	printf("\t         | -    |         \n");
	printf("\t_________| -    |_________\n");
	printf("\t              *  -  -  -  \n");
	printf("\t                          \n");
	printf("\t_________        _________\n");
	printf("\t         |    - |         \n");
	printf("\t         | *  - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         | *  - |         \n");
	printf("\t         |    - |         \n");
	system("timeout 1 >null");
	
	system("cls");
	printf("\n\n\n");
	printf("\t                     ...  \n");
	printf("\t         | -  * |         \n");
	printf("\t         | -  * |         \n");
	printf("\t         | -    |         \n");
	printf("\t         | -    |         \n");
	printf("\t_________| -  * |_________\n");
	printf("\t                 -  -  -  \n");
	printf("\t                          \n");
	printf("\t_________        _________\n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         | *  - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         | *  - |         \n");
	system("timeout 1 >null");
}

void gap_up_right(){
	system("cls");
	printf("\n\n\n");
	printf("\t                     ...  \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t         | -    |         \n");
	printf("\t_________| -    |_________\n");
	printf("\t  *              -  -  -  \n");
	printf("\t           *              \n");
	printf("\t_________  *     _____*__*\n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	system("timeout 1 >null");
	
	system("cls");
	printf("\n\n\n");
	printf("\t                     ...  \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t         | -    |         \n");
	printf("\t_________| -    |_________\n");
	printf("\t*                -  -  -  \n");
	printf("\t                          \n");
	printf("\t_________  *     ________*\n");
	printf("\t         | *  - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	system("timeout 1 >null");
	
	system("cls");
	printf("\n\n\n");
	printf("\t                     ...  \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t         | -    |         \n");
	printf("\t_________| -    |_________\n");
	printf("\t                 -  -  -  \n");
	printf("\t                          \n");
	printf("\t_________        _________\n");
	printf("\t         | *  - |         \n");
	printf("\t         | *  - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	system("timeout 1 >null");
}

void gap_right_down(){
	system("cls");
	printf("\n\n\n");
	printf("\t                     ...  \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t         |    * |         \n");
	printf("\t         |    * |         \n");
	printf("\t_________|      |_________\n");
	printf("\t*                         \n");
	printf("\t            *             \n");
	printf("\t_________        _________\n");
	printf("\t         |    - |         \n");
	printf("\t         | *  - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	system("timeout 1 >null");
	
	system("cls");
	printf("\n\n\n");
	printf("\t                     ...  \n");
	printf("\t         |      |         \n");
	printf("\t         |    * |         \n");
	printf("\t         |    * |         \n");
	printf("\t         |      |         \n");
	printf("\t_________|      |_________\n");
	printf("\t                          \n");
	printf("\t                          \n");
	printf("\t_________  *     _________\n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         | *  - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	system("timeout 1 >null");
	
	system("cls");
	printf("\n\n\n");
	printf("\t                     ...  \n");
	printf("\t         |    * |         \n");
	printf("\t         |    * |         \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t_________|      |_________\n");
	printf("\t                          \n");
	printf("\t                          \n");
	printf("\t_________        _________\n");
	printf("\t         | *  - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         | *  - |         \n");
	printf("\t         |    - |         \n");
	system("timeout 1 >null");
}



// Impressões dos sinais abertos durante 14s cada

void print_left_state_0(){
	printf("\t         | -    |         \n");
	printf("\t         | -    |         \n");
	printf("\t         | -    |         \n");
	printf("\t         | -    |         \n");
	printf("\t_________| -    |_________\n");
	printf("\t                 -  -  -  \n");
	printf("\t                          \n");
	printf("\t_*_*_*_*_        _________\n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
}

void print_left_state_1(){
	printf("\t         | -    |         \n");
	printf("\t         | -    |         \n");
	printf("\t         | -    |         \n");
	printf("\t         | -    |         \n");
	printf("\t_________| -    |_________\n");
	printf("\t                 -  -  -  \n");
	printf("\t                          \n");
	printf("\t_*_*_*_*_ *      _________\n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
}

void print_left_state_2(){
	printf("\t         | -    |         \n");
	printf("\t         | -    |         \n");
	printf("\t         | -    |         \n");
	printf("\t         | -    |         \n");
	printf("\t_________| -    |_________\n");
	printf("\t                 -  -  -  \n");
	printf("\t                          \n");
	printf("\t_*_*_*_*_ * *    _________\n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
}

void print_left_state_3(){
	printf("\t         | -    |         \n");
	printf("\t         | -    |         \n");
	printf("\t         | -    |         \n");
	printf("\t         | -    |         \n");
	printf("\t_________| -    |_________\n");
	printf("\t                 -  -  -  \n");
	printf("\t              *           \n");
	printf("\t_*_*_*_*_ * *    _________\n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
}

void print_left_state_4(){
	printf("\t         | -    |         \n");
	printf("\t         | -    |         \n");
	printf("\t         | -    |         \n");
	printf("\t         | -    |         \n");
	printf("\t_________| -  * |_________\n");
	printf("\t                 -  -  -  \n");
	printf("\t              *           \n");
	printf("\t_*_*_*_*_ * *    _________\n");
	printf("\t         | *  - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
}

void print_left_state_5(){
	printf("\t         | -    |         \n");
	printf("\t         | -    |         \n");
	printf("\t         | -    |         \n");
	printf("\t         | -  * |         \n");
	printf("\t_________| -  * |_________\n");
	printf("\t                 -  -  -  \n");
	printf("\t                          \n");
	printf("\t_*_*_*_*_ *  *   _________\n");
	printf("\t         | *  - |         \n");
	printf("\t         | *  - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
}

void print_left_state_6(){
	printf("\t         | -    |         \n");
	printf("\t         | -    |         \n");
	printf("\t         | -  * |         \n");
	printf("\t         | -  * |         \n");
	printf("\t_________| -    |_________\n");
	printf("\t                 -  -  -  \n");
	printf("\t                          \n");
	printf("\t_*_*_*_*_ *     *_________\n");
	printf("\t         | *  - |         \n");
	printf("\t         | *  - |         \n");
	printf("\t         | *  - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
}

void print_left_state_7(){
	printf("\t         | -    |         \n");
	printf("\t         | -  * |         \n");
	printf("\t         | -  * |         \n");
	printf("\t         | -    |         \n");
	printf("\t_________| -    |_________\n");
	printf("\t                 -  -  -  \n");
	printf("\t                          \n");
	printf("\t_*_*_*_*_ *  *   __*______\n");
	printf("\t         |    - |         \n");
	printf("\t         | *  - |         \n");
	printf("\t         | *  - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         | *  - |         \n");
}

void print_left_state_8(){
	printf("\t         | -    |         \n");
	printf("\t         | -  * |         \n");
	printf("\t         | -  * |         \n");
	printf("\t         | -    |         \n");
	printf("\t_________| -    |_________\n");
	printf("\t                 -  -  -  \n");
	printf("\t                          \n");
	printf("\t_*_*_*_*_ *  *  *_____*___\n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         | *  - |         \n");
	printf("\t         | *  - |         \n");
	printf("\t         |    - |         \n");
}

void print_left_state_9(){
	printf("\t         | -  * |         \n");
	printf("\t         | -  * |         \n");
	printf("\t         | -    |         \n");
	printf("\t         | -    |         \n");
	printf("\t_________| -    |_________\n");
	printf("\t              *  -  -  -  \n");
	printf("\t                          \n");
	printf("\t_*_*_*_*_ *      __*_____*\n");
	printf("\t         | *  - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         | *  - |         \n");
	printf("\t         | *  - |         \n");
}

void print_left_state_10(){
	printf("\t         | -  * |         \n");
	printf("\t         | -    |         \n");
	printf("\t         | -    |         \n");
	printf("\t         | -    |         \n");
	printf("\t_________| -  * |_________\n");
	printf("\t                 -  -  -  \n");
	printf("\t                          \n");
	printf("\t_*_*_*_*_ *      _____*___\n");
	printf("\t         | *  - |         \n");
	printf("\t         | *  - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         | *  - |         \n");
}

void print_left_state_11(){
	printf("\t         | -    |         \n");
	printf("\t         | -    |         \n");
	printf("\t         | -    |         \n");
	printf("\t         | -  * |         \n");
	printf("\t_________| -    |_________\n");
	printf("\t                 -  -  -  \n");
	printf("\t                          \n");
	printf("\t_*_*_*_*_ *  *   ________*\n");
	printf("\t         |    - |         \n");
	printf("\t         | *  - |         \n");
	printf("\t         | *  - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
}

void print_left_state_12(){
	printf("\t         | -    |         \n");
	printf("\t         | -    |         \n");
	printf("\t         | -  * |         \n");
	printf("\t         | -    |         \n");
	printf("\t_________| -    |_________\n");
	printf("\t              *  -  -  -  \n");
	printf("\t                          \n");
	printf("\t_*_*_*_*_ *  *   _________\n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         | *  - |         \n");
	printf("\t         | *  - |         \n");
	printf("\t         |    - |         \n");
}

void print_left_state_13(){
	printf("\t         | -    |         \n");
	printf("\t         | -  * |         \n");
	printf("\t         | -    |         \n");
	printf("\t         | -    |         \n");
	printf("\t_________| -  * |_________\n");
	printf("\t              *  -  -  -  \n");
	printf("\t                          \n");
	printf("\t___*_*_*_ *      _________\n");
	printf("\t         | *  - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         | *  - |         \n");
	printf("\t         | *  - |         \n");
}

void print_left_state_14(){
	printf("\t         | -  * |         \n");
	printf("\t         | -    |         \n");
	printf("\t         | -    |         \n");
	printf("\t         | -  * |         \n");
	printf("\t_________| -  * |_________\n");
	printf("\t                 -  -  -  \n");
	printf("\t                          \n");
	printf("\t_____*_*_ *  *   _________\n");
	printf("\t         |    - |         \n");
	printf("\t         | *  - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         | *  - |         \n");
}

// Semáforo ACIMA aberto
void print_up_state_0(){
	printf("\t         | *  * |         \n");
	printf("\t         | *    |         \n");
	printf("\t         | *    |         \n");
	printf("\t         | *  * |         \n");
	printf("\t_________| *    |_________\n");
	printf("\t                 -  -  -  \n");
	printf("\t                          \n");
	printf("\t_________        _________\n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         | *  - |         \n");
	printf("\t         |    - |         \n");
}

void print_up_state_1(){
	printf("\t         | *    |         \n");
	printf("\t         | *    |         \n");
	printf("\t         | *  * |         \n");
	printf("\t         | *    |         \n");
	printf("\t_________| *    |_________\n");
	printf("\t           *     -  -  -  \n");
	printf("\t                          \n");
	printf("\t_________        _________\n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         | *  - |         \n");
}

void print_up_state_2(){
	printf("\t         | *  * |         \n");
	printf("\t         | *    |         \n");
	printf("\t         | *    |         \n");
	printf("\t         | *    |         \n");
	printf("\t_________| *    |_________\n");
	printf("\t           *     -  -  -  \n");
	printf("\t           *              \n");
	printf("\t_________        _________\n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
}

void print_up_state_3(){
	printf("\t         | *    |         \n");
	printf("\t         | *    |         \n");
	printf("\t         | *    |         \n");
	printf("\t         | *    |         \n");
	printf("\t_________| *    |_________\n");
	printf("\t        *  *     -  -  -  \n");
	printf("\t                          \n");
	printf("\t_________    *   _________\n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
}

void print_up_state_4(){
	printf("\t         | *    |         \n");
	printf("\t         | *    |         \n");
	printf("\t         | *    |         \n");
	printf("\t         | *    |         \n");
	printf("\t_________| *    |_________\n");
	printf("\t     *     *     -  -  -  \n");
	printf("\t           *              \n");
	printf("\t_________       *_________\n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
}

void print_up_state_5(){
	printf("\t         | *    |         \n");
	printf("\t         | *    |         \n");
	printf("\t         | *    |         \n");
	printf("\t         | *    |         \n");
	printf("\t_________| *    |_________\n");
	printf("\t  *     *  *     -  -  -  \n");
	printf("\t                          \n");
	printf("\t_________  *     __*______\n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
}

void print_up_state_6(){
	printf("\t         | *    |         \n");
	printf("\t         | *    |         \n");
	printf("\t         | *    |         \n");
	printf("\t         | *    |         \n");
	printf("\t_________| *    |_________\n");
	printf("\t     *     *     -  -  -  \n");
	printf("\t           *              \n");
	printf("\t_________        _____*___\n");
	printf("\t         |    - |         \n");
	printf("\t         | *  - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
}

void print_up_state_7(){
	printf("\t         | *    |         \n");
	printf("\t         | *    |         \n");
	printf("\t         | *    |         \n");
	printf("\t         | *    |         \n");
	printf("\t_________| *    |_________\n");
	printf("\t  *        *     -  -  -  \n");
	printf("\t           *              \n");
	printf("\t_________  *     ________*\n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         | *  - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
}

void print_up_state_8(){
	printf("\t         | *    |         \n");
	printf("\t         | *    |         \n");
	printf("\t         | *    |         \n");
	printf("\t         | *    |         \n");
	printf("\t_________| *    |_________\n");
	printf("\t        *  *     -  -  -  \n");
	printf("\t                          \n");
	printf("\t_________  *     _________\n");
	printf("\t         | *  - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         | *  - |         \n");
	printf("\t         |    - |         \n");
}

void print_up_state_9(){
	printf("\t         | *    |         \n");
	printf("\t         | *    |         \n");
	printf("\t         | *    |         \n");
	printf("\t         | *    |         \n");
	printf("\t_________| *    |_________\n");
	printf("\t      * *  *     -  -  -  \n");
	printf("\t                          \n");
	printf("\t_________        _________\n");
	printf("\t         | *  - |         \n");
	printf("\t         | *  - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         | *  - |         \n");
	printf("\t         |    - |         \n");
}

void print_up_state_10(){
	printf("\t         | *    |         \n");
	printf("\t         | *    |         \n");
	printf("\t         | *    |         \n");
	printf("\t         | *    |         \n");
	printf("\t_________| *    |_________\n");
	printf("\t   *  *    *     -  -  -  \n");
	printf("\t           *              \n");
	printf("\t_________        _________\n");
	printf("\t         |    - |         \n");
	printf("\t         | *  - |         \n");
	printf("\t         | *  - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         | *  - |         \n");
}

void print_up_state_11(){
	printf("\t         | *    |         \n");
	printf("\t         | *    |         \n");
	printf("\t         | *    |         \n");
	printf("\t         | *    |         \n");
	printf("\t_________| *    |_________\n");
	printf("\t*  *       *     -  -  -  \n");
	printf("\t           *              \n");
	printf("\t_________    *   _________\n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         | *  - |         \n");
	printf("\t         | *  - |         \n");
	printf("\t         |    - |         \n");
}

void print_up_state_12(){
	printf("\t         |      |         \n");
	printf("\t         | *    |         \n");
	printf("\t         | *    |         \n");
	printf("\t         | *    |         \n");
	printf("\t_________| *    |_________\n");
	printf("\t*          *     -  -  -  \n");
	printf("\t                          \n");
	printf("\t_________    *  *_________\n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         | *  - |         \n");
	printf("\t         | *  - |         \n");
}

void print_up_state_13(){
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t         | *    |         \n");
	printf("\t         | *    |         \n");
	printf("\t_________| *    |_________\n");
	printf("\t        *  *     -  -  -  \n");
	printf("\t                          \n");
	printf("\t_________       *__*______\n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         | *  - |         \n");
}

void print_up_state_14(){
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t         | *    |         \n");
	printf("\t_________| *    |_________\n");
	printf("\t     *     *     -  -  -  \n");
	printf("\t           *              \n");
	printf("\t_________        __*__*___\n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
}

// Semáforo à DIREITA aberto
void print_right_state_0(){
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t_________|      |_________\n");
	printf("\t                 *  *  *  \n");
	printf("\t                          \n");
	printf("\t_________        _________\n");
	printf("\t         |    - |         \n");
	printf("\t         | *  - |         \n");
	printf("\t         | *  - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
}

void print_right_state_1(){
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t_________|      |_________\n");
	printf("\t              *  *  *  *  \n");
	printf("\t                          \n");
	printf("\t_________        _________\n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         | *  - |         \n");
	printf("\t         | *  - |         \n");
	printf("\t         |    - |         \n");
}

void print_right_state_2(){
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t_________|    * |_________\n");
	printf("\t              *  *  *  *  \n");
	printf("\t                          \n");
	printf("\t_________        _________\n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         | *  - |         \n");
	printf("\t         | *  - |         \n");
}

void print_right_state_3(){
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t         |    * |         \n");
	printf("\t_________|      |_________\n");
	printf("\t           *  *  *  *  *  \n");
	printf("\t                          \n");
	printf("\t_________        _________\n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         | *  - |         \n");
}

void print_right_state_4(){
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t         |    * |         \n");
	printf("\t         |      |         \n");
	printf("\t_________|    * |_________\n");
	printf("\t        *     *  *  *  *  \n");
	printf("\t            *             \n");
	printf("\t_________        _________\n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
}

void print_right_state_5(){
	printf("\t         |      |         \n");
	printf("\t         |    * |         \n");
	printf("\t         |      |         \n");
	printf("\t         |    * |         \n");
	printf("\t_________|      |_________\n");
	printf("\t     *        *  *  *  *  \n");
	printf("\t            *             \n");
	printf("\t_________  *     _________\n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
}

void print_right_state_6(){
	printf("\t         |    * |         \n");
	printf("\t         |      |         \n");
	printf("\t         |    * |         \n");
	printf("\t         |      |         \n");
	printf("\t_________|      |_________\n");
	printf("\t  *        *  *  *  *  *  \n");
	printf("\t                          \n");
	printf("\t_________  *     _________\n");
	printf("\t         | *  - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
}

void print_right_state_7(){
	printf("\t         |      |         \n");
	printf("\t         |    * |         \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t_________|    * |_________\n");
	printf("\t*       *     *  *  *  *  \n");
	printf("\t                          \n");
	printf("\t_________        _________\n");
	printf("\t         | *  - |         \n");
	printf("\t         | *  - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
}

void print_right_state_8(){
	printf("\t         |    * |         \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t         |    * |         \n");
	printf("\t_________|    * |_________\n");
	printf("\t     *        *  *  *  *  \n");
	printf("\t                          \n");
	printf("\t_________        _________\n");
	printf("\t         |    - |         \n");
	printf("\t         | *  - |         \n");
	printf("\t         | *  - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
}

void print_right_state_9(){
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t         |    * |         \n");
	printf("\t         |    * |         \n");
	printf("\t_________|      |_________\n");
	printf("\t  *        *  *  *  *  *  \n");
	printf("\t                          \n");
	printf("\t_________        _________\n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         | *  - |         \n");
	printf("\t         | *  - |         \n");
	printf("\t         |    - |         \n");
}

void print_right_state_10(){
	printf("\t         |      |         \n");
	printf("\t         |    * |         \n");
	printf("\t         |    * |         \n");
	printf("\t         |      |         \n");
	printf("\t_________|      |_________\n");
	printf("\t*       *  *  *  *  *  *  \n");
	printf("\t                          \n");
	printf("\t_________        _________\n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         | *  - |         \n");
	printf("\t         | *  - |         \n");
}

void print_right_state_11(){
	printf("\t         |    * |         \n");
	printf("\t         |    * |         \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t_________|      |_________\n");
	printf("\t     *  *  *  *  *  *  *  \n");
	printf("\t                          \n");
	printf("\t_________        _________\n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         | *  - |         \n");
}

void print_right_state_12(){
	printf("\t         |    * |         \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t_________|      |_________\n");
	printf("\t  *  *  *     *  *  *     \n");
	printf("\t            *             \n");
	printf("\t_________        _________\n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
}

void print_right_state_13(){
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t_________|    * |_________\n");
	printf("\t*  *  *       *  *        \n");
	printf("\t                          \n");
	printf("\t_________  *     _________\n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
}

void print_right_state_14(){
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t         |    * |         \n");
	printf("\t_________|    * |_________\n");
	printf("\t*  *          *           \n");
	printf("\t                          \n");
	printf("\t_________        _________\n");
	printf("\t         | *  - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
	printf("\t         |    - |         \n");
}

// Semáforo ABAIXO aberto
void print_down_state_0(){
	printf("\t         |    * |         \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t_________|      |_________\n");
	printf("\t                          \n");
	printf("\t                          \n");
	printf("\t_________        _________\n");
	printf("\t         |    * |         \n");
	printf("\t         | *  * |         \n");
	printf("\t         |    * |         \n");
	printf("\t         |    * |         \n");
	printf("\t         | *  * |         \n");
}

void print_down_state_1(){
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t_________|      |_________\n");
	printf("\t                          \n");
	printf("\t                          \n");
	printf("\t_________     *  _________\n");
	printf("\t         |    * |         \n");
	printf("\t         |    * |         \n");
	printf("\t         | *  * |         \n");
	printf("\t         |    * |         \n");
	printf("\t         |    * |         \n");
}

void print_down_state_2(){
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t_________|      |_________\n");
	printf("\t              *           \n");
	printf("\t                          \n");
	printf("\t_________     *  _________\n");
	printf("\t         |    * |         \n");
	printf("\t         |    * |         \n");
	printf("\t         |    * |         \n");
	printf("\t         | *  * |         \n");
	printf("\t         |    * |         \n");
}

void print_down_state_3(){
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t_________|    * |_________\n");
	printf("\t              *           \n");
	printf("\t                          \n");
	printf("\t_________     *  _________\n");
	printf("\t         |    * |         \n");
	printf("\t         |    * |         \n");
	printf("\t         |    * |         \n");
	printf("\t         |    * |         \n");
	printf("\t         | *  * |         \n");
}

void print_down_state_4(){
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t         |    * |         \n");
	printf("\t_________|    * |_________\n");
	printf("\t                          \n");
	printf("\t            *             \n");
	printf("\t_________     *  _________\n");
	printf("\t         |    * |         \n");
	printf("\t         |    * |         \n");
	printf("\t         |    * |         \n");
	printf("\t         |    * |         \n");
	printf("\t         |    * |         \n");
}

void print_down_state_5(){
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t         |    * |         \n");
	printf("\t         |    * |         \n");
	printf("\t_________|      |_________\n");
	printf("\t         *                \n");
	printf("\t                          \n");
	printf("\t_________     *  *________\n");
	printf("\t         |    * |         \n");
	printf("\t         |    * |         \n");
	printf("\t         |    * |         \n");
	printf("\t         |    * |         \n");
	printf("\t         |    * |         \n");
}

void print_down_state_6(){
	printf("\t         |      |         \n");
	printf("\t         |    * |         \n");
	printf("\t         |    * |         \n");
	printf("\t         |      |         \n");
	printf("\t_________|      |_________\n");
	printf("\t      *                   \n");
	printf("\t            *             \n");
	printf("\t_________     *  ___*_____\n");
	printf("\t         |    * |         \n");
	printf("\t         |    * |         \n");
	printf("\t         |    * |         \n");
	printf("\t         |    * |         \n");
	printf("\t         |    * |         \n");
}

void print_down_state_7(){
	printf("\t         |    * |         \n");
	printf("\t         |    * |         \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t_________|      |_________\n");
	printf("\t      *  *    *           \n");
	printf("\t                          \n");
	printf("\t_________     *  ______*__\n");
	printf("\t         |    * |         \n");
	printf("\t         |    * |         \n");
	printf("\t         |    * |         \n");
	printf("\t         |    * |         \n");
	printf("\t         |    * |         \n");
}

void print_down_state_8(){
	printf("\t         |    * |         \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t_________|    * |_________\n");
	printf("\t   *  *       *           \n");
	printf("\t                          \n");
	printf("\t_________     *  ________*\n");
	printf("\t         |    * |         \n");
	printf("\t         |    * |         \n");
	printf("\t         |    * |         \n");
	printf("\t         |    * |         \n");
	printf("\t         |      |         \n");
}

void print_down_state_9(){
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t         |    * |         \n");
	printf("\t_________|    * |_________\n");
	printf("\t*  *                      \n");
	printf("\t                          \n");
	printf("\t_________     *  *________\n");
	printf("\t         |    * |         \n");
	printf("\t         |    * |         \n");
	printf("\t         |    * |         \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
}

void print_down_state_10(){
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t         |    * |         \n");
	printf("\t         |    * |         \n");
	printf("\t_________|      |_________\n");
	printf("\t*             *           \n");
	printf("\t                          \n");
	printf("\t_________     *  ___*_____\n");
	printf("\t         |    * |         \n");
	printf("\t         |    * |         \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
}

void print_down_state_11(){
	printf("\t         |      |         \n");
	printf("\t         |    * |         \n");
	printf("\t         |    * |         \n");
	printf("\t         |      |         \n");
	printf("\t_________|    * |_________\n");
	printf("\t                          \n");
	printf("\t            *             \n");
	printf("\t_________     *  ______*__\n");
	printf("\t         |    * |         \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
}

void print_down_state_12(){
	printf("\t         |    * |         \n");
	printf("\t         |    * |         \n");
	printf("\t         |      |         \n");
	printf("\t         |    * |         \n");
	printf("\t_________|      |_________\n");
	printf("\t         *                \n");
	printf("\t                          \n");
	printf("\t_________     *  *_______*\n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t         |    * |         \n");
}

void print_down_state_13(){
	printf("\t         |    * |         \n");
	printf("\t         |      |         \n");
	printf("\t         |    * |         \n");
	printf("\t         |      |         \n");
	printf("\t_________|      |_________\n");
	printf("\t      *       *           \n");
	printf("\t                          \n");
	printf("\t_________        ___*_____\n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t         |    * |         \n");
	printf("\t         |      |         \n");
}

void print_down_state_14(){
	printf("\t         |      |         \n");
	printf("\t         |    * |         \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t_________|    * |_________\n");
	printf("\t   *                      \n");
	printf("\t                          \n");
	printf("\t_________        ______*__\n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
	printf("\t         |    * |         \n");
	printf("\t         |      |         \n");
	printf("\t         |      |         \n");
}
