all: linked_list.o
	@gcc linked_list.o

run:
	@./a.out

clear:
	@rm *.o a.out

gen: linked_list.c
	@gcc -c linked_list.c
