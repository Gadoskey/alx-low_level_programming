#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <errno.h>
#include <sysexits.h>
void print_error(const char *msg, const char *filename);
void print_header_info(Elf64_Ehdr header);
/**
 * print_error - Print error messages and exit the program with an error code.
 * @msg: The error message.
 * @filename: The name of the file associated with the error.
 */
void print_error(const char *msg, const char *filename)
{
	 fprintf(stderr, "Error: %s (%s)\n", msg, filename);
	 exit(EX_USAGE);
}
/**
 * print_header_info - Print information from the ELF header.
 * @header: The ELF header structure.
 */
void print_header_info(Elf64_Ehdr header)
{
	int i = 0;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header.e_ident[i]);
	}
	printf("\n");
	printf("  Class:                             %s\n",
			header.e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" :
			header.e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" :
			header.e_ident[EI_CLASS] == ELFCLASSNONE ? "none" : "unknown");
	printf("  Data:                              %s\n",
			header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" :
			header.e_ident[EI_DATA] == ELFDATA2MSB ? "2's complement, big endian" :
			header.e_ident[EI_DATA] == ELFDATANONE ? "none" : "unknown");
	printf("  Version:                           %d\n", header.e_ident[EI_VERSION]);
	printf("  OS/ABI:                            ");
	switch (header.e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV: printf("UNIX - System V\n"); break;
		case ELFOSABI_HPUX: printf("HP-UX\n"); break;
		case ELFOSABI_STANDALONE: printf("Standalone App\n"); break;
		default: printf("UNIX - unknown\n");
	}
	printf("  ABI Version:                       %d\n", header.e_ident[EI_ABIVERSION]);
	printf("  Type:                              ");
	switch (header.e_type)
	{
		case ET_NONE: printf("NONE (None)\n"); break;
		case ET_REL: printf("REL (Relocatable file)\n"); break;
		case ET_EXEC: printf("EXEC (Executable file)\n"); break;
		case ET_DYN: printf("DYN (Shared object file)\n"); break;
		case ET_CORE: printf("CORE (Core file)\n"); break;
		default: printf("<unknown>: %x\n", header.e_type); break;
	}
	printf("  Entry point address:               %lx\n", header.e_entry);
}
/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 on success, or exit with an error code.
 */
int main(int argc, char **argv)
{
	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		print_error("Usage: elf_header <elf_filename>", "N/A");
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		print_error("Cannot open file for reading", argv[1]);
	}
	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		print_error("Cannot read ELF header", argv[1]);
	}
	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
			header.e_ident[EI_MAG1] != ELFMAG1 ||
			header.e_ident[EI_MAG2] != ELFMAG2 ||
			header.e_ident[EI_MAG3] != ELFMAG3)
	{
		print_error("Not an ELF file", argv[1]);
	}
	print_header_info(header);
	close(fd);
	return (EX_OK);
}
