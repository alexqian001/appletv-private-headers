/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

#import </libobjc.A.h>


@interface PTXMotionWindow : NSObject {
	float _radius;	// 4 = 0x4
	float _maxIncrease;	// 8 = 0x8
	int _direction;	// 12 = 0xc
	float _effectiveRadius;	// 16 = 0x10
	float _center;	// 20 = 0x14
	float _upperLimit;	// 24 = 0x18
	float _lowerLimit;	// 28 = 0x1c
}
- (id)initWithRadius:(float)radius maxIncrease:(float)increase direction:(int)direction;	// 0x325abc81
- (float)mappedOffset:(float)offset;	// 0x325abdfd
- (void)reset;	// 0x325abe9d
- (void)setIncreaseFactor:(float)factor fixingOffset:(float)offset;	// 0x325abd4d
@end

