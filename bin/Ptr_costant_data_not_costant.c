/**
 * @file Ptr_costant_data_not_costant.cpp
 *
 * @version 01.01 2020-08-15
 *
 * @brief Puntator costant and data not costant in c
 *
 * @ingroup Ptr_costant_data_not_costant
 * (Note: this needs exactly one @defgroup somewhere)
 *
 * @author Castellani Davide
 *
 * Contact: contacts@castellanidavide.it
 *
 */
#include <stdio.h>

int main() {
	int x;
	int y;

	int * const ptr = &x;

	*ptr = 7;
	ptr = &y;

	return 0;
}