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
- (CGAffineTransform)_transformWithMultiplier:(float)multiplier;	// 0x354e9fc9
- (void)setEndTransform:(CGAffineTransform)transform;	// 0x354e9f95
- (void)setProgress:(float)progress;	// 0x354ea095
- (void)setStartTransform:(CGAffineTransform)transform;	// 0x354e9f61
- (CGAffineTransform)transformForFraction:(float)fraction;	// 0x354ea109
@end

