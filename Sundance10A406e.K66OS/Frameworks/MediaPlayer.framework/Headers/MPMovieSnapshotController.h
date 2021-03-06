/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, MPAVController, MPVideoView, CALayer;

@interface MPMovieSnapshotController : NSObject {
	MPVideoView *_videoView;	// 4 = 0x4
	MPAVController *_player;	// 8 = 0x8
	CALayer *_layer;	// 12 = 0xc
	NSMutableArray *_pendingSnapshots;	// 16 = 0x10
	unsigned _expectingTimeJump : 1;	// 20 = 0x14
	unsigned _pendingRestore : 1;	// 20 = 0x14
	float _originalTime;	// 24 = 0x18
}
@property(assign, nonatomic) MPAVController *player;	// G=0x35cacbcd; S=0x35cacbdd; @synthesize=_player
- (id)_currentSnapshot;	// 0x35cac8d9
- (void)_finishSnapshot:(id)snapshot;	// 0x35cac91d
- (void)_restoreOriginalTime;	// 0x35caca85
- (void)_startNextSnapshot;	// 0x35cacb09
- (void)_takeSnapshot:(id)snapshot;	// 0x35cacb8d
- (void)_timeDidJump:(id)_time;	// 0x35cac809
- (void)cancel;	// 0x35cac579
- (void)dealloc;	// 0x35cac4b1
// declared property getter: - (id)player;	// 0x35cacbcd
- (void)scheduleSnapshotWithSize:(CGSize)size orientation:(int)orientation time:(float)time delegate:(id)delegate;	// 0x35cac5f9
- (void)setLayer:(id)layer;	// 0x35cac7b5
// declared property setter: - (void)setPlayer:(id)player;	// 0x35cacbdd
- (void)setVideoView:(id)view;	// 0x35cac7f9
@end

