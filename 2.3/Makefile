source=yourcat.cpp
output=yourcat

x86: 
	gcc -lstdc++ -m32 ${source} -o ${output}-x86
	objdump -d ${output}-x86 > asm-x86.txt
	cp asm-x86.txt ex-x86.txt
