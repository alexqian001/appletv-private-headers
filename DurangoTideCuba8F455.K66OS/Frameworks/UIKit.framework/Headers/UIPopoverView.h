/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSArray, UIActionSheet, UIViewController, UIWindow, UILayoutContainerView;

@interface UIPopoverView : UIView {
@private
	id _delegate;	// 44 = 0x2c
	UIView *_contentView;	// 48 = 0x30
	UIView *_bgView;	// 52 = 0x34
	SEL _presentAnimationCompletedSelector;	// 56 = 0x38
	SEL _dismissAnimationCompletedSelector;	// 60 = 0x3c
	UIViewController *_viewController;	// 64 = 0x40
	int _direction;	// 68 = 0x44
	int _backgroundStyle;	// 72 = 0x48
	NSArray *_passthroughViews;	// 76 = 0x4c
	float _offset;	// 80 = 0x50
	float _sizeAdjustmentForKeyboard;	// 84 = 0x54
	float _slideAdjustmentForKeyboard;	// 88 = 0x58
	CGRect _desiredPresentationRect;	// 92 = 0x5c
	CGRect _preferredFrame;	// 108 = 0x6c
	CGSize _contentSize;	// 124 = 0x7c
	CGPoint _contentOrigin;	// 132 = 0x84
	UIView *_toolbarShineImage;	// 140 = 0x8c
	UIWindow *_popoverHostingWindow;	// 144 = 0x90
	BOOL _fastMode;	// 148 = 0x94
	UILayoutContainerView *_roundedLayoutContainerView;	// 152 = 0x98
	CGRect _popoverTargetRect;	// 156 = 0x9c
	CGRect _screenPreferredFrame;	// 172 = 0xac
	UIView *_topView;	// 188 = 0xbc
	UIView *_bottomView;	// 192 = 0xc0
	UIActionSheet *_presentedActionSheet;	// 196 = 0xc4
	struct {
		unsigned _firstTouchForView : 1;
		unsigned _isTap : 1;
		unsigned _isWarped : 1;
		unsigned _isDelayed : 1;
		unsigned _sentTouchesEnded : 1;
	} _popoverFlags;	// 200 = 0xc8
}
@property(assign, nonatomic, setter=_setPreventFastMode:) BOOL _preventFastMode;	// G=0x302f9f69; S=0x302f9f7d; 
@property(assign, nonatomic) int arrowDirections;	// G=0x302fa185; S=0x302fa195; @synthesize=_direction
@property(assign) int backgroundStyle;	// G=0x302fa1c5; S=0x302fa1d5; @synthesize=_backgroundStyle
@property(retain, nonatomic) UIView *bottomView;	// G=0x302fa0cd; S=0x302fc8b9; @synthesize=_bottomView
@property(readonly, retain, nonatomic) UIView *contentView;	// G=0x302fa225; @synthesize=_contentView
@property(assign, nonatomic) id delegate;	// G=0x302fa235; S=0x302fa245; @synthesize=_delegate
@property(assign, nonatomic) SEL dismissAnimationCompletedSelector;	// G=0x302fa1e5; S=0x302fa1f5; @synthesize=_dismissAnimationCompletedSelector
@property(assign, nonatomic) float offset;	// G=0x302fa135; S=0x302fa145; @synthesize=_offset
@property(retain, nonatomic) NSArray *passthroughViews;	// G=0x302fa1a5; S=0x302fc869; @synthesize=_passthroughViews
@property(assign, nonatomic) CGRect popoverTargetRect;	// G=0x302fa0ed; S=0x302fa109; @synthesize=_popoverTargetRect
@property(assign, nonatomic) SEL presentAnimationCompletedSelector;	// G=0x302fa205; S=0x302fa215; @synthesize=_presentAnimationCompletedSelector
@property(readonly, assign) CGRect presentationRect;	// G=0x302fb42d; 
@property(assign) UIActionSheet *presentedActionSheet;	// G=0x302fa0ad; S=0x302fa0bd; @synthesize=_presentedActionSheet
@property(assign, nonatomic) UILayoutContainerView *roundedLayoutContainerView;	// G=0x302fa155; S=0x302fa165; @synthesize=_roundedLayoutContainerView
@property(retain, nonatomic) UIView *topView;	// G=0x302fa0dd; S=0x302fc891; @synthesize=_topView
@property(assign, nonatomic) BOOL useFastMode;	// G=0x302fa175; S=0x302fae6d; @synthesize=_fastMode
@property(assign, nonatomic) BOOL useToolbarShine;	// G=0x302fa099; S=0x302fe471; 
@property(retain, nonatomic) UIViewController *viewController;	// G=0x302fa1b5; S=0x302fc841; @synthesize=_viewController
+ (id)_popoverBackgroundViewForContentSize:(CGSize)contentSize offset:(float)offset direction:(int)direction background:(int)background contentOrigin:(out CGPoint *)origin;	// 0x30300291
+ (CGSize)_popoverViewSizeForContentSize:(CGSize)contentSize arrowDirection:(int)direction;	// 0x302fdeed
+ (BOOL)_shouldClampHorizontallyToCornerForPopoverSize:(CGSize)popoverSize arrowOffset:(float)offset;	// 0x302f9ff9
+ (BOOL)_shouldClampVerticallyToBottomCornerForPopoverSize:(CGSize)popoverSize arrowOffset:(float)offset;	// 0x302fa05d
+ (BOOL)_shouldClampVerticallyToTopCornerForPopoverSize:(CGSize)popoverSize arrowOffset:(float)offset;	// 0x302fa025
+ (id)_viewWithFrame:(CGRect)frame contentsImage:(CGImageRef)image rect:(CGRect)rect center:(CGRect)center antialiasingMask:(unsigned)mask;	// 0x302faa09
+ (id)popoverViewContainingView:(id)view;	// 0x30195eed
- (id)initWithContentSize:(CGSize)contentSize;	// 0x302ff8f1
- (id)initWithFrame:(CGRect)frame;	// 0x302faf65
- (void)_adjustContentsCentersForBackgroundImageCount:(int)backgroundImageCount;	// 0x302ff285
- (void)_backgroundStyleAnimationDidStop:(id)_backgroundStyleAnimation finished:(id)finished context:(void *)context;	// 0x302fa255
- (void)_dismissalAnimationDidStop:(id)_dismissalAnimation finished:(id)finished context:(void *)context;	// 0x302fa429
- (BOOL)_isIgnoringTapsInDimmingView;	// 0x302fa281
- (void)_keyboardWillHide:(id)_keyboard;	// 0x302fa319
- (void)_keyboardWillShow:(id)_keyboard;	// 0x302fa349
- (void)_layoutDimmingViewForInterfaceOrientation:(int)interfaceOrientation;	// 0x302ff0c1
- (void)_modalPresentationDidBeginForViewController:(id)_modalPresentation;	// 0x302f9fb5
- (void)_modalPresentationDidEndForViewController:(id)_modalPresentation;	// 0x302fab81
- (void)_modalPresentationWillBeginForViewController:(id)_modalPresentation;	// 0x302fac69
- (void)_modalPresentationWillEndForViewController:(id)_modalPresentation;	// 0x302f9fb9
- (id)_nearestNavigationController;	// 0x302fab25
- (id)_popoverController;	// 0x302f9fbd
- (int)_positionFromRect:(CGRect)rect;	// 0x302ffa29
- (void)_presentationAnimationDidStop:(id)_presentationAnimation finished:(id)finished context:(void *)context;	// 0x302fa5f5
// declared property getter: - (BOOL)_preventFastMode;	// 0x302f9f69
- (void)_resizeAnimationDidStop:(id)_resizeAnimation finished:(id)finished context:(void *)context;	// 0x302fa665
- (void)_runAwayFromTheKeyboard:(id)theKeyboard;	// 0x302fa379
- (void)_setBackgroundStyle:(int)style animated:(BOOL)animated;	// 0x302fc305
- (void)_setBottomBarHidden:(BOOL)hidden;	// 0x302fb26d
- (void)_setDimmingViewIsDimmed:(BOOL)dimmed;	// 0x302fad9d
- (void)_setIgnoreTapsInDimmingView:(BOOL)dimmingView;	// 0x302fa2b5
// declared property setter: - (void)_setPreventFastMode:(BOOL)mode;	// 0x302f9f7d
- (CGPathRef)_shadowPathForFrame:(CGRect)frame direction:(int)direction andOffset:(float)offset;	// 0x302fc8e1
- (int)_style;	// 0x302fa095
- (id)_viewForModalPresentationOfViewController:(id)viewController;	// 0x302fad45
- (void)adjustFrame:(CGRect)frame animated:(BOOL)animated duration:(double)duration;	// 0x302fa3d9
- (void)adjustFrameForViewController:(id)viewController fromViewController:(id)viewController2 isPopoverView:(BOOL)view;	// 0x302fe005
- (CGRect)adjustedPresentationRect;	// 0x302fb57d
// declared property getter: - (int)arrowDirections;	// 0x302fa185
// declared property getter: - (int)backgroundStyle;	// 0x302fa1c5
// declared property getter: - (id)bottomView;	// 0x302fa0cd
- (void)cancelSheetView;	// 0x302fa935
- (void)constrainFrameToPresentationRectAnimated:(BOOL)presentationRectAnimated;	// 0x302faafd
- (void)constrainFrameToPresentationRectAnimated:(BOOL)presentationRectAnimated duration:(double)duration;	// 0x302fb70d
// declared property getter: - (id)contentView;	// 0x302fa225
- (void)dealloc;	// 0x302faec1
// declared property getter: - (id)delegate;	// 0x302fa235
- (void)didMoveToWindow;	// 0x302fc801
- (void)disableAutomaticKeyboard:(id)keyboard;	// 0x302fa2e9
- (void)dismissAnimated:(BOOL)animated;	// 0x302fa6c1
- (void)dismissAnimated:(BOOL)animated notifyDelegate:(BOOL)delegate;	// 0x302fa6d9
// declared property getter: - (SEL)dismissAnimationCompletedSelector;	// 0x302fa1e5
- (void)motionBegan:(int)began withEvent:(id)event;	// 0x302f9fa9
- (void)motionCancelled:(int)cancelled withEvent:(id)event;	// 0x302f9fb1
- (void)motionEnded:(int)ended withEvent:(id)event;	// 0x302f9fad
// declared property getter: - (float)offset;	// 0x302fa135
// declared property getter: - (id)passthroughViews;	// 0x302fa1a5
// declared property getter: - (CGRect)popoverTargetRect;	// 0x302fa0ed
// declared property getter: - (SEL)presentAnimationCompletedSelector;	// 0x302fa205
- (void)presentFromRect:(CGRect)rect inView:(id)view animated:(BOOL)animated;	// 0x302fb0ed
- (void)presentFromRect:(CGRect)rect inView:(id)view contentSize:(CGSize)size backgroundStyle:(int)style animated:(BOOL)animated;	// 0x302fea49
// declared property getter: - (CGRect)presentationRect;	// 0x302fb42d
// declared property getter: - (id)presentedActionSheet;	// 0x302fa0ad
- (void)representFromRect:(CGRect)rect inView:(id)view animated:(BOOL)animated;	// 0x302fb009
- (void)representFromRect:(CGRect)rect inView:(id)view contentSize:(CGSize)size backgroundStyle:(int)style animated:(BOOL)animated;	// 0x302fe669
// declared property getter: - (id)roundedLayoutContainerView;	// 0x302fa155
// declared property setter: - (void)setArrowDirections:(int)directions;	// 0x302fa195
// declared property setter: - (void)setBackgroundStyle:(int)style;	// 0x302fa1d5
// declared property setter: - (void)setBottomView:(id)view;	// 0x302fc8b9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x302fa245
- (void)setDesiredPresentationRect:(CGRect)rect;	// 0x302f9fcd
// declared property setter: - (void)setDismissAnimationCompletedSelector:(SEL)selector;	// 0x302fa1f5
// declared property setter: - (void)setOffset:(float)offset;	// 0x302fa145
// declared property setter: - (void)setPassthroughViews:(id)views;	// 0x302fc869
// declared property setter: - (void)setPopoverTargetRect:(CGRect)rect;	// 0x302fa109
// declared property setter: - (void)setPresentAnimationCompletedSelector:(SEL)selector;	// 0x302fa215
// declared property setter: - (void)setPresentedActionSheet:(id)sheet;	// 0x302fa0bd
// declared property setter: - (void)setRoundedLayoutContainerView:(id)view;	// 0x302fa165
// declared property setter: - (void)setTopView:(id)view;	// 0x302fc891
// declared property setter: - (void)setUseFastMode:(BOOL)mode;	// 0x302fae6d
// declared property setter: - (void)setUseToolbarShine:(BOOL)shine;	// 0x302fe471
// declared property setter: - (void)setViewController:(id)controller;	// 0x302fc841
- (void)sheetViewShouldAnimateForNewContentSize:(id)sheetView;	// 0x302fc1f5
// declared property getter: - (id)topView;	// 0x302fa0dd
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x302f9f99
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x302f9fa5
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x302f9fa1
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x302f9f9d
// declared property getter: - (BOOL)useFastMode;	// 0x302fa175
// declared property getter: - (BOOL)useToolbarShine;	// 0x302fa099
// declared property getter: - (id)viewController;	// 0x302fa1b5
@end

