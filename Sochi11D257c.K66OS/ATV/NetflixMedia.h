/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NetflixNrdObjectProtocol.h"
#import "NetflixNrdObject.h"

@class NetflixNrdObjectCallback;

@interface NetflixMedia : NetflixNrdObject <NetflixNrdObjectProtocol> {
	NetflixNrdObjectCallback *nccpErrorListener_;	// 4 = 0x4
	NetflixNrdObjectCallback *nccpMediaListener_;	// 8 = 0x8
	NetflixNrdObjectCallback *nccpMediaExceptionListener_;	// 12 = 0xc
}
@property(retain, nonatomic) NetflixNrdObjectCallback *nccpErrorListener;	// G=0x5f3361; S=0x5f3371; @synthesize=nccpErrorListener_
@property(retain, nonatomic) NetflixNrdObjectCallback *nccpMediaExceptionListener;	// G=0x5f33a1; S=0x5f33b1; @synthesize=nccpMediaExceptionListener_
@property(retain, nonatomic) NetflixNrdObjectCallback *nccpMediaListener;	// G=0x5f3381; S=0x5f3391; @synthesize=nccpMediaListener_
+ (id)sharedInstance;	// 0x5f26b9
- (id)init;	// 0x5f27a5
- (void)addEventListener:(id)listener name:(id)name;	// 0x5f2be9
- (void)close;	// 0x5f3281
- (void)dealloc;	// 0x5f28fd
- (BOOL)handleEvent:(id)event;	// 0x5f2a21
- (void)handleMediaError:(id)error;	// 0x5f32f1
- (void)handleMediaException:(id)exception;	// 0x5f3329
- (void)handleNccpError:(id)error;	// 0x5f32b9
// declared property getter: - (id)nccpErrorListener;	// 0x5f3361
// declared property getter: - (id)nccpMediaExceptionListener;	// 0x5f33a1
// declared property getter: - (id)nccpMediaListener;	// 0x5f3381
- (void)open:(unsigned)open trackId:(unsigned)anId params:(id)params playbackType:(unsigned)type;	// 0x5f2c79
- (void)pause:(int)pause;	// 0x5f2ff1
- (void)play:(int)play;	// 0x5f2ef9
- (void)play:(int)play audioTrack:(int)track;	// 0x5f2f0d
- (void)removeEventListener:(id)listener name:(id)name;	// 0x5f2c31
- (void)reposition:(int)reposition;	// 0x5f3139
// declared property setter: - (void)setNccpErrorListener:(id)listener;	// 0x5f3371
// declared property setter: - (void)setNccpMediaExceptionListener:(id)listener;	// 0x5f33b1
// declared property setter: - (void)setNccpMediaListener:(id)listener;	// 0x5f3391
- (void)stop:(int)stop;	// 0x5f31dd
- (void)unpause:(int)unpause;	// 0x5f3095
@end
