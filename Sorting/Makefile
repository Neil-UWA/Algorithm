CC		=		gcc
CCFLAG	=		-std=c99

SOURCE_COMMON	=	common.c

SOURCE_BUBBLE	=	bubble.c  bubble_test.c
SOURCE_SELECT	=	selection.c  selection_test.c

HEADERS			=	selection.h common.h bubble.h

bubble: $(SOURCE_BUBBLE) $(SOURCE_COMMON) $(HEADERS)
	$(CC) $(CCFLAG) $(SOURCE_BUBBLE) $(SOURCE_COMMON) $(HEADERS) -o bubble

select: $(SOURCE_SELECT) $(SOURCE_COMMON) $(HEADERS)
	$(CC) $(CCFLAG) $(SOURCE_SELECT) $(SOURCE_COMMON) $(HEADERS) -o select

clean: 
	@rm -rf a.out *.h.gch 
