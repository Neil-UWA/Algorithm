CC		=		gcc
CFLAGS	=		-std=c99

OBJ_COMMON	=	common.o

OBJ_BUBBLE	=	bubble.o  bubble_test.o
OBJ_SELECT	=	selection.o  selection_test.o
OBJ_QUICK	=	quicksort.o  quicksort_test.o

HDR			=	selection.h common.h bubble.h quicksort.h

bubble: $(OBJ_BUBBLE) $(OBJ_COMMON) 
	$(CC) $(CFLAGS) $(OBJ_BUBBLE) $(OBJ_COMMON)  -o bubble

select: $(OBJ_SELECT) $(OBJ_COMMON) 
	$(CC) $(CFLAGS) $(OBJ_SELECT) $(OBJ_COMMON)  -o select

quicksort: $(OBJ_QUICK) $(OBJ_COMMON) 
	$(CC) $(CFLAGS) $(OBJ_QUICK) $(OBJ_COMMON)  -o quicksort 

%.o:%.c $(HDR)
	$(CC) $(CFLGAS) -c $< -o $@

clean: 
	@rm -rf bubble select quicksort *.o 
