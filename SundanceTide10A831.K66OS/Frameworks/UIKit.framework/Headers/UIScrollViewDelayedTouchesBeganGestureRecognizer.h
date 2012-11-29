/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIGestureRecognizer.h"

@class UIDelayedAction;

__attribute__((visibility("hidden")))
@interface UIScrollViewDelayedTouchesBeganGestureRecognizer : UIGestureRecognizer {
	UIDelayedAction *_touchDelay;	// 56 = 0x38
	CGPoint _startScreenLocation;	// 60 = 0x3c
}
- (void)_resetGestureRecognizer;	// 0x31cf5c0d
- (void)clearTimer;	// 0x31cedc29
- (void)dealloc;	// 0x31d192cd
- (void)sendDelayedTouches;	// 0x31d7c6e5
- (void)sendTouchesShouldBeginForDelayedTouches:(id)sendTouches;	// 0x31cef5ed
- (void)sendTouchesShouldBeginForTouches:(id)sendTouches withEvent:(id)event;	// 0x31d6cd1d
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x31cedae5
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x31d7c21d
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x31cef569
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x31d0e1c9
@end
