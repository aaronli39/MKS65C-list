all: test.o linked_list.o
	@gcc test.o

run:
	@./a.out

clear:
	@rm *.o a.out

test.o: test.c
	@gcc -c test.c

linked_list.o : linked_list.c
	@gcc -c linked_list.c
