/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIGestureRecognizer.h"

@class NSMutableArray, UIPanGestureVelocitySample;

@interface UIPanGestureRecognizer : UIGestureRecognizer {
	CGPoint _firstScreenLocation;	// 56 = 0x38
	CGPoint _lastScreenLocation;	// 64 = 0x40
	double _lastTouchTime;	// 72 = 0x48
	id _velocitySample;	// 80 = 0x50
	id _previousVelocitySample;	// 84 = 0x54
	NSMutableArray *_touches;	// 88 = 0x58
	unsigned _lastTouchCount;	// 92 = 0x5c
	unsigned _minimumNumberOfTouches;	// 96 = 0x60
	unsigned _maximumNumberOfTouches;	// 100 = 0x64
	float _hysteresis;	// 104 = 0x68
	CGPoint _lastUnadjustedScreenLocation;	// 108 = 0x6c
	unsigned _failsPastMaxTouches : 1;	// 116 = 0x74
	unsigned _canPanHorizontally : 1;	// 116 = 0x74
	unsigned _canPanVertically : 1;	// 116 = 0x74
	unsigned _ignoresStationaryTouches : 1;	// 116 = 0x74
	NSMutableArray *_movingTouches;	// 120 = 0x78
}
@property(readonly, assign, getter=_previousVelocitySample) UIPanGestureVelocitySample *_previousVelocitySample;	// G=0x32bb9649; @synthesize
@property(readonly, assign, getter=_velocitySample) UIPanGestureVelocitySample *_velocitySample;	// G=0x32bc8b2d; @synthesize
@property(assign) BOOL failsPastMaxTouches;	// G=0x32dbc6cd; S=0x32b4d12d; converted property
@property(assign, nonatomic) unsigned maximumNumberOfTouches;	// G=0x32dbce6d; S=0x32b4d39d; @synthesize=_maximumNumberOfTouches
@property(assign, nonatomic) unsigned minimumNumberOfTouches;	// G=0x32dbce5d; S=0x32b69055; @synthesize=_minimumNumberOfTouches
- (id)initWithCoder:(id)coder;	// 0x32dbc56d
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x32b4cfb9
- (CGPoint)_adjustScreenLocation:(CGPoint)location;	// 0x32c1ce01
- (BOOL)_canPanHorizontally;	// 0x32c72c75
- (BOOL)_canPanVertically;	// 0x32c1dc99
- (void)_centroidMovedTo:(CGPoint)to atTime:(double)time;	// 0x32c1cba9
- (CADoublePoint)_convertPoint:(CGPoint)point fromScreenCoordinatesToView:(id)view;	// 0x32c1da79
- (CADoublePoint)_convertPoint:(CGPoint)point toScreenCoordinatesFromView:(id)view;	// 0x32c1dead
- (CADoublePoint)_convertVelocitySample:(id)sample fromScreenCoordinatesToView:(id)view;	// 0x32bb94b1
- (void)_handleEndedTouches:(id)touches withFinalStateAdjustments:(id)finalStateAdjustments;	// 0x32dbcb0d
- (float)_hysteresis;	// 0x32c1dc01
- (BOOL)_ignoresStationaryTouches;	// 0x32dbc709
- (int)_lastTouchCount;	// 0x32dbc6e1
- (UIOffset)_offsetInViewFromScreenLocation:(CGPoint)screenLocation toScreenLocation:(CGPoint)screenLocation2;	// 0x32dbc739
// declared property getter: - (id)_previousVelocitySample;	// 0x32bb9649
- (void)_removeHysteresisFromTranslation;	// 0x32c1dcad
- (void)_resetGestureRecognizer;	// 0x32bc89b9
- (void)_resetVelocitySamples;	// 0x32bc8a41
- (void)_setCanPanHorizontally:(BOOL)horizontally;	// 0x32bae8b5
- (void)_setCanPanVertically:(BOOL)vertically;	// 0x32dbc71d
- (void)_setHysteresis:(float)hysteresis;	// 0x32b4d239
- (void)_setIgnoresStationaryTouches:(BOOL)touches;	// 0x32dbc6f1
- (CGPoint)_shiftPanLocationToNewScreenLocation:(CGPoint)newScreenLocation lockingToAxis:(int)axis;	// 0x32dbc811
- (BOOL)_shouldTryToBeginWithEvent:(id)event;	// 0x32c1d869
- (void)_touchesListChangedFrom:(id)from to:(id)to;	// 0x32c66dc1
- (BOOL)_updateMovingTouchesArraySavingOldArray:(id *)array;	// 0x32dbc96d
// declared property getter: - (id)_velocitySample;	// 0x32bc8b2d
- (BOOL)_willScrollX;	// 0x32c1d8e1
- (BOOL)_willScrollY;	// 0x32c1dc11
- (void)dealloc;	// 0x32c293ed
- (void)encodeWithCoder:(id)coder;	// 0x32dbc63d
// converted property getter: - (BOOL)failsPastMaxTouches;	// 0x32dbc6cd
- (CGPoint)locationInView:(id)view;	// 0x32c66d2d
- (CGPoint)locationOfTouch:(unsigned)touch inView:(id)view;	// 0x32dbcd31
// declared property getter: - (unsigned)maximumNumberOfTouches;	// 0x32dbce6d
// declared property getter: - (unsigned)minimumNumberOfTouches;	// 0x32dbce5d
- (unsigned)numberOfTouches;	// 0x32c8bc89
// converted property setter: - (void)setFailsPastMaxTouches:(BOOL)touches;	// 0x32b4d12d
// declared property setter: - (void)setMaximumNumberOfTouches:(unsigned)touches;	// 0x32b4d39d
// declared property setter: - (void)setMinimumNumberOfTouches:(unsigned)touches;	// 0x32b69055
- (void)setTranslation:(CGPoint)translation inView:(id)view;	// 0x32c1ddd1
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x32bc6add
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x32c8bc31
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x32bc856d
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x32c1c669
- (CGPoint)translationInView:(id)view;	// 0x32c1d9c1
- (CGPoint)velocityInView:(id)view;	// 0x32bb9399
@end

