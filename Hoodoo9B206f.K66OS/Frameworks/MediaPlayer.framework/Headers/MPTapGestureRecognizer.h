/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UIGestureRecognizer.h> // Unknown library

@class UITouch, NSTimer;

@interface MPTapGestureRecognizer : UIGestureRecognizer {
@private
	unsigned _lastTapCount;	// 56 = 0x38
	CGPoint _tapLocation;	// 60 = 0x3c
	UITouch *_trackingTouch;	// 68 = 0x44
	NSTimer *_tapHandleTimer;	// 72 = 0x48
}
@property(assign) unsigned tapCount;	// G=0x30383155; S=0x30383165; @synthesize=_lastTapCount
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x30382bd5
- (void)_delayedHandleTaps:(id)taps;	// 0x30382fe5
- (void)_resetTapTimer;	// 0x30382d01
- (void)_setTapTimerWithDuration:(double)duration;	// 0x30382c1d
- (void)dealloc;	// 0x303830f1
- (CGPoint)locationInView:(id)view;	// 0x30383061
- (void)reset;	// 0x3038307d
// declared property setter: - (void)setTapCount:(unsigned)count;	// 0x30383165
// declared property getter: - (unsigned)tapCount;	// 0x30383155
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x30382d41
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x30382f8d
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x30382e35
@end
