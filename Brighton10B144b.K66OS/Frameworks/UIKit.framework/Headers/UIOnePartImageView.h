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
@interface UIOnePartImageView : UIView {
	CGRect _fromRect;	// 84 = 0x54
	UIImage *_image;	// 100 = 0x64
}
- (void)dealloc;	// 0x32e46d5d
- (void)drawRect:(CGRect)rect;	// 0x32e46ded
- (void)setFromRect:(CGRect)rect;	// 0x32e46dd1
- (void)setImage:(id)image;	// 0x32e46da9
@end

