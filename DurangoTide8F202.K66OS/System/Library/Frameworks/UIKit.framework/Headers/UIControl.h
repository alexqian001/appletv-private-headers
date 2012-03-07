/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSMutableArray;

@interface UIControl : UIView {
@private
	NSMutableArray *_targetActions;	// 44 = 0x2c
	CGPoint _previousPoint;	// 48 = 0x30
	double _downTime;	// 56 = 0x38
	struct {
		unsigned disabled : 1;
		unsigned tracking : 1;
		unsigned touchInside : 1;
		unsigned touchDragged : 1;
		unsigned requiresDisplayOnTracking : 1;
		unsigned highlighted : 1;
		unsigned dontHighlightOnTouchDown : 1;
		unsigned delayActions : 1;
		unsigned allowActionsToQueue : 1;
		unsigned pendingUnhighlight : 1;
		unsigned selected : 1;
		unsigned verticalAlignment : 2;
		unsigned horizontalAlignment : 2;
	} _controlFlags;	// 64 = 0x40
}
@property(assign, nonatomic) int contentHorizontalAlignment;	// G=0x305cc385; S=0x30603389; @dynamic
@property(assign, nonatomic) int contentVerticalAlignment;	// G=0x305adf11; S=0x305ccc01; @dynamic
@property(assign, nonatomic, getter=isEnabled) BOOL enabled;	// G=0x305a8091; S=0x305cd9d1; @dynamic
@property(assign, nonatomic, getter=isHighlighted) BOOL highlighted;	// G=0x305aaee5; S=0x305aaef9; @dynamic
@property(assign) BOOL requiresDisplayOnTracking;	// G=0x305aafa9; S=0x306003e1; converted property
@property(assign, nonatomic, getter=isSelected) BOOL selected;	// G=0x305cb571; S=0x3068b609; @dynamic
@property(readonly, assign, nonatomic) unsigned state;	// G=0x305cb519; @dynamic
@property(readonly, assign, nonatomic, getter=isTouchInside) BOOL touchInside;	// G=0x305ab585; @dynamic
@property(readonly, assign, nonatomic, getter=isTracking) BOOL tracking;	// G=0x305aaa15; @dynamic
- (id)initWithCoder:(id)coder;	// 0x3070825d
- (id)initWithFrame:(CGRect)frame;	// 0x305ca9a5
- (void)_cancelDelayedActions;	// 0x3060f4d5
- (void)_delayActions;	// 0x30707f79
- (void)_didMoveFromWindow:(id)window toWindow:(id)window2;	// 0x305b6331
- (BOOL)_hasActionForEventMask:(int)eventMask;	// 0x30708075
- (void)_sendActionsForEventMask:(int)eventMask withEvent:(GSEventRef)event;	// 0x30668831
- (void)_sendActionsForEvents:(int)events withEvent:(id)event;	// 0x305aaa29
- (void)_sendDelayedActions;	// 0x3070805d
- (void)_sendDelayedActions:(BOOL)actions;	// 0x305aac09
- (void)_setHighlightOnMouseDown:(BOOL)down;	// 0x305d9645
- (void)_unhighlight;	// 0x305afdc9
- (id)actionsForTarget:(id)target forControlEvent:(unsigned)controlEvent;	// 0x30708bed
- (void)addTarget:(id)target action:(SEL)action forControlEvents:(unsigned)controlEvents;	// 0x305cdc2d
- (void)addTarget:(id)target action:(SEL)action forEvents:(int)events;	// 0x305d9621
- (unsigned)allControlEvents;	// 0x30708a1d
- (id)allTargets;	// 0x30708ae9
- (BOOL)beginTrackingAt:(CGPoint)at withEvent:(GSEventRef)event;	// 0x30707fa1
- (BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x305aa9cd
- (BOOL)cancelMouseTracking;	// 0x3068c005
- (BOOL)cancelTouchTracking;	// 0x306e39ad
- (void)cancelTrackingWithEvent:(id)event;	// 0x306730e1
// declared property getter: - (int)contentHorizontalAlignment;	// 0x305cc385
// declared property getter: - (int)contentVerticalAlignment;	// 0x305adf11
- (BOOL)continueTrackingAt:(CGPoint)at previous:(CGPoint)previous withEvent:(GSEventRef)event;	// 0x30707fa5
- (BOOL)continueTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x306e39a5
- (void)dealloc;	// 0x3061ecc1
- (void)encodeWithCoder:(id)coder;	// 0x30708135
- (void)endTrackingAt:(CGPoint)at previous:(CGPoint)previous withEvent:(GSEventRef)event;	// 0x30707fe9
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x305ab599
- (BOOL)hasOneOrMoreTargets;	// 0x30708039
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x307080e9
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x305a8045
// declared property getter: - (BOOL)isEnabled;	// 0x305a8091
// declared property getter: - (BOOL)isHighlighted;	// 0x305aaee5
// declared property getter: - (BOOL)isSelected;	// 0x305cb571
// declared property getter: - (BOOL)isTouchInside;	// 0x305ab585
// declared property getter: - (BOOL)isTracking;	// 0x305aaa15
- (void)mouseDown:(GSEventRef)down;	// 0x307088cd
- (void)mouseDragged:(GSEventRef)dragged;	// 0x30708415
- (BOOL)mouseInside;	// 0x30708001
- (void)mouseUp:(GSEventRef)up;	// 0x307085ed
- (BOOL)pointMostlyInside:(CGPoint)inside forEvent:(GSEventRef)event;	// 0x30708d11
- (BOOL)pointMostlyInside:(CGPoint)inside withEvent:(id)event;	// 0x30636d45
- (void)removeTarget:(id)target action:(SEL)action forControlEvents:(unsigned)controlEvents;	// 0x3060f405
- (void)removeTarget:(id)target forEvents:(int)events;	// 0x30708019
// converted property getter: - (BOOL)requiresDisplayOnTracking;	// 0x305aafa9
- (void)sendAction:(SEL)action to:(id)to forEvent:(id)event;	// 0x305aae15
- (void)sendAction:(SEL)action toTarget:(id)target forEvent:(GSEventRef)event;	// 0x30668a15
- (void)sendActionsForControlEvents:(unsigned)controlEvents;	// 0x305e4bc9
// declared property setter: - (void)setContentHorizontalAlignment:(int)alignment;	// 0x30603389
// declared property setter: - (void)setContentVerticalAlignment:(int)alignment;	// 0x305ccc01
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x305cd9d1
// declared property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x305aaef9
// converted property setter: - (void)setRequiresDisplayOnTracking:(BOOL)tracking;	// 0x306003e1
// declared property setter: - (void)setSelected:(BOOL)selected;	// 0x3068b609
- (void)setTracking:(BOOL)tracking;	// 0x305aa9f9
- (BOOL)shouldTrack;	// 0x305aa8c1
// declared property getter: - (unsigned)state;	// 0x305cb519
- (BOOL)touchDragged;	// 0x30707f8d
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x305aa781
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x306730b1
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x305ab2cd
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x30636b8d
@end
