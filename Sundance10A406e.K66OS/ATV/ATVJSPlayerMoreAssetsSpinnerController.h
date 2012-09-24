/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRTextWithSpinnerController.h"

@class NSTimer;

__attribute__((visibility("hidden")))
@interface ATVJSPlayerMoreAssetsSpinnerController : BRTextWithSpinnerController {
	id _popBlock;	// 120 = 0x78
	double _popInterval;	// 124 = 0x7c
	NSTimer *_popTimer;	// 132 = 0x84
	BOOL _isDiscarded;	// 136 = 0x88
}
- (id)initWithPopBlock:(id)popBlock popInterval:(double)interval;	// 0x170db9
- (void)_timerFired:(id)fired;	// 0x170fd1
- (void)dealloc;	// 0x170e65
- (void)discard;	// 0x170eb1
- (void)wasPopped;	// 0x170f5d
- (void)wasPushed;	// 0x170ef1
@end
