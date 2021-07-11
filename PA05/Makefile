WARNING = -Wall -Wshadow --pedantic
ERROR = -Werror # -Wvla
GCC = gcc -std=c11 -g $(WARNING) $(ERROR) 

TESTFALGS = -DGRADE_READ -DGRADE_WRITE -DGRADE_TRANSPOSE -DGRADE_MERGE

SRCS = graph.c
OBJS = $(SRCS:%.c=%.o)

graph: src/main.c $(OBJS)
	$(GCC) $(TESTFALGS) $< $(OBJS) -o $@

%.o: src/%.c
	$(GCC) $(TESTFALGS) -c $< 

# Add your additional tests after here


clean: # remove all machine generated files
	rm -f graph *.o output? unit_test *.dSYM