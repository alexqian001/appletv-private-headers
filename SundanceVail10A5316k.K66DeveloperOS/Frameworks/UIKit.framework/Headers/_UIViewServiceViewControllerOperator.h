/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "_UIViewServiceDeputyRotationSource.h"
#import "UIKit-Structs.h"
#import "_UIViewServiceViewControllerOperator_RemoteViewControllerInterface.h"
#import "UIViewController.h"
#import "XPCProxyTarget.h"

@class NSMutableArray, UIActionSheet, _UIHostedWindow;

__attribute__((visibility("hidden")))
@interface _UIViewServiceViewControllerOperator : UIViewController <XPCProxyTarget, _UIViewServiceViewControllerOperator_RemoteViewControllerInterface, _UIViewServiceDeputyRotationSource> {
@private
	int _hostPID;	// 180 = 0xb4
	id _remoteViewControllerProxyToOperator;	// 184 = 0xb8
	id _remoteViewControllerProxyToViewController;	// 188 = 0xbc
	UIViewController *_localViewController;	// 192 = 0xc0
	_UIHostedWindow *_hostedWindow;	// 196 = 0xc4
	UIActionSheet *_hostedActionSheet;	// 200 = 0xc8
	BOOL _serviceInPopover;	// 204 = 0xcc
	int _hostStatusBarOrientation;	// 208 = 0xd0
	NSMutableArray *_deputyRotationDelegates;	// 212 = 0xd4
	int __automatic_invalidation_retainCount;	// 216 = 0xd8
	BOOL __automatic_invalidation_invalidated;	// 220 = 0xdc
}
+ (id)operatorWithRemoteViewControllerProxy:(id)remoteViewControllerProxy;	// 0x30462b4d
- (void)__alertIsAppearing:(id)appearing withFrameValue:(id)frameValue;	// 0x304653e1
- (void)__alertIsDisappearing:(id)disappearing;	// 0x30465661
- (int)__automatic_invalidation_logic;	// 0x3046260d
- (void)__createViewController:(id)controller withStatusBarOrientation:(int)statusBarOrientation appearanceSerializedRepresentations:(id)representations replyHandler:(id)handler;	// 0x30464d75
- (void)__hostDidChangeStatusBarOrientationToInterfaceOrientation:(int)__host;	// 0x304647c9
- (void)__hostDidEnterBackground;	// 0x304643e5
- (void)__hostDidPromoteFirstResponder;	// 0x30465389
- (void)__hostDidRotateFromInterfaceOrientation:(int)__host skipSelf:(BOOL)aSelf;	// 0x30464c11
- (void)__hostDidUpdateAppearanceWithSerializedRepresentations:(id)__host originalSource:(id)source;	// 0x30463845
- (void)__hostViewDidAppear:(BOOL)__hostView;	// 0x30464201
- (void)__hostViewDidDisappear:(BOOL)__hostView;	// 0x304642bd
- (void)__hostViewWillAppear:(BOOL)__hostView;	// 0x3046403d
- (void)__hostViewWillDisappear:(BOOL)__hostView;	// 0x30464241
- (void)__hostWillAnimateRotationToInterfaceOrientation:(int)__host duration:(double)duration skipSelf:(BOOL)aSelf;	// 0x304649c9
- (void)__hostWillEnterForeground;	// 0x30464475
- (void)__hostWillRotateToInterfaceOrientation:(int)__host duration:(double)duration skipSelf:(BOOL)aSelf;	// 0x30464825
- (void)__hostedActionSheetClickedButtonAtIndex:(int)index;	// 0x30463f05
- (void)__hostedActionSheetDidDismissWithClickedButtonIndex:(int)__hostedActionSheet;	// 0x30463f85
- (void)__hostedActionSheetDidPresent;	// 0x30463e59
- (void)__scrollToTopFromTouchAtViewLocation:(id)viewLocation resultHandler:(id)handler;	// 0x3046359d
- (void)__setContentSize:(id)size;	// 0x30465201
- (void)__setServiceInPopover:(BOOL)popover;	// 0x304643d5
- (void)_appearanceInvocationsDidChange:(id)_appearanceInvocations;	// 0x304637a1
- (id)_appearanceSource;	// 0x30463775
- (void)_dismissActionSheet:(id)sheet withClickedButtonIndex:(int)clickedButtonIndex animated:(BOOL)animated;	// 0x30463e31
- (void)_firstResponderDidChange:(id)_firstResponder;	// 0x30463985
- (BOOL)_isDeallocating;	// 0x30462b21
- (void)_presentActionSheet:(id)sheet asPopoverFromBarButtonItem:(id)barButtonItem orFromRect:(CGRect)rect inView:(id)view withPreferredArrowDirections:(int)preferredArrowDirections passthroughViews:(id)views backgroundStyle:(id)style animated:(BOOL)animated;	// 0x30463d69
- (void)_presentActionSheet:(id)sheet inView:(id)view fromYCoordinate:(float)ycoordinate;	// 0x30463a2d
- (void)_supportedInterfaceOrientationsDidChange;	// 0x304634dd
- (BOOL)_tryRetain;	// 0x30462ad1
- (void)_windowDidRegisterScrollToTopView;	// 0x304636b1
- (void)_windowDidUnregisterScrollToTopView;	// 0x304636d1
- (void)_windowDidUpdateCurrentTintView:(id)_window;	// 0x304636f1
- (void)addDeputyRotationDelegate:(id)delegate;	// 0x3046344d
- (BOOL)canPerformAction:(SEL)action withSender:(id)sender;	// 0x30463de1
- (void)dealloc;	// 0x30462ffd
- (void)establishViewControllerDeputyWithProxy:(id)proxy completionHandler:(id)handler;	// 0x30463115
- (void)loadView;	// 0x30463321
- (id)proxy:(id)proxy detailedSignatureForSelector:(SEL)selector;	// 0x304656b1
- (oneway void)release;	// 0x304629fd
- (id)retain;	// 0x304629c5
- (unsigned)retainCount;	// 0x30462abd
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;	// 0x30463421
- (BOOL)shouldAutomaticallyForwardRotationMethods;	// 0x30463425
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x30463429
- (void)viewDidLoad;	// 0x304633cd
@end
