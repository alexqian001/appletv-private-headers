/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIAppearanceContainer.h"
#import "UIDimmingViewDelegate.h"
#import "UIGestureRecognizerDelegatePrivate.h"
#import <NSObject.h> // Unknown library

@class _UIPopoverLayoutInfo, NSArray, UIView, UIBarButtonItem, UIDimmingView, UIPanGestureRecognizer, UIViewController, _UIPopoverView;
@protocol UIPopoverControllerDelegate;

@interface UIPopoverController : NSObject <UIDimmingViewDelegate, UIGestureRecognizerDelegatePrivate, UIAppearanceContainer> {
	id _delegate;	// 4 = 0x4
	UIViewController *_contentViewController;	// 8 = 0x8
	UIViewController *_splitParentController;	// 12 = 0xc
	_UIPopoverView *_popoverView;	// 16 = 0x10
	UIDimmingView *_dimmingView;	// 20 = 0x14
	UIView *_layoutConstraintView;	// 24 = 0x18
	CGRect _targetRectInEmbeddingView;	// 28 = 0x1c
	UIBarButtonItem *_targetBarButtonItem;	// 44 = 0x2c
	unsigned _requestedArrowDirections;	// 48 = 0x30
	unsigned _currentArrowDirection;	// 52 = 0x34
	int _popoverBackgroundStyle;	// 56 = 0x38
	_UIPopoverLayoutInfo *_preferredLayoutInfo;	// 60 = 0x3c
	Class _popoverBackgroundViewClass;	// 64 = 0x40
	CGSize _popoverContentSize;	// 68 = 0x44
	CGRect _targetRectInDimmingView;	// 76 = 0x4c
	CGRect _embeddedTargetRect;	// 92 = 0x5c
	int _popoverControllerStyle;	// 108 = 0x6c
	BOOL _ignoresKeyboardNotifications;	// 112 = 0x70
	unsigned draggingChildScrollViewCount;	// 116 = 0x74
	id _target;	// 120 = 0x78
	SEL _didEndSelector;	// 124 = 0x7c
	UIViewController *_modalPresentationFromViewController;	// 128 = 0x80
	UIViewController *_modalPresentationToViewController;	// 132 = 0x84
	unsigned _toViewAutoResizingMask;	// 136 = 0x88
	UIViewController *_slidingViewController;	// 140 = 0x8c
	UIView *_presentingView;	// 144 = 0x90
	int _presentationEdge;	// 148 = 0x94
	int _presentationDirection;	// 152 = 0x98
	int _presentationState;	// 156 = 0x9c
	BOOL _didPresentInActiveSequence;	// 160 = 0xa0
	unsigned _slideTransitionCount;	// 164 = 0xa4
	UIPanGestureRecognizer *_vendedGestureRecognizer;	// 168 = 0xa8
	UIPanGestureRecognizer *_dimmingViewGestureRecognizer;	// 172 = 0xac
	struct {
		unsigned delegateWantsTransitionWillBegin : 1;
		unsigned delegateWantsTransitionCompleted : 1;
		unsigned delegateCustomizesSpineLocationForInterfaceOrientation : 1;
		unsigned dataSourceSuppliesBeforeViewController : 1;
		unsigned dataSourceSuppliesAfterViewController : 1;
		unsigned dataSourceSuppliesPageCount : 1;
		unsigned dataSourceSuppliesPageNumber : 1;
	} _popoverControllerFlags;	// 176 = 0xb0
	BOOL _allowResizePastTargetRect;	// 177 = 0xb1
	BOOL _dismissesOnRotation;	// 178 = 0xb2
	UIEdgeInsets _popoverLayoutMargins;	// 180 = 0xb4
	BOOL _showsTargetRect;	// 196 = 0xc4
	BOOL _showsOrientationMarker;	// 197 = 0xc5
	BOOL _showsPresentationArea;	// 198 = 0xc6
	BOOL _retainsSelfWhilePresented;	// 199 = 0xc7
}
@property(assign, nonatomic, setter=_setIgnoresKeyboardNotifications:) BOOL _ignoresKeyboardNotifications;	// G=0x31fc28bd; S=0x31fc28cd; @dynamic
@property(assign, nonatomic) BOOL allowResizePastTargetRect;	// G=0x31fc34a1; S=0x31fc34b1; @synthesize=_allowResizePastTargetRect
@property(retain, nonatomic) UIViewController *contentViewController;	// G=0x31fba16d; S=0x31fba1a5; 
@property(assign, nonatomic) id<UIPopoverControllerDelegate> delegate;	// G=0x31fc3451; S=0x31fc3461; @synthesize=_delegate
@property(retain, nonatomic) UIDimmingView *dimmingView;	// G=0x31fc3481; S=0x31fc3491; @synthesize=_dimmingView
@property(assign, nonatomic) BOOL dismissesOnRotation;	// G=0x31fc34c1; S=0x31fc34d1; @synthesize=_dismissesOnRotation
@property(copy, nonatomic) NSArray *passthroughViews;	// G=0x31fbaab9; S=0x31fbaad9; 
@property(assign, nonatomic) unsigned popoverArrowDirection;	// G=0x31fbaa91; S=0x31fc3471; @synthesize=_currentArrowDirection
@property(retain, nonatomic) Class popoverBackgroundViewClass;	// G=0x31fc3521; S=0x31fc3531; @synthesize=_popoverBackgroundViewClass
@property(assign, nonatomic) CGSize popoverContentSize;	// G=0x31fba5cd; S=0x31fba5e5; 
@property(assign, nonatomic) UIEdgeInsets popoverLayoutMargins;	// G=0x31fc34e1; S=0x31fc3505; @synthesize=_popoverLayoutMargins
@property(readonly, retain) _UIPopoverView *popoverView;	// G=0x31fbe8b9; converted property
@property(readonly, assign, nonatomic, getter=isPopoverVisible) BOOL popoverVisible;	// G=0x31fbaa29; 
@property(retain, nonatomic) _UIPopoverLayoutInfo *preferredLayoutInfo;	// G=0x31fc35c1; S=0x31fc35d1; @synthesize=_preferredLayoutInfo
@property(assign, nonatomic, getter=_presentationEdge, setter=_setPresentationEdge:) int presentationEdge;	// G=0x31fc3601; S=0x31fc3611; @synthesize=_presentationEdge
@property(assign, nonatomic, getter=_presentingView, setter=_setPresentingView:) UIView *presentingView;	// G=0x31fc35e1; S=0x31fc35f1; @synthesize=_presentingView
@property(assign, nonatomic, getter=_retainsSelfWhilePresented, setter=_setRetainsSelfWhilePresented:) BOOL retainsSelfWhilePresented;	// G=0x31fc35a1; S=0x31fc35b1; @synthesize=_retainsSelfWhilePresented
@property(assign, nonatomic) BOOL showsOrientationMarker;	// G=0x31fc3561; S=0x31fc3571; @synthesize=_showsOrientationMarker
@property(assign, nonatomic) BOOL showsPresentationArea;	// G=0x31fc3581; S=0x31fc3591; @synthesize=_showsPresentationArea
@property(assign, nonatomic) BOOL showsTargetRect;	// G=0x31fc3541; S=0x31fc3551; @synthesize=_showsTargetRect
+ (UIEdgeInsets)_defaultPopoverLayoutMarginsForPopoverControllerStyle:(int)popoverControllerStyle andContentViewController:(id)controller;	// 0x31fb9b05
+ (BOOL)_forceAttemptsToAvoidKeyboard;	// 0x31fc1971
+ (Class)_popoverViewClass;	// 0x31fb9ae9
+ (BOOL)_popoversDisabled;	// 0x31fb9971
+ (BOOL)_showTargetRectPref;	// 0x31fb9a1d
- (id)init;	// 0x31fb9bad
- (id)initWithContentViewController:(id)contentViewController;	// 0x31fb9f35
- (void)_adjustPopoverForNewContentSizeFromViewController:(id)viewController allowShrink:(BOOL)shrink;	// 0x31fc1755
- (BOOL)_attemptsToAvoidKeyboard;	// 0x31fc1a35
- (void)_beginMapsTransitionToNewViewController:(id)newViewController arrowDirections:(unsigned)directions slideDuration:(float)duration expandDuration:(float)duration4;	// 0x31fc0005
- (void)_beginMapsTransitionToNewViewController:(id)newViewController newTargetRect:(CGRect)rect inView:(id)view arrowDirections:(unsigned)directions slideDuration:(float)duration expandDuration:(float)duration6;	// 0x31fbf611
- (BOOL)_canRepresentAutomatically;	// 0x31fc220d
- (CGPoint)_centerPointForScale:(float)scale frame:(CGRect)frame anchor:(CGPoint)anchor;	// 0x31fbcf29
- (id)_completionBlockForDismissalWhenNotifyingDelegate:(BOOL)dismissalWhenNotifyingDelegate;	// 0x31fc0091
- (void)_containedViewControllerModalStateChanged;	// 0x31fc2a09
- (CGSize)_currentPopoverContentSize;	// 0x31fbe981
- (Class)_defaultChromeViewClass;	// 0x31fbabed
- (id)_dimmingView;	// 0x31fc2b45
- (void)_dismissPopoverAnimated:(BOOL)animated stateOnly:(BOOL)only notifyDelegate:(BOOL)delegate;	// 0x31fc0735
- (float)_dismissalAnimationDuration;	// 0x31fbea11
- (BOOL)_embedsInView;	// 0x31fc2b31
- (BOOL)_gestureRecognizer:(id)recognizer shouldBeRequiredToFailByGestureRecognizer:(id)failByGestureRecognizer;	// 0x31fc111d
- (BOOL)_gestureRecognizer:(id)recognizer shouldRequireFailureOfGestureRecognizer:(id)gestureRecognizer;	// 0x31fc1209
- (id)_gestureRecognizerForPresentationFromEdge:(int)edge;	// 0x31fc0d4d
- (BOOL)_gestureRecognizerShouldBegin:(id)_gestureRecognizer;	// 0x31fc0ef9
- (void)_hostingWindowDidRotate:(id)_hostingWindow;	// 0x31fc22f5
- (void)_hostingWindowWillRotate:(id)_hostingWindow;	// 0x31fc2271
// declared property getter: - (BOOL)_ignoresKeyboardNotifications;	// 0x31fc28bd
- (void)_incrementSlideTransitionCount:(BOOL)count;	// 0x31fbace5
- (id)_initWithContentViewController:(id)contentViewController popoverControllerStyle:(int)style;	// 0x31fb9be9
- (void)_invalidateLayoutInfo;	// 0x31fbadb5
- (BOOL)_isDismissing;	// 0x31fc2a6d
- (BOOL)_isPresenting;	// 0x31fc2a55
- (void)_keyboardStateChanged:(id)changed;	// 0x31fc20a1
- (void)_layoutDimmingViewForInterfaceOrientationOfHostingWindow:(id)hostingWindow;	// 0x31fbeb69
- (id)_layoutInfoForCurrentKeyboardState;	// 0x31fc1ed1
- (id)_layoutInfoForCurrentKeyboardStateAndHostingWindow:(id)currentKeyboardStateAndHostingWindow;	// 0x31fc1e81
- (id)_layoutInfoFromLayoutInfo:(id)layoutInfo forCurrentKeyboardStateAndHostingWindow:(id)currentKeyboardStateAndHostingWindow;	// 0x31fc1aa1
- (id)_managingSplitViewController;	// 0x31fc2ad5
- (BOOL)_manuallyHandlesContentViewControllerAppearanceCalls;	// 0x31fbf3cd
- (void)_modalAnimation:(id)animation finished:(id)finished context:(void *)context;	// 0x31fc32a9
- (void)_modalTransition:(int)transition fromViewController:(id)viewController toViewController:(id)viewController3 target:(id)target didEndSelector:(SEL)selector;	// 0x31fc2b7d
- (void)_moveAwayFromTheKeyboard:(id)theKeyboard;	// 0x31fc1f11
- (void)_newViewControllerWasPushed:(id)pushed;	// 0x31fc1801
- (void)_newViewControllerWillBePushed:(id)_newViewController;	// 0x31fc16e9
- (void)_performHierarchyCheckOnViewController:(id)controller;	// 0x31fbf319
- (int)_popoverBackgroundStyle;	// 0x31fbf41d
- (BOOL)_popoverBackgroundViewWantsDefaultContentAppearance;	// 0x31fbaaf9
- (int)_popoverControllerStyle;	// 0x31fbf3bd
- (Class)_popoverLayoutInfoClass;	// 0x31fbab25
- (void)_postludeForDismissal;	// 0x31fc05f9
- (void)_presentPopoverBySlidingIn:(BOOL)anIn fromEdge:(int)edge ofView:(id)view animated:(BOOL)animated stateOnly:(BOOL)only notifyDelegate:(BOOL)delegate;	// 0x31fbade1
- (void)_presentPopoverFromEdge:(int)edge ofView:(id)view animated:(BOOL)animated;	// 0x31fbc15d
- (void)_presentPopoverFromRect:(CGRect)rect embeddedInView:(id)view usingViewForLayoutConstraints:(id)layoutConstraints permittedArrowDirections:(unsigned)directions;	// 0x31fbc281
- (float)_presentationAnimationDuration;	// 0x31fbe9ed
// declared property getter: - (int)_presentationEdge;	// 0x31fc3601
- (int)_presentationState;	// 0x31fbacb5
// declared property getter: - (id)_presentingView;	// 0x31fc35e1
- (void)_resetSlideTransitionCount;	// 0x31fbada1
// declared property getter: - (BOOL)_retainsSelfWhilePresented;	// 0x31fc35a1
- (void)_scrollViewDidEndDragging:(id)_scrollView;	// 0x31fc271d
- (void)_scrollViewWillBeginDragging:(id)_scrollView;	// 0x31fc2671
- (void)_setContentViewController:(id)controller backgroundStyle:(int)style animated:(BOOL)animated;	// 0x31fbf42d
- (void)_setGesturesEnabled:(BOOL)enabled;	// 0x31fc16a5
// declared property setter: - (void)_setIgnoresKeyboardNotifications:(BOOL)notifications;	// 0x31fc28cd
- (void)_setManagingSplitViewController:(id)controller;	// 0x31fc2ac5
- (void)_setPopoverBackgroundStyle:(int)style;	// 0x31fbf3e5
- (void)_setPopoverView:(id)view;	// 0x31fbe8f1
- (void)_setPopoverViewAlpha:(float)alpha;	// 0x31fbe88d
// declared property setter: - (void)_setPresentationEdge:(int)edge;	// 0x31fc3611
- (void)_setPresentationState:(int)state;	// 0x31fbacc5
// declared property setter: - (void)_setPresentingView:(id)view;	// 0x31fc35f1
// declared property setter: - (void)_setRetainsSelfWhilePresented:(BOOL)presented;	// 0x31fc35b1
- (void)_setSplitParentController:(id)controller;	// 0x31fbe961
- (BOOL)_shimPresentSlidingPopoverAnimated:(BOOL)animated;	// 0x31fbcfe1
- (unsigned)_slideTransitionCount;	// 0x31fbacd5
- (id)_splitParentController;	// 0x31fbe971
- (void)_startWatchingForKeyboardNotificationsIfNecessary;	// 0x31fc20e9
- (void)_startWatchingForNavigationControllerNotifications:(id)navigationControllerNotifications;	// 0x31fc186d
- (void)_startWatchingForScrollViewNotifications;	// 0x31fc27a9
- (void)_startWatchingForWindowRotations;	// 0x31fc2531
- (void)_stopWatchingForKeyboardNotifications;	// 0x31fc2191
- (void)_stopWatchingForNavigationControllerNotifications:(id)navigationControllerNotifications;	// 0x31fc18fd
- (void)_stopWatchingForNotifications;	// 0x31fc29c9
- (void)_stopWatchingForScrollViewNotifications;	// 0x31fc2841
- (void)_stopWatchingForWindowRotations;	// 0x31fc25f5
- (void)_swipe:(id)swipe;	// 0x31fc1349
- (void)_transitionFromViewController:(id)viewController toViewController:(id)viewController2 animated:(BOOL)animated;	// 0x31fbed0d
- (void)_updateDimmingViewTransformForInterfaceOrientationOfHostingWindow:(id)hostingWindow;	// 0x31fbea21
// declared property getter: - (BOOL)allowResizePastTargetRect;	// 0x31fc34a1
// declared property getter: - (id)contentViewController;	// 0x31fba16d
- (void)dealloc;	// 0x31fb9f49
// declared property getter: - (id)delegate;	// 0x31fc3451
// declared property getter: - (id)dimmingView;	// 0x31fc3481
- (void)dimmingViewWasTapped:(id)tapped;	// 0x31fc0ce1
- (void)dismissPopoverAnimated:(BOOL)animated;	// 0x31fbe839
// declared property getter: - (BOOL)dismissesOnRotation;	// 0x31fc34c1
// declared property getter: - (BOOL)isPopoverVisible;	// 0x31fbaa29
- (BOOL)isPresentingOrDismissing;	// 0x31fc2a85
// declared property getter: - (id)passthroughViews;	// 0x31fbaab9
// declared property getter: - (unsigned)popoverArrowDirection;	// 0x31fbaa91
// declared property getter: - (Class)popoverBackgroundViewClass;	// 0x31fc3521
// declared property getter: - (CGSize)popoverContentSize;	// 0x31fba5cd
// declared property getter: - (UIEdgeInsets)popoverLayoutMargins;	// 0x31fc34e1
// converted property getter: - (id)popoverView;	// 0x31fbe8b9
// declared property getter: - (id)preferredLayoutInfo;	// 0x31fc35c1
- (void)presentPopoverFromBarButtonItem:(id)barButtonItem permittedArrowDirections:(unsigned)directions animated:(BOOL)animated;	// 0x31fbe51d
- (void)presentPopoverFromRect:(CGRect)rect inView:(id)view permittedArrowDirections:(unsigned)directions animated:(BOOL)animated;	// 0x31fbd079
// declared property setter: - (void)setAllowResizePastTargetRect:(BOOL)rect;	// 0x31fc34b1
// declared property setter: - (void)setContentViewController:(id)controller;	// 0x31fba1a5
- (void)setContentViewController:(id)controller animated:(BOOL)animated;	// 0x31fba1b9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x31fc3461
// declared property setter: - (void)setDimmingView:(id)view;	// 0x31fc3491
// declared property setter: - (void)setDismissesOnRotation:(BOOL)rotation;	// 0x31fc34d1
// declared property setter: - (void)setPassthroughViews:(id)views;	// 0x31fbaad9
// declared property setter: - (void)setPopoverArrowDirection:(unsigned)direction;	// 0x31fc3471
// declared property setter: - (void)setPopoverBackgroundViewClass:(Class)aClass;	// 0x31fc3531
// declared property setter: - (void)setPopoverContentSize:(CGSize)size;	// 0x31fba5e5
- (void)setPopoverContentSize:(CGSize)size animated:(BOOL)animated;	// 0x31fba609
- (void)setPopoverFrame:(CGRect)frame animated:(BOOL)animated;	// 0x31fba2ed
// declared property setter: - (void)setPopoverLayoutMargins:(UIEdgeInsets)margins;	// 0x31fc3505
// declared property setter: - (void)setPreferredLayoutInfo:(id)info;	// 0x31fc35d1
// declared property setter: - (void)setShowsOrientationMarker:(BOOL)marker;	// 0x31fc3571
// declared property setter: - (void)setShowsPresentationArea:(BOOL)area;	// 0x31fc3591
// declared property setter: - (void)setShowsTargetRect:(BOOL)rect;	// 0x31fc3551
// declared property getter: - (BOOL)showsOrientationMarker;	// 0x31fc3561
// declared property getter: - (BOOL)showsPresentationArea;	// 0x31fc3581
// declared property getter: - (BOOL)showsTargetRect;	// 0x31fc3541
@end
