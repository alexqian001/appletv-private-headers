/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIAutoRotatingWindow.h"


@interface UITextEffectsWindow : UIAutoRotatingWindow {
	unsigned _activeEffectsCount;	// 128 = 0x80
	BOOL _inDealloc;	// 132 = 0x84
}
+ (void)_releaseSharedInstances;	// 0x3028c27d
+ (id)sharedTextEffectsWindow;	// 0x3010456d
+ (id)sharedTextEffectsWindowAboveStatusBar;	// 0x3019bd99
- (id)initWithFrame:(CGRect)frame;	// 0x30104655
- (void)_didRemoveSubview:(id)subview;	// 0x3016b325
- (BOOL)_disableViewScaling;	// 0x3028c26d
- (void)bringSubviewToFront:(id)front;	// 0x3028c271
- (void)dealloc;	// 0x3028c315
- (void)delayHideWindow;	// 0x3016e465
- (void)didAddSubview:(id)subview;	// 0x30106069
- (BOOL)isInternalWindow;	// 0x3016f2a1
- (void)matchDeviceOrientation;	// 0x301046d5
- (void)sendSubviewToBack:(id)back;	// 0x3028c275
- (void)sortSubviews;	// 0x30106101
- (void)updateForOrientation:(int)orientation;	// 0x3010470d
@end
