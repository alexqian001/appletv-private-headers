/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UIView.h"

@class NSMutableArray, UIWindow;

@interface UITransitionView : UIView <NSCoding> {
	UIView *_fromView;	// 84 = 0x54
	UIView *_toView;	// 88 = 0x58
	NSMutableArray *_frozenSubviews;	// 92 = 0x5c
	UIResponder *_firstResponderToRemember;	// 96 = 0x60
	id _delegate;	// 100 = 0x64
	UIWindow *_originalWindow;	// 104 = 0x68
	struct {
		unsigned animationInProgress : 1;
		unsigned ignoresInteractionEvents : 1;
		unsigned shouldNotifyDidCompleteImmediately : 1;
		unsigned useViewControllerAppearanceCallbacks : 1;
		unsigned shouldRestoreFromViewAlpha : 1;
		unsigned shouldRasterize : 1;
		unsigned enableRotationAfterTransition : 1;
		unsigned removeFromView : 1;
	} _transitionViewFlags;	// 108 = 0x6c
	float _curlUpRevealedHeight;	// 112 = 0x70
}
@property(assign) id delegate;	// G=0x309c2ddd; S=0x30941ff5; converted property
@property(readonly, retain) UIView *fromView;	// G=0x30aac2d1; converted property
@property(assign) BOOL ignoresInteractionEvents;	// G=0x30aac381; S=0x30a260fd; converted property
@property(assign) BOOL rasterizesOnTransition;	// G=0x309b650d; S=0x30aac35d; converted property
@property(assign, nonatomic) BOOL shouldNotifyDidCompleteImmediately;	// G=0x30947569; S=0x30942005; 
@property(readonly, retain) UIView *toView;	// G=0x30aac2e1; converted property
+ (double)defaultDurationForTransition:(int)transition;	// 0x30924dd9
- (id)initWithCoder:(id)coder;	// 0x30aac091
- (id)initWithFrame:(CGRect)frame;	// 0x30941f61
- (float)_curlUpRevealedHeight;	// 0x309c2db9
- (void)_didCompleteTransition:(BOOL)transition;	// 0x309470ed
- (void)_didStartTransition;	// 0x30946f91
- (BOOL)_isTransitioningFromFromView:(id)view;	// 0x30aac2f5
- (void)_startTransition:(int)transition withDuration:(float)duration;	// 0x309b6525
- (void)_transitionDidStop:(id)_transition finished:(id)finished;	// 0x309c26b5
- (void)dealloc;	// 0x309c3555
// converted property getter: - (id)delegate;	// 0x309c2ddd
- (double)durationForTransition:(int)transition;	// 0x30946e19
- (void)encodeWithCoder:(id)coder;	// 0x30aac1bd
// converted property getter: - (id)fromView;	// 0x30aac2d1
// converted property getter: - (BOOL)ignoresInteractionEvents;	// 0x30aac381
- (BOOL)isTransitioning;	// 0x309f80f9
- (void)notifyDidCompleteTransition:(id)notify;	// 0x3094757d
// converted property getter: - (BOOL)rasterizesOnTransition;	// 0x309b650d
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x30941ff5
// converted property setter: - (void)setIgnoresInteractionEvents:(BOOL)events;	// 0x30a260fd
// converted property setter: - (void)setRasterizesOnTransition:(BOOL)transition;	// 0x30aac35d
// declared property setter: - (void)setShouldNotifyDidCompleteImmediately:(BOOL)notifyDidCompleteImmediately;	// 0x30942005
// declared property getter: - (BOOL)shouldNotifyDidCompleteImmediately;	// 0x30947569
// converted property getter: - (id)toView;	// 0x30aac2e1
- (BOOL)transition:(int)transition fromView:(id)view toView:(id)view3;	// 0x309464e1
- (BOOL)transition:(int)transition fromView:(id)view toView:(id)view3 removeFromView:(BOOL)view4;	// 0x30946505
- (BOOL)transition:(int)transition toView:(id)view;	// 0x3094646d
@end
