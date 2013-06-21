/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <NSObject.h> // Unknown library

@class NSTimer, NSString;

@interface IMNetworkAvailability : NSObject {
	NSString *_guid;	// 4 = 0x4
	NSTimer *_timer;	// 8 = 0x8
	void *_context;	// 12 = 0xc
	double _timeout;	// 16 = 0x10
	double _wifiTimeout;	// 24 = 0x18
	double _startTime;	// 32 = 0x20
	unsigned _flags;	// 40 = 0x28
	unsigned _options;	// 44 = 0x2c
	id _completionBlock;	// 48 = 0x30
}
@property(assign, nonatomic) void *context;	// G=0x343a13e9; S=0x343a13f9; @synthesize=_context
- (id)initWithFlags:(unsigned)flags options:(unsigned)options timeout:(double)timeout wifiTimeout:(double)timeout4 completionBlock:(id)block;	// 0x343a01d1
- (id)initWithFlags:(unsigned)flags timeout:(double)timeout wifiTimeout:(double)timeout3 completionBlock:(id)block;	// 0x343a0479
- (void)_cancel;	// 0x343a0589
- (void)_setTimer;	// 0x343a1079
- (void)_timerHit:(id)hit;	// 0x343a06bd
- (void)cancel;	// 0x343a13bd
// declared property getter: - (void *)context;	// 0x343a13e9
- (void)dealloc;	// 0x343a04b1
// declared property setter: - (void)setContext:(void *)context;	// 0x343a13f9
- (void)start;	// 0x343a1311
@end
