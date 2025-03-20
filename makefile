cal.exe:cal.o
	gcc -o cal.exe cal.o
cal.o:cal.c
	gcc -c cal.c
