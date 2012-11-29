/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIViewController.h"

@class _UIClassicCornersWindow, UIClassicStatusBarView, UIView, UIWindow;

__attribute__((visibility("hidden")))
@interface UIStatusBarViewController : UIViewController {
	BOOL _iPhoneWS;	// 197 = 0xc5
	UIWindow *_window;	// 200 = 0xc8
	UIView *_statusBar;	// 204 = 0xcc
	UIClassicStatusBarView *_statusBarBackgroundView;	// 208 = 0xd0
	_UIClassicCornersWindow *_cornersWindow;	// 212 = 0xd4
	BOOL _keyboardVisible;	// 216 = 0xd8
}
@property(readonly, assign, nonatomic) UIWindow *window;	// G=0x34852bfd; @synthesize=_window
+ (double)statusBarOrientationAnimationDurationFrom:(int)from to:(int)to;	// 0x34852741
- (id)init;	// 0x34851235
- (void)_changeStatusBarOrientationFinished:(id)finished finished:(BOOL)finished2 context:(void *)context;	// 0x34852a2d
- (void)_changeStatusBarOrientationFrom:(int)from toOrientation:(int)orientation;	// 0x348527bd
- (void)_prepareForZoom:(BOOL)zoom;	// 0x34851dc5
- (void)_setStatusBarBackgroundImageForOrientation:(int)orientation;	// 0x34851f81
- (void)_statusBarHideAnimationFinished:(id)finished finished:(BOOL)finished2 hidden:(id)hidden;	// 0x3485264d
- (CGSize)_statusBarSizeForOrientation:(int)orientation;	// 0x348525c9
- (void)_statusBarViewControllerKeyboardDidHide:(id)_statusBarViewControllerKeyboard;	// 0x34852b69
- (void)_statusBarViewControllerKeyboardWillShow:(id)_statusBarViewControllerKeyboard;	// 0x34852ad5
- (void)_updateCornersForRotationFromOrientation:(int)orientation toOrientation:(int)orientation2 withStatusBarStyle:(int)statusBarStyle statusBarShouldHide:(BOOL)statusBar;	// 0x348529a1
- (void)_updateStatusBarForRotationFromInterfaceOrientation:(int)interfaceOrientation toInterfaceOrientation:(int)interfaceOrientation2 style:(int)style hidden:(BOOL)hidden slideUp:(BOOL)up;	// 0x34852325
- (void)_updateStatusBarGeometryForRotationFromInterfaceOrientation:(int)interfaceOrientation toInterfaceOrientation:(int)interfaceOrientation2 hidden:(BOOL)hidden slideUp:(BOOL)up;	// 0x34851fd1
- (void)_zoom:(BOOL)zoom animated:(BOOL)animated;	// 0x34851df1
- (void)dealloc;	// 0x34851311
- (BOOL)isClassicControlWindow:(id)window;	// 0x348513dd
- (void)loadView;	// 0x3485140d
- (void)setStatusBarHidden:(BOOL)hidden animationParameters:(id)parameters;	// 0x34851891
- (void)setStatusBarOrientation:(int)orientation animationParameters:(id)parameters;	// 0x34851c99
- (void)setStatusBarStyle:(int)style animationParameters:(id)parameters;	// 0x34851b31
// declared property getter: - (id)window;	// 0x34852bfd
@end
