/*Adicione as seguintes opções no programa que desenha rastros:
R: ativa/desativa o rastro (quando desativado, o cursor deve se mover sem deixar rastro).
C: seleciona uma nova cor para o rastro (alternando de uma cor para a próxima, ciclicamente).
*/
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>

int Rastro (void){
	int col=40,lin=12, putch = 219, num = 15;
	while(1){
		_gotoxy(col,lin);
		_textcolor(num);
		_putch(putch);
		switch(toupper(_getch())){
			case 'N' : if(lin>1) lin--;break;
			case 'S' : if(lin<24) lin++;break;
			case 'L' : if(col>1) col--;break;
			case 'O' : if(col<80) col++;break;
			case 'R' : 
				if(putch == 219){ putch = 0;}
					   else{ putch = 219;}
				break; 
			case 'C':
				if(num == 15){
					num=0;	
				} 
				_textcolor(num++);
				break;
			case 'F' : exit(0);	
		}	
	}

	return 0;	
}
