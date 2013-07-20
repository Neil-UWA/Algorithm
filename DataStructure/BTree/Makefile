CC		=	gcc
CFLAGS	=	-std=c99 -Wall -Werror -pedantic
RM		=	rm -rf

OBJ		=	btree_test.o btree.o
HEADERS	=	btree.h

it: $(OBJ)
	$(CC) $(CFLAGS) $^ 

%.o : %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@ 

clean:
	$(RM) a.out  *.o

.PHONY: clean
