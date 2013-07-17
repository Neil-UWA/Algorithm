CC		=	gcc
CCFLAG	=	-std=c99 -Wall -Werror -pediantic 
SOURCE	= link.c test.c link_test.c
OBJECT	= link.o test.o link_test.o	
HEADER	= link.h test.h	

it: $(OBJECT)
	$(CC) $(CCFLAG) $(OBJECT) -g -o link

%.o : %.c $(HEADER)
	$(CC) $(CCFLAG) $< -c

clean:
	@rm -rf link a.out.dSYM/ *.gch *.o
