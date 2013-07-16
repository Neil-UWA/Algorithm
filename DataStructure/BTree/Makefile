SOURCE	=	btree.c btree_test.c
OBJECT	=	btree_test.o btree.o
HEADER	=	btree.h

it: $(OBJECT)
	gcc -std=c99 $(OBJECT) 

%.o : %.c $(HEADER)
	gcc -std=c99 $< -c -g

clean:
	@rm -rf a.out a.out.dSYM/ btree.h.gch *.o
