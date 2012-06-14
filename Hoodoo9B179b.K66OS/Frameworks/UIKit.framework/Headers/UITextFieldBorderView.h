/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImage;

__attribute__((visibility("hidden")))
@interface UITextFieldBorderView : UIView {
@private
	UIImage *_image;	// 48 = 0x30
}
- (id)initWithFrame:(CGRect)frame;	// 0x32f27561
- (void)_updateViewPropertiesForBackgroundImage;	// 0x32f27669
- (void)dealloc;	// 0x33022ac1
- (void)layoutSubviews;	// 0x32f27ac1
- (void)setImage:(id)image;	// 0x32f275b1
- (BOOL)useBlockyMagnificationInClassic;	// 0x33096361
@end
