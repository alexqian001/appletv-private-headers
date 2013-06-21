/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import "TelephonyUI-Structs.h"
#import <UIImageView.h> // Unknown library

@class TPBottomLockBar, UIAlphaAnimation;

@interface TPLockKnobView : UIImageView {
	TPBottomLockBar *_track;	// 96 = 0x60
	UIAlphaAnimation *_animation;	// 100 = 0x64
	float _centerDelta;	// 104 = 0x68
	BOOL _tracking;	// 108 = 0x6c
}
@property(readonly, assign, getter=isTracking) BOOL tracking;	// G=0x355ddb81; converted property
- (id)initWithImage:(id)image;	// 0x355ddac1
- (void)beginTracking:(id)tracking;	// 0x355ddc79
- (void)dealloc;	// 0x355ddb55
// converted property getter: - (BOOL)isTracking;	// 0x355ddb81
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x355ddb09
- (void)setLockView:(id)view;	// 0x355ddb45
- (BOOL)shouldBeginTracking:(id)tracking;	// 0x355ddb91
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x355ddd91
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x355de189
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x355de079
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x355dddcd
@end
