/* vim: tabstop=4 shiftwidth=4 noexpandtab
 *
 * uname
 *
 * Prints the kernel version information.
 */
#include <stdio.h>
#include <syscall.h>

int main(int argc, char * argv[]) {
	char _uname[1024];
	syscall_kernel_string_XXX(_uname);

	fprintf(stdout, "%s\n", _uname);
}
