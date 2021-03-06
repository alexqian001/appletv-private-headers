/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIGestureRecognizer.h"
#import "UIKit-Structs.h"

@class UITouch;

@interface UIPinchGestureRecognizer : UIGestureRecognizer {
	float _initialTouchDistance;	// 60 = 0x3c
	float _initialTouchScale;	// 64 = 0x40
	double _lastTouchTime;	// 68 = 0x44
	float _velocity;	// 76 = 0x4c
	float _previousVelocity;	// 80 = 0x50
	float _scaleThreshold;	// 84 = 0x54
	CGAffineTransform _transform;	// 88 = 0x58
	CGPoint _anchorPoint;	// 112 = 0x70
	UITouch *_touches[2];	// 120 = 0x78
	float _hysteresis;	// 128 = 0x80
	id _transformAnalyzer;	// 132 = 0x84
	unsigned _endsOnSingleTouch : 1;	// 136 = 0x88
}
@property(readonly, assign, nonatomic) CGPoint anchorPoint;	// G=0x2f54af71; 
@property(assign, nonatomic, getter=_hysteresis, setter=_setHysteresis:) float hysteresis;	// G=0x2f53ce3d; S=0x2f71d765; @synthesize=_hysteresis
@property(assign, nonatomic) float scale;	// G=0x2f53c0dd; S=0x2f54af89; 
@property(assign, nonatomic) float scaleThreshold;	// G=0x2f71d745; S=0x2f71d755; @synthesize=_scaleThreshold
@property(readonly, assign, nonatomic) float velocity;	// G=0x2f53d281; 
- (id)initWithCoder:(id)coder;	// 0x2f71d709
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x2f48a571
- (BOOL)_endsOnSingleTouch;	// 0x2f71d6d9
// declared property getter: - (float)_hysteresis;	// 0x2f53ce3d
- (void)_resetGestureRecognizer;	// 0x2f52e1b5
- (void)_setEndsOnSingleTouch:(BOOL)touch;	// 0x2f71d6ed
// declared property setter: - (void)_setHysteresis:(float)hysteresis;	// 0x2f71d765
// declared property getter: - (CGPoint)anchorPoint;	// 0x2f54af71
- (void)dealloc;	// 0x2f51466d
// declared property getter: - (float)scale;	// 0x2f53c0dd
// declared property getter: - (float)scaleThreshold;	// 0x2f71d745
// declared property setter: - (void)setScale:(float)scale;	// 0x2f54af89
// declared property setter: - (void)setScaleThreshold:(float)threshold;	// 0x2f71d755
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x2f52d5e9
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x2f55e80d
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x2f52df49
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x2f53cb19
// declared property getter: - (float)velocity;	// 0x2f53d281
@end

