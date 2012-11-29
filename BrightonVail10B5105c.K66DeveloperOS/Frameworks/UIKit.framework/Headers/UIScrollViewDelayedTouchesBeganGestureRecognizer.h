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
- (void)_resetGestureRecognizer;	// 0x3465ffad
- (void)clearTimer;	// 0x34657fd1
- (void)dealloc;	// 0x346836f5
- (void)sendDelayedTouches;	// 0x346e6b15
- (void)sendTouchesShouldBeginForDelayedTouches:(id)sendTouches;	// 0x34659995
- (void)sendTouchesShouldBeginForTouches:(id)sendTouches withEvent:(id)event;	// 0x346d714d
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x34657e8d
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x346e664d
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x34659911
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x346785f1
@end
