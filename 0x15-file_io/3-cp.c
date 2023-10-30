#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

void error_exit(int code, const char *message) {
    dprintf(STDERR_FILENO, "%s\n", message);
    exit(code);
}

int main(int argc, char *argv[]) {
    int from_fd, to_fd;
    ssize_t bytes_read, bytes_written;
    char buffer[BUFFER_SIZE];

    if (argc != 3)
        error_exit(97, "Usage: cp file_from file_to");

    from_fd = open(argv[1], O_RDONLY);
    if (from_fd == -1)
        error_exit(98, "Error: Can't read from file");

    to_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
    if (to_fd == -1)
        error_exit(99, "Error: Can't write to file");

    while ((bytes_read = read(from_fd, buffer, BUFFER_SIZE)) > 0) {
        bytes_written = write(to_fd, buffer, bytes_read);
        if (bytes_written == -1)
            error_exit(99, "Error: Can't write to file");
    }

    if (bytes_read == -1)
        error_exit(98, "Error: Can't read from file");

    if (close(from_fd) == -1)
        error_exit(100, "Error: Can't close fd");
    if (close(to_fd) == -1)
        error_exit(100, "Error: Can't close fd");

    return (0);
}
