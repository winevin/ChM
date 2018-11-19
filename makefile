CFLAGS=-fsanitize=address -fsanitize=undefined -O2 -std=gnu11 -Wall -Wno-pointer-sign -Wformat -Wstrict-overflow -Wformat-security -Wnull-dereference -Wignored-qualifiers -Wshift-negative-value -Wswitch-default -Wduplicated-cond -Wfloat-equal -Wshadow -Wpointer-arith -Wnonnull-compare -Wtype-limits -Wwrite-strings -Wempty-body -Wlogical-op -Wstrict-prototypes -Wold-style-declaration -Wold-style-definition -Wmissing-parameter-type -Wmissing-field-initializers -Wnested-externs -Wframe-larger-than=4096 -lm -Werror=pointer-sign -Werror=format -Werror=unused-variable
#-Wformat-overflow -Wduplicated-branches -Wpointer-compare -Wdangling-else -Wvla-larger-than=4096
all:main

main:gauss.c gauss.h
	clear
	gcc $(CFLAGS) $? -o $@
clean:
	rm *.o
	rm main
gg.c:gauss.c gauss.h
	echo "$$@ = $@" #gg.c
	echo "$$< = $<" #only first
	echo "$$? = $?" #all
	echo "$$%% = $%"
