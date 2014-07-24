/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library

@protocol OS_dispatch_queue;

@interface AVMediaDataRequester : NSObject {
	id _mediaDataConsumer;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_requestQueue;	// 8 = 0x8
	id _requestBlock;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) id requestBlock;	// G=0x2c31571d; @synthesize=_requestBlock
@property(readonly, assign, nonatomic) NSObject<OS_dispatch_queue> *requestQueue;	// G=0x2c31570d; @synthesize=_requestQueue
- (id)init;	// 0x2c315451
- (id)initWithMediaDataConsumer:(id)mediaDataConsumer requestQueue:(id)queue requestBlock:(id)block;	// 0x2c315281
- (void)_requestMediaDataIfReady;	// 0x2c3155cd
- (void)dealloc;	// 0x2c315475
- (void)finalize;	// 0x2c3154b9
- (void)invalidate;	// 0x2c315579
// declared property getter: - (id)requestBlock;	// 0x2c31571d
// declared property getter: - (id)requestQueue;	// 0x2c31570d
- (void)startRequestingMediaData;	// 0x2c3154fd
@end
