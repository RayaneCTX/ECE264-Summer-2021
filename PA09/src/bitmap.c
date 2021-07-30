////////////////////////////////////////////////////////////////////////////////
///                                 bitmap.c                                 ///
////////////////////////////////////////////////////////////////////////////////
#define BITMAP_SIZE 5

static int bitmap[BITMAP_SIZE];

void init_bitmap(void)
{
	for(int i = 0; i < BITMAP_SIZE; i++) {
		bitmap[i] = 0x00000000;
	}
}

int alloc_bits(int numBits)
{
	/*
 	 * Allocate the first 'numBits' contiguous free bits (set to zero) 
 	 * available in the bitmap, starting from the first integer in the 
 	 * bitmap, and within a given integer, starting from the least 
 	 * significant bit. This is but a simple extension of the allocation
 	 * function defined in lecture. Note that the main difficulty here is
 	 * that the allocated block of bits may span more than one integer in
 	 * the bitmap. Return the bit index for the start of the allocation
 	 * block on success. Return -1 otherwise. Assume that 'numBits' is a
 	 * positive integer.
 	 */
}

void free_bit(int index)
{
	/*
 	 * Free the bit that corresponds to 'index' by setting it equal to zero,
 	 * even if it is already equal to zero. Assume 'index' is valid.
 	 */
}
////////////////////////////////////////////////////////////////////////////////
///                                END OF FILE                               ///
////////////////////////////////////////////////////////////////////////////////
