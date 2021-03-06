/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIViewController.h"
#import "UIActionSheetDelegate.h"
#import "_UIRemoteViewController_ViewControllerOperatorInterface.h"
#import "_UIRemoteViewController_TextEffectsOperatorInterface.h"
#import "XPCProxyTarget.h"

@class NSString, NSError, UIActionSheet, _UISizeTrackingView, _UITextServiceSession, UIView, _UIViewServiceInterface, UIDimmingView, NSArray, _UIRemoteView, _UIAsyncInvocation;

@interface _UIRemoteViewController : UIViewController <XPCProxyTarget, _UIRemoteViewController_ViewControllerOperatorInterface, _UIRemoteViewController_TextEffectsOperatorInterface, UIActionSheetDelegate> {
	NSString *_serviceBundleIdentifier;	// 304 = 0x130
	_UIViewServiceInterface *_serviceInterface;	// 308 = 0x134
	id _serviceViewControllerProxy;	// 312 = 0x138
	id _serviceViewControllerControlMessageProxy;	// 316 = 0x13c
	NSArray *_serviceViewControllerSupportedInterfaceOrientations;	// 320 = 0x140
	unsigned _serviceAccessibilityServerPort;	// 324 = 0x144
	unsigned _serviceRegisteredScrollToTopViewCount;	// 328 = 0x148
	id _viewControllerOperatorProxy;	// 332 = 0x14c
	_UIAsyncInvocation *_viewControllerOperatorHalfDisconnectionInvocation;	// 336 = 0x150
	id _textEffectsOperatorProxy;	// 340 = 0x154
	_UIAsyncInvocation *_textEffectsOperatorHalfDisconnectionInvocation;	// 344 = 0x158
	BOOL _fencingCurrentTransaction;	// 348 = 0x15c
	unsigned _fenceReplyPort;	// 352 = 0x160
	_UISizeTrackingView *_sizeTrackingView;	// 356 = 0x164
	_UIRemoteView *_serviceViewControllerRemoteView;	// 360 = 0x168
	_UIRemoteView *_fullScreenTextEffectsRemoteView;	// 364 = 0x16c
	_UIRemoteView *_textEffectsAboveStatusBarRemoteView;	// 368 = 0x170
	UIView *_fullScreenTextEffectsSnapshotView;	// 372 = 0x174
	BOOL _snapshotTextEffectsAfterRotation;	// 376 = 0x178
	unsigned _serviceScreenDisplayID;	// 380 = 0x17c
	_UIAsyncInvocation *_terminationInvocation;	// 384 = 0x180
	int _terminationErrorLock;	// 388 = 0x184
	NSError *_terminationError;	// 392 = 0x188
	UIActionSheet *_hostedActionSheet;	// 396 = 0x18c
	_UITextServiceSession *_textServiceSession;	// 400 = 0x190
	int __automatic_invalidation_retainCount;	// 404 = 0x194
	BOOL __automatic_invalidation_invalidated;	// 408 = 0x198
	UIDimmingView *_hostedDimmingView;	// 412 = 0x19c
	UIView *_touchGrabbingView;	// 416 = 0x1a0
	int _preferredStatusBarStyle;	// 420 = 0x1a4
	BOOL _prefersStatusBarHidden;	// 424 = 0x1a8
}
@property(readonly, assign) int preferredStatusBarStyle;	// G=0x2f88e299; converted property
@property(readonly, assign) BOOL prefersStatusBarHidden;	// G=0x2f88e2a9; converted property
@property(readonly, assign, nonatomic) XXStruct_zetnhA serviceAuditToken;	// G=0x2f88b8b9; 
@property(readonly, assign, nonatomic) NSString *serviceBundleIdentifier;	// G=0x2f88b861; 
@property(readonly, assign, nonatomic) int serviceProcessIdentifier;	// G=0x2f88b899; 
@property(readonly, retain) id serviceViewControllerProxy;	// G=0x2f88f515; converted property
+ (BOOL)_shouldUseXPCObjects;	// 0x2f889fc1
+ (id)exportedInterface;	// 0x2f88f549
+ (id)requestViewController:(id)controller fromServiceWithBundleIdentifier:(id)bundleIdentifier connectionHandler:(id)handler;	// 0x2f88a08d
+ (id)serviceViewControllerInterface;	// 0x2f88f545
+ (BOOL)shouldPropagateAppearanceCustomizations;	// 0x2f88f4d1
- (int)__automatic_invalidation_logic;	// 0x2f889d65
- (void)__dismissActionSheetWithClickedButtonIndex:(int)clickedButtonIndex animated:(BOOL)animated;	// 0x2f88d2b1
- (void)__dismissTextServiceSessionAnimated:(BOOL)animated;	// 0x2f88f141
- (void)__presentActionSheetFromYCoordinate:(float)ycoordinate withTitle:(id)title buttonTitles:(id)titles cancelButtonIndex:(int)index destructiveButtonIndex:(int)index5 style:(int)style;	// 0x2f88cf2d
- (void)__sendNotificationName:(id)name userInfo:(id)info;	// 0x2f88e729
- (void)__setSupportedInterfaceOrientations:(id)orientations;	// 0x2f88e2e9
- (void)__setViewServiceIsDisplayingPopover:(BOOL)popover;	// 0x2f88e505
- (void)__showServiceForText:(id)text type:(int)type fromRectValue:(id)rectValue replyHandler:(id)handler;	// 0x2f88eed9
- (void)__viewServiceDidPromoteFirstResponder;	// 0x2f88e9cd
- (void)__viewServiceDidRegisterScrollToTopView;	// 0x2f88cb5d
- (void)__viewServiceDidUnregisterScrollToTopView;	// 0x2f88cbb9
- (void)__viewServiceDidUpdatePreferredStatusBarStyle:(int)__viewService hidden:(BOOL)hidden;	// 0x2f88e2b9
- (void)__viewServiceDidUpdateTintColor:(id)__viewService duration:(double)duration;	// 0x2f88ecf5
- (void)__viewServicePopoverDidChangeContentSize:(id)__viewServicePopover animated:(BOOL)animated fenceSendRight:(id)right withReplyHandler:(id)replyHandler;	// 0x2f88ea45
- (void)__viewServicePopoverDidSetUseToolbarShine:(BOOL)__viewServicePopover;	// 0x2f88ec45
- (void)__willChangeToIdiom:(int)idiom onScreen:(id)screen;	// 0x2f88d91d
- (void)_appearanceInvocationsDidChange:(id)_appearanceInvocations;	// 0x2f88edf5
- (id)_appearanceSource;	// 0x2f88ede5
- (void)_applicationDidBecomeActive:(id)_application;	// 0x2f88bdf9
- (void)_applicationDidEnterBackground:(id)_application;	// 0x2f88bb71
- (void)_applicationDidFinishSuspendSnapshot:(id)_application;	// 0x2f88bc09
- (void)_applicationWillEnterForeground:(id)_application;	// 0x2f88ba4d
- (void)_applicationWillResignActive:(id)_application;	// 0x2f88be19
- (void)_awakeWithConnectionInfo:(id)connectionInfo;	// 0x2f88a5d5
- (BOOL)_customizesForPresentationInPopover;	// 0x2f88ecf1
- (void)_didResignContentViewControllerOfPopover:(id)popover;	// 0x2f88e241
- (void)_didRotateFromInterfaceOrientation:(int)interfaceOrientation forwardToChildControllers:(BOOL)childControllers skipSelf:(BOOL)aSelf;	// 0x2f88e0e9
- (void)_firstResponderDidChange:(id)_firstResponder;	// 0x2f88ce8d
- (void)_hostDidEnterBackground:(id)_host;	// 0x2f88bb91
- (void)_hostWillEnterForeground:(id)_host;	// 0x2f88baf9
- (BOOL)_ignoreAppSupportedOrientations;	// 0x2f88de71
- (id)_initWithViewServiceBundleIdentifier:(id)viewServiceBundleIdentifier;	// 0x2f88a57d
- (BOOL)_isDeallocating;	// 0x2f889f99
- (BOOL)_requiresKeyboardWindowWhenFirstResponder;	// 0x2f88e295
- (void)_restoreTextEffectsRemoteView;	// 0x2f88bc29
- (void)_scrollToTopFromTouchAtViewLocation:(CGPoint)viewLocation resultHandler:(id)handler;	// 0x2f88cc15
- (BOOL)_serviceHasScrollToTopView;	// 0x2f88ce71
- (void)_snapshotAndRemoveTextEffectsRemoteView;	// 0x2f88bcfd
- (void)_statusBarHeightDidChange:(id)_statusBarHeight;	// 0x2f88b939
- (void)_statusBarOrientationDidChange:(id)_statusBarOrientation;	// 0x2f88b8f1
- (void)_terminateUnconditionallyThen:(id)then;	// 0x2f88c0c9
- (id)_terminateWithError:(id)error;	// 0x2f88c005
- (BOOL)_tryRetain;	// 0x2f889f4d
- (void)_updateTouchGrabbingView;	// 0x2f88be29
- (void)_willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration forwardToChildControllers:(BOOL)childControllers skipSelf:(BOOL)aSelf;	// 0x2f88de75
- (void)_willBecomeContentViewControllerOfPopover:(id)popover;	// 0x2f88e1ed
- (void)_willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration forwardToChildControllers:(BOOL)childControllers skipSelf:(BOOL)aSelf;	// 0x2f88dfd9
- (void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;	// 0x2f88d415
- (BOOL)canBecomeFirstResponder;	// 0x2f88ce89
- (void)dealloc;	// 0x2f88c95d
- (void)dimmingViewWasTapped:(id)tapped;	// 0x2f88e709
- (id)disconnect;	// 0x2f88c075
- (void)loadView;	// 0x2f88b265
// converted property getter: - (int)preferredStatusBarStyle;	// 0x2f88e299
// converted property getter: - (BOOL)prefersStatusBarHidden;	// 0x2f88e2a9
- (id)proxy:(id)proxy detailedSignatureForSelector:(SEL)selector;	// 0x2f88f54d
- (oneway void)release;	// 0x2f889e7d
- (void)restoreStateForSession:(id)session anchor:(id)anchor;	// 0x2f88f47d
- (id)retain;	// 0x2f889e45
- (unsigned)retainCount;	// 0x2f889f39
- (void)saveStateForSession:(id)session anchor:(id)anchor;	// 0x2f88f1d5
// declared property getter: - (XXStruct_zetnhA)serviceAuditToken;	// 0x2f88b8b9
// declared property getter: - (id)serviceBundleIdentifier;	// 0x2f88b861
// declared property getter: - (int)serviceProcessIdentifier;	// 0x2f88b899
// converted property getter: - (id)serviceViewControllerProxy;	// 0x2f88f515
- (id)serviceViewControllerProxyWithErrorHandler:(id)errorHandler;	// 0x2f88f525
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x2f88dd35
- (unsigned)supportedInterfaceOrientations;	// 0x2f88dd7d
- (void)synchronizeAnimationsInActions:(id)actions;	// 0x2f88b2a1
- (void)viewDidAppear:(BOOL)view;	// 0x2f88dad1
- (void)viewDidDisappear:(BOOL)view;	// 0x2f88dc25
- (void)viewServiceDidTerminateWithError:(id)viewService;	// 0x2f88f4d5
- (void)viewServiceSupportedInterfaceOrientationsDidChange;	// 0x2f88f511
- (void)viewWillAppear:(BOOL)view;	// 0x2f88d4a1
- (void)viewWillDisappear:(BOOL)view;	// 0x2f88db35
@end

