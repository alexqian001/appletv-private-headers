/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDate, NSMutableArray, ATVRCButtonPatternSet, NSTimer;

__attribute__((visibility("hidden")))
@interface ATVRCCapture : XXUnknownSuperclass {
	int _captureState;	// 4 = 0x4
	NSMutableArray *_capturedEvents;	// 8 = 0x8
	ATVRCButtonPatternSet *_workingPatternSet;	// 12 = 0xc
	NSTimer *_discontinuityTrigger;	// 16 = 0x10
	NSDate *_captureStartTime;	// 20 = 0x14
}
@property(readonly, assign) int captureState;	// G=0x207639; converted property
@property(readonly, retain) ATVRCButtonPatternSet *workingPatternSet;	// G=0x207649; converted property
- (id)init;	// 0x207409
- (void)_clearDiscontinuityTrigger;	// 0x207ab9
- (void)_discontinuityTrigger:(id)trigger;	// 0x207aed
- (void)_firstCommandEventReceived;	// 0x207781
- (BOOL)_identifyCommandPattern;	// 0x207c19
- (void)_mainCaptureDoneTrigger:(id)trigger;	// 0x2078c1
- (double)_maxIntervalBetweenEvents;	// 0x207dc9
- (void)_resetDiscontinuityTrigger;	// 0x207a41
- (void)_setCaptureState:(int)state;	// 0x2076f1
- (void)addEvent:(id)event;	// 0x207541
- (double)captureProgress;	// 0x207659
// converted property getter: - (int)captureState;	// 0x207639
- (void)dealloc;	// 0x207499
- (void)reset;	// 0x2075cd
- (void)startCapture;	// 0x207511
// converted property getter: - (id)workingPatternSet;	// 0x207649
@end
