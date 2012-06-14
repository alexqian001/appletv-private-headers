/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIWindow.h"


@interface UIAutoRotatingWindow : UIWindow {
	int _interfaceOrientation;	// 188 = 0xbc
	BOOL _unknownOrientation;	// 192 = 0xc0
}
+ (id)sharedPopoverHostingWindow;	// 0x302f41b1
- (id)initWithFrame:(CGRect)frame;	// 0x3010493d
- (void)_didRemoveSubview:(id)subview;	// 0x3015d431
- (void)dealloc;	// 0x302f430d
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x3015af9d
- (void)updateForOrientation:(int)orientation;	// 0x30104a6d
@end
