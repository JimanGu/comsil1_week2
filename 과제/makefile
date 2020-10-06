cc=gcc
target = hw03
objects = main.o print_array.o count.o

$(target) : $(objects)
	$(cc) -o $(target) $(objects)

$(objects) : Header.h

.PHONY : clean
clean : 	
	rm $(target) $(objects)

