/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIAnimation.h"
#import "UIKit-Structs.h"


__attribute__((visibility("hidden")))
@interface UIScrollerScrollAnimation : UIAnimation {
@private
	CGPoint _originalOffset;	// 44 = 0x2c
	CGPoint _targetOffset;	// 52 = 0x34
}
@property(assign) CGPoint targetOffset;	// G=0x33100985; S=0x331009a1; converted property
- (void)setOriginalOffset:(CGPoint)offset;	// 0x331009b5
- (void)setProgress:(float)progress;	// 0x331009c9
// converted property setter: - (void)setTargetOffset:(CGPoint)offset;	// 0x331009a1
// converted property getter: - (CGPoint)targetOffset;	// 0x33100985
@end
