/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"


__attribute__((visibility("hidden")))
@interface _UITableViewHeaderFooterViewBackground : UIView {
	UIView *_opaqueBackgroundView;	// 84 = 0x54
	UIView *_transparentBackgroundView;	// 88 = 0x58
}
- (id)initWithFrame:(CGRect)frame;	// 0x3094ef15
- (id)_opaqueBackgroundView;	// 0x3094f189
- (id)_transparentBackgroundView;	// 0x309ea0ed
- (void)_updateBackingView;	// 0x3094f21d
- (void)dealloc;	// 0x30cf5875
- (void)setBackgroundImage:(id)image;	// 0x3094f0c5
- (void)setOpaque:(BOOL)opaque;	// 0x3094ef69
@end

