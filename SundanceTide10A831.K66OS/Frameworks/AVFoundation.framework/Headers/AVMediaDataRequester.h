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
@property(readonly, assign, nonatomic) id requestBlock;	// G=0x34260d05; @synthesize=_requestBlock
@property(readonly, assign, nonatomic) NSObject<OS_dispatch_queue> *requestQueue;	// G=0x34260cf5; @synthesize=_requestQueue
- (id)init;	// 0x34260a3d
- (id)initWithMediaDataConsumer:(id)mediaDataConsumer requestQueue:(id)queue requestBlock:(id)block;	// 0x34260871
- (void)_requestMediaDataIfReady;	// 0x34260bb9
- (void)dealloc;	// 0x34260a61
- (void)finalize;	// 0x34260aa5
- (void)invalidate;	// 0x34260b65
// declared property getter: - (id)requestBlock;	// 0x34260d05
// declared property getter: - (id)requestQueue;	// 0x34260cf5
- (void)startRequestingMediaData;	// 0x34260ae9
@end

