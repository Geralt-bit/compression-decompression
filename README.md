# compression-decompression
It implements a simple compression algorithm where consecutive characters in a text file are compressed by storing the character and the count of its consecutive occurrences. Then, it provides a decompression function to revert the compressed file back to its original form. 

The compress function reads characters from the input file, counts consecutive occurrences of each character, and writes the count and character to the output file.
The decompress function reads the count and character pairs from the compressed file and writes each character count times to the decompressed file.
In the main function, it compresses a file named "input.txt" into "compressed.txt" and then decompresses "compressed.txt" into "decompressed.txt".
