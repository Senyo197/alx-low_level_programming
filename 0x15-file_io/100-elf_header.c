#include "main.h"


void read_elf_header(int fd, ElfHeader *header)
{
	if (read(fd, header, sizeof(ElfHeader)) != sizeof(ElfHeader))
	{
		fprintf(stderr, "Error reading the ELF header\n");
		exit(98);
	}
}

void print_magic(unsigned char *ident)
{
	unsigned int i = 0;
	printf("Magic:   ");

	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", ident[i]);
	printf("\n");
}

void print_class(unsigned char elf_class)
{
	printf("Class:   ");
	switch (elf_class)
	{
		case ELFCLASSNONE:
			printf("None\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("Unknown (%02x)\n", elf_class);
			break;
	}
}

void print_data(unsigned char data_encoding)
{
	printf("Data:   ");
	switch (data_encoding)
	{
		case ELFDATANONE:
			printf("None\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("Unknown (%02x)\n", data_encoding);
			break;
	}
}

void print_version(Elf32_Word version)
{
	printf("Version: %u", version);
	switch (version)
	{
		case EV_CURRENT:
			printf(" (current)\n");
			break;
		default:
			printf("\n");
			break;
	}
}


void print_osabi(unsigned char osabi)
{
	printf("OS/ABI:  ");
	switch (osabi)
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		default:
			printf("Unknown (%02x\n)\n", osabi);
			break;
	}
}

void print_abi_version(unsigned char abi_version)
{
	printf("ABI Version: %u\n", abi_version);
}


void print_file_type(Elf32_Half file_type)
{
	printf("Type:   ");
	switch (file_type)
	{
		case ET_NONE:
			printf("None\n");
			break;
		case ET_REL:
			printf("Relocatable\n");
			break;
		case ET_EXEC:
			printf("Executable\n");
			break;
		case ET_DYN:
			printf("Shared object\n");
			break;
		case ET_CORE:
			printf("Core dump\n");
			break;
		default:
			printf("Unknown (%04x\n)", file_type);
			break;
	}
}


void print_entry_point(Elf32_Addr entry_point)
{
	printf("Entry:   %08x/n", entry_point);
}


int main(int argc, char *argv[])
{
	int elf_fd;
	ElfHeader elf_header;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <ELF file>\n", argv[0]);
		return (98);
	}

	elf_fd = open(argv[0], O_RDONLY);
	if (elf_fd == -1)
	{
		perror("Error opening file");
		return (98);
	}

	read_elf_header(elf_fd, &elf_header);
	close(elf_fd);

	print_magic(elf_header.ident);
	print_class(elf_header.ident[EI_CLASS]);
	print_data(elf_header.ident[EI_DATA]);
	print_version(elf_header.version);
	print_osabi(elf_header.ident[EI_OSABI]);
	print_abi_version(elf_header.ident[EI_ABIVERSION]);
	print_file_type(elf_header.type);
	print_entry_point(elf_header.entry_point);

	return (0);
}
