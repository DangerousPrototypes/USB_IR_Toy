/*
*
*	USB infrared remote control receiver transmitter firmware v1.0
*	License: creative commons - attribution, share-alike 
*	Copyright Ian Lesnet 2010
*	http://dangerousprototypes.com
*
*/

#ifndef IRS_H
#define IRS_H

unsigned char irsService(void);
void irsSetup(void);
void irsInterruptHandlerHigh(void);

#endif
