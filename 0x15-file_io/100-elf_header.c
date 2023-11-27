#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

void print_error(const char *message)
{
	fprintf(stderr, "Error: %s\n", message);
	exit(98);
}

void print_elf_header(const Elf64_Ehdr *header)
{
	printf("  Magic:   ");
	for (int i = 0; i < EI_NIDENT; ++i)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");

	printf("  Class:                             %s\n",
	       header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" :
	       (header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "Invalid class"));

	printf("  Data:                              %s\n",
	       header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" :
	       (header->e_ident[EI_DATA] == ELFDATA2MSB ? "2's complement, big endian" : "Invalid data encoding"));

	printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);

	printf("  OS/ABI:                            %s\n",
	       header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" :
	       (header->e_ident[EI_OSABI] == ELFOSABI_HPUX ? "UNIX - HP-UX" :
	        (header->e_ident[EI_OSABI] == ELFOSABI_NETBSD ? "UNIX - NetBSD" :
	         (header->e_ident[EI_OSABI] == ELFOSABI_LINUX ? "UNIX - Linux" : "Other"))));

	printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);

	printf("  Type:                              %s\n",
	       header->e_type == ET_NONE ? "NONE (No file type)" :
	       (header->e_type == ET_REL ? "REL (Relocatable file)" :
	        (header->e_type == ET_EXEC ? "EXEC (Executable file)" :
	         (header->e_type == ET_DYN ? "DYN (Shared object file)" :
	          (header->e_type == ET_CORE ? "CORE (Core file)" : "Other")))));

	printf("  Entry point address:               %#lx\n", (unsigned long)header->e_entry);
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		print_error("Usage: elf_header elf_filename");
	}

	const char *filename = argv[1];

	int fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		print_error("Failed to open file");
	}

	Elf64_Ehdr header;
	ssize_t bytes_read = read(fd, &header, sizeof(header));
	if (bytes_read != sizeof(header) || memcmp(header.e_ident, ELFMAG, SELFMAG) != 0)
	{
		print_error("Not a valid ELF file");
	}

	print_elf_header(&header);

	close(fd);
	return 0;
}
