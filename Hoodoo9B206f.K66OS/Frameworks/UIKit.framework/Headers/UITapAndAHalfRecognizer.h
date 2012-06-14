/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIGestureRecognizer.h"
#import "UIKit-Structs.h"

@class UIDelayedAction, UITouch, NSMutableSet;

__attribute__((visibility("hidden")))
@interface UITapAndAHalfRecognizer : UIGestureRecognizer {
@private
	CGPoint _startPoint;	// 56 = 0x38
	float _allowableMovement;	// 64 = 0x40
	int _numberOfFullTaps;	// 68 = 0x44
	double _minimumFinalPressDuration;	// 72 = 0x48
	NSMutableSet *_activeTouches;	// 80 = 0x50
	int _currentNumberOfTaps;	// 84 = 0x54
	UITouch *_touch;	// 88 = 0x58
	UIDelayedAction *_tapTimer;	// 92 = 0x5c
}
@property(assign, nonatomic) float allowableMovement;	// G=0x355d838d; S=0x353528cd; @synthesize=_allowableMovement
@property(assign, nonatomic) double minimumFinalPressDuration;	// G=0x355d839d; S=0x353aff5d; @synthesize=_minimumFinalPressDuration
@property(assign, nonatomic) int numberOfFullTaps;	// G=0x35405f8d; S=0x355d837d; @synthesize=_numberOfFullTaps
@property(retain, nonatomic) UITouch *touch;	// G=0x35405f7d; S=0x35330b31; @synthesize=_touch
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x35352805
- (void)_resetGestureRecognizer;	// 0x3540ec0d
- (void)_verifyMovementInAllowableRange;	// 0x35407fbd
// declared property getter: - (float)allowableMovement;	// 0x355d838d
- (void)clearTapTimer;	// 0x35330ad5
- (void)dealloc;	// 0x35330a61
// declared property getter: - (double)minimumFinalPressDuration;	// 0x355d839d
// declared property getter: - (int)numberOfFullTaps;	// 0x35405f8d
- (void)recognized:(id)recognized;	// 0x355d82fd
// declared property setter: - (void)setAllowableMovement:(float)movement;	// 0x353528cd
// declared property setter: - (void)setMinimumFinalPressDuration:(double)duration;	// 0x353aff5d
// declared property setter: - (void)setNumberOfFullTaps:(int)fullTaps;	// 0x355d837d
// declared property setter: - (void)setTouch:(id)touch;	// 0x35330b31
- (void)startRecognitionTimer:(double)timer;	// 0x355d8275
- (void)startTapTimer:(double)timer;	// 0x35405f9d
- (void)tooSlow:(id)slow;	// 0x3540ebcd
// declared property getter: - (id)touch;	// 0x35405f7d
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x35405c81
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x355d832d
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x35407e69
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x354385f9
@end
