/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIGestureRecognizer.h"

@class UITouch;

@interface UIRotationGestureRecognizer : UIGestureRecognizer {
@private
	double _initialTouchDistance;	// 56 = 0x38
	double _initialTouchAngle;	// 64 = 0x40
	double _currentTouchAngle;	// 72 = 0x48
	int _currentRotationCount;	// 80 = 0x50
	double _lastTouchTime;	// 84 = 0x54
	float _velocity;	// 92 = 0x5c
	float _previousVelocity;	// 96 = 0x60
	CGPoint _anchorPoint;	// 100 = 0x64
	id _transformAnalyzer;	// 108 = 0x6c
	UITouch *_touches[2];	// 112 = 0x70
}
@property(readonly, assign) CGPoint anchorPoint;	// G=0x3032c7a1; converted property
@property(assign, nonatomic) float rotation;	// G=0x3032c851; S=0x3032c7bd; 
@property(readonly, assign, nonatomic) float velocity;	// G=0x3032c8ad; 
- (id)initWithCoder:(id)coder;	// 0x3032c62d
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x3032c565
- (void)_resetGestureRecognizer;	// 0x3032c6b5
// converted property getter: - (CGPoint)anchorPoint;	// 0x3032c7a1
- (void)dealloc;	// 0x3032c669
// declared property getter: - (float)rotation;	// 0x3032c851
// declared property setter: - (void)setRotation:(float)rotation;	// 0x3032c7bd
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x3032c901
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x3032d12d
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x3032d0b5
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x3032cce1
// declared property getter: - (float)velocity;	// 0x3032c8ad
@end

