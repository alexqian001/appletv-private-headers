/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import </libobjc.A.h>

@class NSTimer, _UIHostedWindow, QLPreviewViewController, UIScreen, UISnapshotView;

@interface QLAirPlayController : NSObject {
	int _mode;	// 4 = 0x4
	UIScreen *_screen;	// 8 = 0x8
	_UIHostedWindow *_airPlayWindow;	// 12 = 0xc
	UISnapshotView *_snapshotView;	// 16 = 0x10
	QLPreviewViewController *_previewViewController;	// 20 = 0x14
	NSTimer *_refreshTimer;	// 24 = 0x18
}
@property(assign) int mode;	// G=0x2f324811; S=0x2f324639; 
@property(retain) QLPreviewViewController *previewViewController;	// G=0x2f32435d; S=0x2f32436d; 
@property(retain) UIScreen *screen;	// G=0x2f3243d9; S=0x2f3243e9; 
- (id)initWithScreen:(id)screen;	// 0x2f32429d
- (void)_createAirPlayWindowIfNeeded;	// 0x2f324909
- (void)_removeAirPlayWindow;	// 0x2f324aed
- (float)_screenAspectRatioForPreviewViewController:(id)previewViewController;	// 0x2f324b9d
- (float)_screenScaleFactorForPreviewViewController:(id)previewViewController;	// 0x2f324c25
- (void)_startUsingPreviewController;	// 0x2f3244e1
- (void)_stopUsingPreviewController;	// 0x2f324461
- (void)_updateWindowSize;	// 0x2f324895
- (void)dealloc;	// 0x2f3242f9
- (void)invalidate;	// 0x2f324b59
// declared property getter: - (int)mode;	// 0x2f324811
// declared property getter: - (id)previewViewController;	// 0x2f32435d
- (void)refreshSnapshot;	// 0x2f324d61
// declared property getter: - (id)screen;	// 0x2f3243d9
// declared property setter: - (void)setMode:(int)mode;	// 0x2f324639
// declared property setter: - (void)setPreviewViewController:(id)controller;	// 0x2f32436d
// declared property setter: - (void)setScreen:(id)screen;	// 0x2f3243e9
- (void)update;	// 0x2f324821
- (void)updateGeometryForPreviewViewController:(id)previewViewController;	// 0x2f324d0d
@end
