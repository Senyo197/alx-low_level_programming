#ifndef MAIN_H
#define MAIN_H

#include <errno.h>
#include <elf.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

void print_error(int code, const char *message, const char *file);
void print_class(unsigned char elf_class);
void print_data(unsigned char data_encoding);
void print_version(Elf32_Word version);
void print_osabi(unsigned char osabi);
void print_abi_version(unsigned char abi_version);
void print_file_type(Elf32_Half file_type);
void print_entry_point(Elf32_Addr entry_point);
void display_elf_header(const char *filename);
int main(int argc, char *argv[]);

#endif /* MAIN_H */
