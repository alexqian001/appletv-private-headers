/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIGestureRecognizer.h"

@class UIPanGestureVelocitySample, NSMutableArray;

@interface UIPanGestureRecognizer : UIGestureRecognizer {
@private
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
}
@property(readonly, assign, getter=_previousVelocitySample) UIPanGestureVelocitySample *_previousVelocitySample;	// G=0x30182b59; @synthesize
@property(readonly, assign, getter=_velocitySample) UIPanGestureVelocitySample *_velocitySample;	// G=0x30182aad; @synthesize
@property(assign) BOOL failsPastMaxTouches;	// G=0x30337d09; S=0x300d0679; converted property
@property(assign, nonatomic) unsigned maximumNumberOfTouches;	// G=0x30337f2d; S=0x300d08f5; @synthesize=_maximumNumberOfTouches
@property(assign, nonatomic) unsigned minimumNumberOfTouches;	// G=0x30337f1d; S=0x3010ed25; @synthesize=_minimumNumberOfTouches
- (id)initWithCoder:(id)coder;	// 0x30337ba5
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x300d0521
- (CGPoint)_adjustScreenLocation:(CGPoint)location;	// 0x3019cf51
- (BOOL)_canPanHorizontally;	// 0x301cdde5
- (BOOL)_canPanVertically;	// 0x3019de21
- (void)_centroidMovedTo:(CGPoint)to atTime:(double)time;	// 0x3019ccf9
- (CADoublePoint)_convertPoint:(CGPoint)point fromScreenCoordinatesToView:(id)view;	// 0x3019dc01
- (CADoublePoint)_convertPoint:(CGPoint)point toScreenCoordinatesFromView:(id)view;	// 0x3019e035
- (CADoublePoint)_convertVelocitySample:(id)sample fromScreenCoordinatesToView:(id)view;	// 0x3019f9d9
- (float)_hysteresis;	// 0x3019dd85
- (int)_lastTouchCount;	// 0x30337d1d
- (UIOffset)_offsetInViewFromScreenLocation:(CGPoint)screenLocation toScreenLocation:(CGPoint)screenLocation2;	// 0x301cdd09
// declared property getter: - (id)_previousVelocitySample;	// 0x30182b59
- (void)_removeHysteresisFromTranslation;	// 0x3019de35
- (void)_resetGestureRecognizer;	// 0x30182951
- (void)_resetVelocitySamples;	// 0x301829c1
- (void)_setCanPanHorizontally:(BOOL)horizontally;	// 0x30337d2d
- (void)_setCanPanVertically:(BOOL)vertically;	// 0x30337d45
- (void)_setHysteresis:(float)hysteresis;	// 0x300d078d
- (CGPoint)_shiftPanLocationToNewScreenLocation:(CGPoint)newScreenLocation lockingToAxis:(int)axis;	// 0x301cfff9
- (BOOL)_shouldTryToBeginWithEvent:(id)event;	// 0x3019d9f1
- (void)_touchesListChangedFrom:(id)from to:(id)to;	// 0x301f2f91
// declared property getter: - (id)_velocitySample;	// 0x30182aad
- (BOOL)_willScrollX;	// 0x3019da69
- (BOOL)_willScrollY;	// 0x3019dd99
- (void)dealloc;	// 0x300b2d9d
- (void)encodeWithCoder:(id)coder;	// 0x30337c75
// converted property getter: - (BOOL)failsPastMaxTouches;	// 0x30337d09
- (CGPoint)locationInView:(id)view;	// 0x30337d5d
- (CGPoint)locationOfTouch:(unsigned)touch inView:(id)view;	// 0x30337df1
// declared property getter: - (unsigned)maximumNumberOfTouches;	// 0x30337f2d
// declared property getter: - (unsigned)minimumNumberOfTouches;	// 0x30337f1d
- (unsigned)numberOfTouches;	// 0x301bc599
// converted property setter: - (void)setFailsPastMaxTouches:(BOOL)touches;	// 0x300d0679
// declared property setter: - (void)setMaximumNumberOfTouches:(unsigned)touches;	// 0x300d08f5
// declared property setter: - (void)setMinimumNumberOfTouches:(unsigned)touches;	// 0x3010ed25
- (void)setTranslation:(CGPoint)translation inView:(id)view;	// 0x3019df59
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x3017c04d
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x301bc441
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x3017dae9
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x3019c805
- (CGPoint)translationInView:(id)view;	// 0x3019db49
- (CGPoint)velocityInView:(id)view;	// 0x3019f8c1
@end

