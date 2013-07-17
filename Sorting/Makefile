CC		=		gcc
CCFLAG	=		-std=c99

SOURCE_COMMON	=	common.c

SOURCE_BUBBLE	=	bubble.c  bubble_test.c
SOURCE_SELECT	=	selection.c  selection_test.c
SOURCE_QUICK	=	quicksort.c quicksort.h quicksort_test.c

HEADERS			=	selection.h common.h bubble.h quicksort.h

bubble: $(SOURCE_BUBBLE) $(SOURCE_COMMON) $(HEADERS)
	$(CC) $(CCFLAG) $(SOURCE_BUBBLE) $(SOURCE_COMMON) $(HEADERS) -o bubble

select: $(SOURCE_SELECT) $(SOURCE_COMMON) $(HEADERS)
	$(CC) $(CCFLAG) $(SOURCE_SELECT) $(SOURCE_COMMON) $(HEADERS) -o select

quicksort: $(SOURCE_QUICK) $(SOURCE_COMMON) $(HEADERS)
	$(CC) $(CCFLAG) $(SOURCE_QUICK) $(SOURCE_COMMON) $(HEADERS) -o quicksort 

clean: 
	@rm -rf a.out *.h.gch 
