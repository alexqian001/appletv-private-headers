/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIGestureRecognizer.h> // Unknown library
#import "UIGestureRecognizerDelegatePrivate.h"

@class NSMutableSet;

@interface MPGobblerGestureRecognizer : UIGestureRecognizer <UIGestureRecognizerDelegatePrivate> {
	NSMutableSet *_activeTouches;	// 56 = 0x38
}
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x31e55185
- (BOOL)_gestureRecognizer:(id)recognizer shouldBeRequiredToFailByGestureRecognizer:(id)failByGestureRecognizer;	// 0x31e55305
- (BOOL)_gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;	// 0x31e55301
- (BOOL)canBePreventedByGestureRecognizer:(id)recognizer;	// 0x31e55219
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x31e5521d
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x31e55259
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x31e552ad
@end
