#ifndef MAIN_H
#define MAIN_H

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

typedef struct {
    unsigned char ident[EI_NIDENT];
    Elf32_Half type;
    Elf32_Half machine;
    Elf32_Word version;
    Elf32_Addr entry_point;
    Elf32_Off program_header_offset;
    Elf32_Off section_header_offset;
    Elf32_Word flags;
    Elf32_Half header_size;
    Elf32_Half program_header_entry_size;
    Elf32_Half program_header_count;
    Elf32_Half section_header_entry_size;
    Elf32_Half section_header_count;
    Elf32_Half section_name_string_index;
} ElfHeader;

void read_elf_header(int fd, ElfHeader *header);
void print_magic(unsigned char *ident);
void print_class(unsigned char elf_class);
void print_data(unsigned char data_encoding);
void print_version(Elf32_Word version);
void print_osabi(unsigned char osabi);
void print_abi_version(unsigned char abi_version);
void print_file_type(Elf32_Half file_type);
void print_entry_point(Elf32_Addr entry_point);


#endif /* MAIN_H */
