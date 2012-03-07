/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIWindow.h"


__attribute__((visibility("hidden")))
@interface _UIAlertOverlayWindow : UIWindow {
@private
	BOOL _shouldDeferDisplay;	// 124 = 0x7c
}
@property(assign, nonatomic) BOOL shouldDeferDisplay;	// G=0x30859cf9; S=0x306a0a75; 
+ (CGRect)constrainFrameToScreen:(CGRect)screen;	// 0x306a0a21
- (float)_contentScaleFactor;	// 0x3085a811
- (void)_handleMouseUp:(GSEventRef)up;	// 0x3085a935
- (BOOL)_shouldUseKeyWindowStack;	// 0x306a6641
- (BOOL)isInternalWindow;	// 0x30859cf5
- (id)representation;	// 0x3085a851
- (void)setContentScaleFactor:(float)factor;	// 0x306a0a3d
// declared property setter: - (void)setShouldDeferDisplay:(BOOL)deferDisplay;	// 0x306a0a75
// declared property getter: - (BOOL)shouldDeferDisplay;	// 0x30859cf9
@end
