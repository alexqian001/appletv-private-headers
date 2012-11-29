/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIAnimation.h"
#import "UIKit-Structs.h"


@interface UITransformAnimation : UIAnimation {
	CGAffineTransform _startTransform;	// 44 = 0x2c
	CGAffineTransform _endTransform;	// 68 = 0x44
}
- (CGAffineTransform)_transformWithMultiplier:(float)multiplier;	// 0x31dda471
- (void)setEndTransform:(CGAffineTransform)transform;	// 0x31dda43d
- (void)setProgress:(float)progress;	// 0x31dda545
- (void)setStartTransform:(CGAffineTransform)transform;	// 0x31dda409
- (CGAffineTransform)transformForFraction:(float)fraction;	// 0x31dda5bd
@end
