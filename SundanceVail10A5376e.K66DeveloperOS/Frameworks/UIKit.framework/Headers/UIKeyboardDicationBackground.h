/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSArray, UIKeyboardDicationBackgroundGradientView;

__attribute__((visibility("hidden")))
@interface UIKeyboardDicationBackground : UIView {
	UIKeyboardDicationBackgroundGradientView *_gradient;	// 84 = 0x54
	NSArray *_shadows;	// 88 = 0x58
}
@property(readonly, retain) NSArray *shadows;	// G=0x305d4911; converted property
- (id)initWithFrame:(CGRect)frame;	// 0x305d4e39
- (void)dealloc;	// 0x305d5065
- (void)layoutSubviews;	// 0x305d49fd
// converted property getter: - (id)shadows;	// 0x305d4911
@end

