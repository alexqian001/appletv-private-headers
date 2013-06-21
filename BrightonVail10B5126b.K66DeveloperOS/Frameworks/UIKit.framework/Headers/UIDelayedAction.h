/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSTimer, NSString;

__attribute__((visibility("hidden")))
@interface UIDelayedAction : NSObject {
	id m_target;	// 4 = 0x4
	SEL m_action;	// 8 = 0x8
	id m_userInfo;	// 12 = 0xc
	double m_delay;	// 16 = 0x10
	NSTimer *m_timer;	// 24 = 0x18
	BOOL m_canceled;	// 28 = 0x1c
	NSString *m_runLoopMode;	// 32 = 0x20
}
@property(readonly, assign) double delay;	// G=0x32c4884d; converted property
@property(retain) id target;	// G=0x32d09f01; S=0x32bec1b9; converted property
@property(readonly, retain) id userInfo;	// G=0x32d09eb1; converted property
- (id)initWithTarget:(id)target action:(SEL)action userInfo:(id)info delay:(double)delay;	// 0x32be9d0d
- (id)initWithTarget:(id)target action:(SEL)action userInfo:(id)info delay:(double)delay mode:(id)mode;	// 0x32be9d51
- (void)cancel;	// 0x32bf82c5
- (void)dealloc;	// 0x32bf8321
// converted property getter: - (double)delay;	// 0x32c4884d
- (BOOL)scheduled;	// 0x32d09ec1
// converted property setter: - (void)setTarget:(id)target;	// 0x32bec1b9
// converted property getter: - (id)target;	// 0x32d09f01
- (void)timerFired:(id)fired;	// 0x32bf8259
- (void)touch;	// 0x32c09de5
- (void)touchWithDelay:(double)delay;	// 0x32be9e39
- (void)unschedule;	// 0x32bf82e5
// converted property getter: - (id)userInfo;	// 0x32d09eb1
@end
