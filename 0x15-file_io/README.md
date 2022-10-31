# 0x15 C - FILE I/O

0. Tread lightly, she is near

A function that reads a text file and prints it to the POSIX standard output.
Prototype: ssize_t read_textfile(const char *filename, size_t letters);

1. Under the snow

A function that creates a file.
Prototype: int create_file(const char *filename, char *text_content);

2. Speak gently, she can hear
A function that appends text at the end of a file.
Prototype: int append_text_to_file(const char *filename, char *text_content);

3. cp

A program that copies the content of a file to another file.
cp file_from file_to

4. elf

A program that displays the information contained in the ELF header at the start of an ELF file.
Usage: elf_header elf_filename
