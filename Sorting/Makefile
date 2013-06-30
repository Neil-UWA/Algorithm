CC		=		gcc
CCFLAG	=		-std=c99

SOURCE_BUBBLE	=	bubble.c  bubble_test.c
SOURCE_COMMON	=	common.c
HEADERS			=	bubble.h common.h

bubble: $(SOURCE_BUBBLE) $(SOURCE_COMMON) $(HEADERS)
	$(CC) $(CCFLAG) $(SOURCE_BUBBLE) $(SOURCE_COMMON) $(HEADERS) -o bubble

clean: 
	rm a.out *.h.gch
