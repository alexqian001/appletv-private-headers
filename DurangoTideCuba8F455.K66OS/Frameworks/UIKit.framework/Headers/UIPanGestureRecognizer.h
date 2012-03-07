/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIGestureRecognizer.h"
#import "UIKit-Structs.h"

@class UIPanGestureVelocitySample, NSMutableArray;

@interface UIPanGestureRecognizer : UIGestureRecognizer {
@private
	CGPoint _firstScreenLocation;	// 60 = 0x3c
	CGPoint _lastScreenLocation;	// 68 = 0x44
	double _lastTouchTime;	// 76 = 0x4c
	id _velocitySample;	// 84 = 0x54
	id _previousVelocitySample;	// 88 = 0x58
	NSMutableArray *_touches;	// 92 = 0x5c
	unsigned _lastTouchCount;	// 96 = 0x60
	unsigned _minTouchCount;	// 100 = 0x64
	unsigned _maxTouchCount;	// 104 = 0x68
	float _hysteresis;	// 108 = 0x6c
	unsigned _failsPastMaxTouches : 1;	// 112 = 0x70
}
@property(readonly, assign, getter=_previousVelocitySample) UIPanGestureVelocitySample *_previousVelocitySample;	// G=0x3011a681; @synthesize
@property(readonly, assign, getter=_velocitySample) UIPanGestureVelocitySample *_velocitySample;	// G=0x3011a63d; @synthesize
@property(assign) BOOL failsPastMaxTouches;	// G=0x302c7b5d; S=0x300c5c01; converted property
@property(assign, nonatomic) unsigned maximumNumberOfTouches;	// G=0x302c7b81; S=0x300c5db9; @synthesize=_maxTouchCount
@property(assign, nonatomic) unsigned minimumNumberOfTouches;	// G=0x302c7b91; S=0x300fd091; @synthesize=_minTouchCount
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x300c5ae1
- (void)_centroidMovedTo:(CGPoint)to atTime:(double)time;	// 0x3011a4c1
- (CADoublePoint)_convertPoint:(CGPoint)point fromScreenCoordinatesToView:(id)view;	// 0x3011a801
- (CADoublePoint)_convertPoint:(CGPoint)point toScreenCoordinatesFromView:(id)view;	// 0x3011aff9
- (CADoublePoint)_convertVelocitySample:(id)sample fromScreenCoordinatesToView:(id)view;	// 0x3011c449
- (float)_hysteresis;	// 0x3011aea1
- (int)_lastTouchCount;	// 0x302c7b71
// declared property getter: - (id)_previousVelocitySample;	// 0x3011a681
- (void)_resetGestureRecognizer;	// 0x3011e911
- (void)_resetVelocitySamples;	// 0x3011e975
- (void)_setHysteresis:(float)hysteresis;	// 0x300c5c49
- (BOOL)_shouldTryToBeginWithEvent:(id)event;	// 0x3011ad6d
- (void)_touchesListChangedFrom:(id)from to:(id)to;	// 0x301cb9f5
// declared property getter: - (id)_velocitySample;	// 0x3011a63d
- (BOOL)_willScrollX;	// 0x3011addd
- (BOOL)_willScrollY;	// 0x3011aeb1
- (void)dealloc;	// 0x302c7ba1
// converted property getter: - (BOOL)failsPastMaxTouches;	// 0x302c7b5d
- (CGPoint)locationInView:(id)view;	// 0x302c7d2d
- (CGPoint)locationOfTouch:(unsigned)touch inView:(id)view;	// 0x302c7c0d
// declared property getter: - (unsigned)maximumNumberOfTouches;	// 0x302c7b81
// declared property getter: - (unsigned)minimumNumberOfTouches;	// 0x302c7b91
- (unsigned)numberOfTouches;	// 0x30199ccd
// converted property setter: - (void)setFailsPastMaxTouches:(BOOL)touches;	// 0x300c5c01
// declared property setter: - (void)setMaximumNumberOfTouches:(unsigned)touches;	// 0x300c5db9
// declared property setter: - (void)setMinimumNumberOfTouches:(unsigned)touches;	// 0x300fd091
- (void)setTranslation:(CGPoint)translation inView:(id)view;	// 0x3011af1d
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x30118749
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x30199b8d
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x3011d125
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x30119d65
- (CGPoint)translationInView:(id)view;	// 0x3011a775
- (CGPoint)velocityInView:(id)view;	// 0x3011c36d
@end
