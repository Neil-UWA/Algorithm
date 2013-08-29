CC		=	gcc
CFLAGS	=	-std=c99 -Wall -Werror -pedantic

COPY_OBJ	= copy.o copy_test.o
STR_OBJ		= m_string.o string_test.o
COUNT_OBJ	= count_dup.o count_dup_test.o

HRDS	=	copy.h m_string.h count_dup.h

count: $(COUNT_OBJ)
	$(CC) $(CFLAGS) $(COUNT_OBJ) -o count 

copy: $(COPY_OBJ)
	$(CC) $(CFLAGS) $(COPY_OBJ) -o copy 

string: $(STR_OBJ)
	$(CC) $(CFLAGS) $(STR_OBJ) -o string 

%.o: %.c $(HRDS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf count copy string *.o

.PHONY:clean
