/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSCondition.h> // Unknown library

@class NSMutableArray;

@interface AVRunLoopCondition : NSCondition {
	NSMutableArray *_runLoopStateList;	// 8 = 0x8
}
- (id)init;	// 0x326ed269
- (void)_signalRunLoopWithState:(id)state;	// 0x326ed6f1
- (BOOL)_waitInMode:(id)mode untilDate:(id)date;	// 0x326ed375
- (void)broadcast;	// 0x326ed649
- (void)dealloc;	// 0x326ed2cd
- (void)signal;	// 0x326ed5f1
- (void)wait;	// 0x326ed319
- (void)waitInMode:(id)mode;	// 0x326ed345
- (BOOL)waitUntilDate:(id)date;	// 0x326ed32d
- (BOOL)waitUntilDate:(id)date inMode:(id)mode;	// 0x326ed359
@end
