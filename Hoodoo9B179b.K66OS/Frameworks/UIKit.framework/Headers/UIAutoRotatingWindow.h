/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIWindow.h"


@interface UIAutoRotatingWindow : UIWindow {
	int _interfaceOrientation;	// 132 = 0x84
}
+ (id)sharedPopoverHostingWindow;	// 0x3314580d
- (id)initWithFrame:(CGRect)frame;	// 0x32f3ae3d
- (void)_didRemoveSubview:(id)subview;	// 0x32f9a9d1
- (void)dealloc;	// 0x33145965
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x32f98451
- (void)updateForOrientation:(int)orientation;	// 0x32f3af5d
@end
