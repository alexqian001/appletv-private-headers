/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@class NSArray, UIBarButtonItem, UIDimmingView, UIViewController, UIView;
@protocol UIPopoverControllerDelegate;

@interface UIPopoverController : NSObject {
@private
	id _delegate;	// 4 = 0x4
	UIViewController *_contentViewController;	// 8 = 0x8
	UIView *_popoverView;	// 12 = 0xc
	id _private1;	// 16 = 0x10
	NSArray *_passthroughViews;	// 20 = 0x14
	unsigned _popoverArrowDirection;	// 24 = 0x18
	unsigned _popoverBackgroundStyle;	// 28 = 0x1c
	CGSize _popoverContentSize;	// 32 = 0x20
	UIBarButtonItem *_targetBarButtonItem;	// 40 = 0x28
	unsigned _toViewAutoResizingMask;	// 44 = 0x2c
	UIViewController *_modalPresentationFromViewController;	// 48 = 0x30
	UIViewController *_modalPresentationToViewController;	// 52 = 0x34
	UIViewController *_slidingViewController;	// 56 = 0x38
	id _target;	// 60 = 0x3c
	SEL _didEndSelector;	// 64 = 0x40
	int _existingNavBarStyle;	// 68 = 0x44
	int _existingToolBarStyle;	// 72 = 0x48
	struct {
		unsigned _firstTouchForView : 1;
		unsigned _isTap : 1;
		unsigned _isWarped : 1;
		unsigned _isDelayed : 1;
		unsigned _sentTouchesEnded : 1;
	} _popoverControllerFlags;	// 76 = 0x4c
@protected
	BOOL _allowResizePastTargetRect;	// 77 = 0x4d
}
@property(assign, nonatomic) BOOL allowResizePastTargetRect;	// G=0x3220f759; S=0x3220f769; @synthesize=_allowResizePastTargetRect
@property(retain, nonatomic) UIViewController *contentViewController;	// G=0x3221031d; S=0x3221034d; 
@property(assign, nonatomic) id<UIPopoverControllerDelegate> delegate;	// G=0x3220f7a9; S=0x3220f7b9; @synthesize=_delegate
@property(retain, nonatomic) UIDimmingView *dimmingView;	// G=0x3220f779; S=0x322111ad; @synthesize=_private1
@property(copy, nonatomic) NSArray *passthroughViews;	// G=0x3221016d; S=0x322100f9; 
@property(assign, nonatomic) unsigned popoverArrowDirection;	// G=0x3220f789; S=0x3220f799; @synthesize=_popoverArrowDirection
@property(assign, nonatomic) CGSize popoverContentSize;	// G=0x32210aa9; S=0x322101d1; 
@property(assign, nonatomic) CGRect popoverFrame;	// G=0x32210b1d; S=0x322101f5; 
@property(readonly, retain) UIView *popoverView;	// G=0x3220f715; converted property
@property(readonly, assign, nonatomic, getter=isPopoverVisible) BOOL popoverVisible;	// G=0x322100cd; 
- (id)init;	// 0x322109b5
- (id)initWithContentViewController:(id)contentViewController;	// 0x32210821
- (void)_adjustPopoverForNewContentSize:(id)newContentSize;	// 0x32210685
- (void)_adjustPopoverForNewContentSizeFromViewController:(id)viewController allowShrink:(BOOL)shrink;	// 0x32210b41
- (BOOL)_canRepresentAutomatically;	// 0x3220ff3d
- (void)_containedViewControllerModalStateChanged;	// 0x3220f919
- (BOOL)_dimmingViewDimsWhenModal;	// 0x3220f6e1
- (void)_disableAutomaticKeyboard:(id)keyboard;	// 0x322106e1
- (void)_dismissPopoverAnimated:(BOOL)animated notifyDelegate:(BOOL)delegate;	// 0x3220ffc5
- (void)_hostingWindowDidRotate:(id)_hostingWindow;	// 0x3220fe11
- (void)_hostingWindowWillRotate:(id)_hostingWindow;	// 0x3220ff05
- (void)_modalAnimation:(id)animation finished:(id)finished context:(void *)context;	// 0x3220f7c9
- (void)_modalTransition:(int)transition fromViewController:(id)viewController toViewController:(id)viewController3 target:(id)target didEndSelector:(SEL)selector;	// 0x32211e09
- (int)_popoverBackgroundStyle;	// 0x3220f735
- (void)_popoverDidDismiss:(id)_popover;	// 0x32210a0d
- (void)_popoverDismissAnimationCompleted;	// 0x3220fb79
- (void)_popoverIncomingAnimationCompleted;	// 0x3220fb39
- (void)_popoverPresentAnimationCompleted;	// 0x3220fc3d
- (BOOL)_popoverRasterizesLayer;	// 0x3220faa1
- (BOOL)_popoverShouldBeDismissed:(id)_popover;	// 0x3220fca5
- (BOOL)_preventFastMode;	// 0x3220fa7d
- (void)_setContentViewController:(id)controller backgroundStyle:(int)style animated:(BOOL)animated;	// 0x3220f9a5
- (void)_setDimmingViewDimsWhenModal:(BOOL)modal;	// 0x3220f6f5
- (void)_setPopoverBackgroundStyle:(int)style;	// 0x3220f725
- (void)_setPopoverRasterizesLayer:(BOOL)layer;	// 0x3220faed
- (void)_setPreventFastMode:(BOOL)mode;	// 0x3220fa55
- (void)_setupIncomingViewController:(id)controller presenting:(BOOL)presenting animated:(BOOL)animated;	// 0x322111d5
- (void)_startWatchingForWindowRotations;	// 0x3220fd5d
- (void)_stopWatchingForWindowRotations;	// 0x3220fcf1
- (void)_teardownOutgoingViewController:(id)controller animated:(BOOL)animated;	// 0x32210481
// declared property getter: - (BOOL)allowResizePastTargetRect;	// 0x3220f759
// declared property getter: - (id)contentViewController;	// 0x3221031d
- (void)dealloc;	// 0x322106f5
// declared property getter: - (id)delegate;	// 0x3220f7a9
// declared property getter: - (id)dimmingView;	// 0x3220f779
- (void)dimmingViewWasTapped:(id)tapped;	// 0x3220ff89
- (void)dismissPopoverAnimated:(BOOL)animated;	// 0x3220ffad
// declared property getter: - (BOOL)isPopoverVisible;	// 0x322100cd
- (BOOL)isPresentingOrDismissing;	// 0x3220f745
// declared property getter: - (id)passthroughViews;	// 0x3221016d
// declared property getter: - (unsigned)popoverArrowDirection;	// 0x3220f789
// declared property getter: - (CGSize)popoverContentSize;	// 0x32210aa9
// declared property getter: - (CGRect)popoverFrame;	// 0x32210b1d
// converted property getter: - (id)popoverView;	// 0x3220f715
- (void)presentPopoverFromBarButtonItem:(id)barButtonItem permittedArrowDirections:(unsigned)directions animated:(BOOL)animated;	// 0x32210f29
- (void)presentPopoverFromRect:(CGRect)rect inView:(id)view permittedArrowDirections:(unsigned)directions animated:(BOOL)animated;	// 0x322119e5
// declared property setter: - (void)setAllowResizePastTargetRect:(BOOL)rect;	// 0x3220f769
// declared property setter: - (void)setContentViewController:(id)controller;	// 0x3221034d
- (void)setContentViewController:(id)controller animated:(BOOL)animated;	// 0x32210365
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3220f7b9
// declared property setter: - (void)setDimmingView:(id)view;	// 0x322111ad
// declared property setter: - (void)setPassthroughViews:(id)views;	// 0x322100f9
// declared property setter: - (void)setPopoverArrowDirection:(unsigned)direction;	// 0x3220f799
// declared property setter: - (void)setPopoverContentSize:(CGSize)size;	// 0x322101d1
- (void)setPopoverContentSize:(CGSize)size animated:(BOOL)animated;	// 0x32210bd5
// declared property setter: - (void)setPopoverFrame:(CGRect)frame;	// 0x322101f5
- (void)setPopoverFrame:(CGRect)frame animated:(BOOL)animated;	// 0x32210239
@end
