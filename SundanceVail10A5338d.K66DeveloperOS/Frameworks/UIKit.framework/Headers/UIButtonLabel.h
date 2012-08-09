/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UILabel.h"


__attribute__((visibility("hidden")))
@interface UIButtonLabel : UILabel {
	BOOL _reverseShadow;	// 160 = 0xa0
}
@property(assign) CGSize shadowOffset;	// G=0x30e5db65; S=0x30c5f011; converted property
- (void)_setMinimumFontSize:(float)size;	// 0x30e5d891
- (BOOL)_usesExpensiveShadows;	// 0x30e5dbcd
- (void)setAdjustsFontSizeToFitWidth:(BOOL)fitWidth;	// 0x30e5da09
- (void)setFont:(id)font;	// 0x30c5eef5
- (void)setLineBreakMode:(int)mode;	// 0x30c5f195
- (void)setMinimumScaleFactor:(float)factor;	// 0x30e5d94d
- (void)setReverseShadow:(BOOL)shadow;	// 0x30c5f341
// converted property setter: - (void)setShadowOffset:(CGSize)offset;	// 0x30c5f011
- (void)setTextAlignment:(int)alignment;	// 0x30e5dab9
// converted property getter: - (CGSize)shadowOffset;	// 0x30e5db65
@end
