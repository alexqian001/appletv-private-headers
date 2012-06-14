/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UIGestureRecognizer.h> // Unknown library

@class UITouch;

@interface MPSwipeGestureRecognizer : UIGestureRecognizer {
@private
	CGPoint _startLocation;	// 56 = 0x38
	double _startTime;	// 64 = 0x40
	UITouch *_trackingTouch;	// 72 = 0x48
	int _swipeDirection;	// 76 = 0x4c
}
@property(readonly, assign, nonatomic) int swipeDirection;	// G=0x3097bbc5; @synthesize=_swipeDirection
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x3097b7e1
- (void)dealloc;	// 0x3097bb71
- (void)reset;	// 0x3097bb11
// declared property getter: - (int)swipeDirection;	// 0x3097bbc5
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x3097b83d
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x3097bac9
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x3097ba81
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x3097b905
@end
