#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int main(void)
{
	int		file_descriptor;
	off_t	file_size;
	char	*buffer;
	ssize_t	bytes_read;

	file_descriptor = open("numbers.dict", O_RDONLY);
	if (file_descriptor == -1)
	{
		printf("file opening error\n");
	}
	file_size = lseek(file_descriptor, 0, SEEK_END);
	if (file_size == -1)
	{
		close(file_descriptor);
	}
	lseek(file_descriptor, 0, SEEK_SET);
	buffer = (char *)malloc(file_size);
	if (!buffer)
	{
		close(file_descriptor);
	}
	bytes_read = read(file_descriptor, buffer, file_size);
	if (bytes_read == -1)
	{
		free(buffer);
		close(file_descriptor);
	}
	else
	{
		printf("buffer: \"%s\"", buffer);
	}
	close(file_descriptor);
	free(buffer);
	printf("Hello\n");
	return (0);
}
