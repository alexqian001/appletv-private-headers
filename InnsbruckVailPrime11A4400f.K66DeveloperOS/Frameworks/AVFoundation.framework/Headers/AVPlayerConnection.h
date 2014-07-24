/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library

@class AVPlayer, AVPlayerItem, AVWeakReference, NSError;
@protocol OS_dispatch_queue;

@interface AVPlayerConnection : NSObject {
	AVWeakReference *_playerReference;	// 4 = 0x4
	AVWeakReference *_playerItemReference;	// 8 = 0x8
	BOOL _shouldAppendItem;	// 12 = 0xc
	int _status;	// 16 = 0x10
	NSError *_error;	// 20 = 0x14
	AVPlayerItem *_previousPlayerItem;	// 24 = 0x18
}
@property(readonly, assign, nonatomic) NSError *error;	// G=0x2c286861; 
@property(readonly, assign, nonatomic) AVPlayer *player;	// G=0x2c286455; 
@property(readonly, assign, nonatomic) AVPlayerItem *playerItem;	// G=0x2c286475; 
@property(readonly, assign, nonatomic) NSObject<OS_dispatch_queue> *serializationQueue;	// G=0x2c286871; 
@property(readonly, assign, nonatomic) int status;	// G=0x2c286851; 
- (id)initWithWeakReferenceToPlayer:(id)player weakReferenceToPlayerItem:(id)playerItem shouldAppendItem:(BOOL)item;	// 0x2c28622d
- (BOOL)addItemToPlayQueue;	// 0x2c286495
- (void)dealloc;	// 0x2c28636d
- (id)description;	// 0x2c2863d1
// declared property getter: - (id)error;	// 0x2c286861
// declared property getter: - (id)player;	// 0x2c286455
// declared property getter: - (id)playerItem;	// 0x2c286475
- (void)removeItemFromPlayQueue;	// 0x2c286715
// declared property getter: - (id)serializationQueue;	// 0x2c286871
// declared property getter: - (int)status;	// 0x2c286851
@end
