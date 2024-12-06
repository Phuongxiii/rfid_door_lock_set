/*
 * main.h
 *
 *  Created on: May 26, 2024
 *      Author: phuon
 */

#ifndef MAIN_H_
#define MAIN_H_

#include <stdint.h>

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif



#endif /* MAIN_H_ */
