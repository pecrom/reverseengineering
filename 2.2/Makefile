source=2-2.cpp
output=2-2

x86: 
	gcc -lstdc++ -m32 ${source} -o ${output}-x86
	objdump -d ${output}-x86 > asm-x86.txt
	cp asm-x86.txt ex-x86.txt
