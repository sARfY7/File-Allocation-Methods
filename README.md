# File-Allocation-Methods
Different Types of File Allocation Methods used by Operating System

1. Sequential File Allocation

	In this scheme, each file occupies a contiguous set of blocks on the disk. For example, if 		a file requires n blocks and is given a block b as the starting location, then the blocks 		assigned to the file will be: b, b+1, b+2,……b+n-1. This means that given the starting 		block address and the length of the file (in terms of blocks required), we can determine 		the blocks occupied by the file.
	The directory entry for a file with contiguous allocation contains

    	a. Address of starting block
    	b. Length of the allocated portion.

