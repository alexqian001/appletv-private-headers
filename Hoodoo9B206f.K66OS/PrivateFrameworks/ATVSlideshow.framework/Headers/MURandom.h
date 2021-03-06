/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MUPoolObject.h"


@interface MURandom : MUPoolObject {
	long _state[31];	// 8 = 0x8
	long *_frontPtr;	// 132 = 0x84
	long *_rearPtr;	// 136 = 0x88
	long *_endPtr;	// 140 = 0x8c
}
+ (XXStruct_01lTDD *)poolInfo;	// 0x30acfe59
+ (id)randomGeneratorWithSeed:(unsigned long)seed;	// 0x30acfebd
- (void)_seed:(unsigned long)seed;	// 0x30acfeb5
- (float)randomFloatInRange:(float)range :(float)arg2;	// 0x30acff21
- (long)randomInt;	// 0x30acff1d
@end

