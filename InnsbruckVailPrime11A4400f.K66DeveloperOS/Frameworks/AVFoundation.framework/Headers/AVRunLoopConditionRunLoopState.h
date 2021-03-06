/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library


@interface AVRunLoopConditionRunLoopState : NSObject {
	CFRunLoopRef _runLoop;	// 4 = 0x4
	CFRunLoopSourceRef _signalSource;	// 8 = 0x8
	BOOL _signaled;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) CFRunLoopRef runLoop;	// G=0x2c2ecb91; @synthesize=_runLoop
@property(assign, nonatomic) CFRunLoopSourceRef signalSource;	// G=0x2c2ecba1; S=0x2c2ecbb1; @synthesize=_signalSource
@property(assign, nonatomic) BOOL signaled;	// G=0x2c2ecbc1; S=0x2c2ecbd1; @synthesize=_signaled
+ (id)runLoopStateWithRunLoop:(CFRunLoopRef)runLoop;	// 0x2c2eca71
- (id)initWithRunLoop:(CFRunLoopRef)runLoop;	// 0x2c2ecabd
- (void)dealloc;	// 0x2c2ecb35
// declared property getter: - (CFRunLoopRef)runLoop;	// 0x2c2ecb91
// declared property setter: - (void)setSignalSource:(CFRunLoopSourceRef)source;	// 0x2c2ecbb1
// declared property setter: - (void)setSignaled:(BOOL)signaled;	// 0x2c2ecbd1
// declared property getter: - (CFRunLoopSourceRef)signalSource;	// 0x2c2ecba1
// declared property getter: - (BOOL)signaled;	// 0x2c2ecbc1
@end

