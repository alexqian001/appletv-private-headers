/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UIView, UIWindow, UIStatusBarViewController, UIZoomViewController;

@interface UIClassicController : NSObject {
@private
	UIWindow *_window;	// 4 = 0x4
	UIView *_chromeView;	// 8 = 0x8
	UIStatusBarViewController *_statusBarViewController;	// 12 = 0xc
	UIZoomViewController *_zoomViewController;	// 16 = 0x10
	BOOL _hidesClassicChrome;	// 20 = 0x14
	BOOL _hidesStatusBarFiller;	// 21 = 0x15
}
@property(assign, nonatomic) BOOL drawsClassicChrome;	// G=0x3036fe61; S=0x3036fea9; 
@property(assign, nonatomic) BOOL drawsStatusBarFiller;	// G=0x303706ed; S=0x30370705; 
@property(assign, nonatomic, getter=isZoomed) BOOL zoomed;	// G=0x3036f91d; S=0x3036f965; 
+ (id)sharedClassicController;	// 0x300a1731
- (id)_chromeImageWithOrientation:(int)orientation;	// 0x3036f5b1
- (void)_classicChangeStatusBarOrientation:(id)orientation;	// 0x3036fb45
- (void)_classicChangeStatusBarOrientationFinished:(id)finished finished:(BOOL)finished2 context:(void *)context;	// 0x3036fe4d
- (void)_finishZoom:(BOOL)zoom;	// 0x3036f8d1
- (void)_initializeStatusBarOrientation;	// 0x3036f9a1
- (id)_newChromeViewForOrientation:(int)orientation;	// 0x3036f619
- (void)_setupWindow;	// 0x3036f261
- (BOOL)_shouldHideStatusBar;	// 0x3036fe79
- (BOOL)_supportsZoom;	// 0x3036f8b9
- (void)_updateChromeView:(id)view orientation:(int)orientation;	// 0x3036f669
- (id)_window;	// 0x3036f5a1
- (void)dealloc;	// 0x3036f109
// declared property getter: - (BOOL)drawsClassicChrome;	// 0x3036fe61
// declared property getter: - (BOOL)drawsStatusBarFiller;	// 0x303706ed
- (BOOL)isClassicControlWindow:(id)window;	// 0x3036f1f5
// declared property getter: - (BOOL)isZoomed;	// 0x3036f91d
// declared property setter: - (void)setDrawsClassicChrome:(BOOL)chrome;	// 0x3036fea9
// declared property setter: - (void)setDrawsStatusBarFiller:(BOOL)filler;	// 0x30370705
- (void)setStatusBarHidden:(BOOL)hidden animationParameters:(id)parameters;	// 0x3036f195
- (void)setStatusBarOrientation:(int)orientation animationParameters:(id)parameters;	// 0x3036f1d5
- (void)setStatusBarStyle:(int)style animationParameters:(id)parameters;	// 0x3036f1b5
// declared property setter: - (void)setZoomed:(BOOL)zoomed;	// 0x3036f965
- (void)setZoomed:(BOOL)zoomed animated:(BOOL)animated;	// 0x3036ff81
@end

