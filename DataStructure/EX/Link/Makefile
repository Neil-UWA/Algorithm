CC		=	gcc
CCFLAG	=	-std=c99 -Wall -pedantic
NAME	=	link

HEADERS	=	link.h
OBJECTS =	link.o test.o

$(NAME) :  $(OBJECTS)
	$(CC) $(CCFLAG) $(OBJECTS) -o $(NAME)	

%.o: %.c $(HEADERS)
	$(CC) $(CCFLAG) -c $<

clean:
	@rm -f *.o  $(NAME) 
