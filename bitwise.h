#ifndef __BITS_K
#define __BITS_K

/*
 * MACRO: SETBIT
 * --------------
 * Sets IDX th bit of BYTE to `1`
 * @param BYTE: Any integer variable, should not be constant
 * @param  IDX: Index of the bit, should not be greater than
 *              the size of BYTE
 */
// ---------------------------------------------------------
#define SETBIT(BYTE, IDX) ((BYTE) = (BYTE) |  (1 << (IDX)))
// ---------------------------------------------------------

/*
 * MACRO: RESETBIT
 * --------------
 * Resets IDX th bit of BYTE to `0`
 * @param BYTE: Any integer variable, should not be constant
 * @param  IDX: Index of the bit, should not be greater than
 *              the size of BYTE
 */
// ---------------------------------------------------------
#define RESETBIT(BYTE, IDX) ((BYTE) = (BYTE) &  ~(1 << (IDX)))
// ---------------------------------------------------------


/*
 * MACRO: GETBIT
 * --------------
 * Yields i th bit from a word
 * @param BYTE: number from which bit has to be found.
 * @param  IDX: index of the bit.
 */
// ---------------------------------------------------------
#define GETBIT(BYTE, IDX) ((BYTE) & (1 << (IDX)))
// ---------------------------------------------------------

/*
 * MACRO: GETBIT
 * --------------
 * Yields i th bit from a word
 * @param BYTE: number from which bit has to be found.
 * @param  IDX: index of the bit.
 */
// ---------------------------------------------------------
#define GETBIT(BYTE, IDX) ((BYTE) & (1 << (IDX)))
// ---------------------------------------------------------

/*
 * MACRO: NOT
 * Flips all the bits and assigns to it
 */
#define NOT(BYTE) ((BYTE) = ~(BYTE))
// -------------------------------------

/*
 * MACRO: FLIP
 * Toggles/Flips/Inverts the specified bit from given word
 */
#define FLIP(BYTE, IDX) ((BYTE) = (BYTE) ^ (1 << (IDX)))
// --------------------------------------------------------

/*
 * MACRO: SHR
 * Shift all bits and add new one
 * @param BYTE: Destination
 * @param  BIT: new bit
 */
#define SHR(BYTE, BIT) ((BYTE) = ((BYTE) << 1) | (BIT))
// --------------------------------------------------------

/*
 * MACRO: LOWEST_SET
 * Returns the index of lowest set bits
 */
#define LOWEST_SET(BYTE) ((BYTE) & (-(BYTE)))
// --------------------------------------------------------

/*
 * MACRO: TO_LOWER(x)
 * Gets a char and returns the lowercase vesrion of
 * it
 * @param CHAR: A-Z
 */
#define TO_LOWER(CHAR) (((CHAR) > 'A' && (CHAR) < 'Z') ? ((CHAR) | ' ') : CHAR)
// --------------------------------------------------------

/*
 * MACRO: TO_UPPER(x)
 * Gets a char and returns the uppercase vesrion of
 * it
 * @param CHAR: a-z
 */
#define TO_UPPER(CHAR) (((CHAR) > 'a' && (CHAR) < 'z') ? ((CHAR) & '_') : CHAR)
// --------------------------------------------------------

/*
 * MACRO: IS2(NUM)
 * Returns 1 if given number is a power of 2
 * returns 0 otherwise.
 * @param NUM: number in question
 */
#define IS2(NUM) ((NUM) && !((NUM) & ((NUM)-1)) ? 1 : 0)
#endif /* end of include guard: __BITS_K */
