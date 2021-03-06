/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPQueueFeeder.h"

@class NSArray;

@interface MPArrayQueueFeeder : MPQueueFeeder {
	NSArray *_queueItems;	// 36 = 0x24
}
@property(readonly, assign, nonatomic) NSArray *items;	// G=0x36c995e9; 
- (id)initWithItems:(id)items;	// 0x36c99261
- (id)copyRawItemAtIndex:(unsigned)index;	// 0x36c992f1
- (void)dealloc;	// 0x36c992a1
- (unsigned)itemCount;	// 0x36c99411
// declared property getter: - (id)items;	// 0x36c995e9
- (id)pathAtIndex:(unsigned)index;	// 0x36c99431
- (id)playbackInfoAtIndex:(unsigned)index;	// 0x36c99469
@end

