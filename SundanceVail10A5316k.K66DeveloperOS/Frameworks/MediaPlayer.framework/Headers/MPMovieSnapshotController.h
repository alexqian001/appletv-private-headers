/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "MediaPlayer-Structs.h"

@class MPAVController, CALayer, NSMutableArray, MPVideoView;

@interface MPMovieSnapshotController : NSObject {
	MPVideoView *_videoView;	// 4 = 0x4
	MPAVController *_player;	// 8 = 0x8
	CALayer *_layer;	// 12 = 0xc
	NSMutableArray *_pendingSnapshots;	// 16 = 0x10
	unsigned _expectingTimeJump : 1;	// 20 = 0x14
	unsigned _pendingRestore : 1;	// 20 = 0x14
	float _originalTime;	// 24 = 0x18
}
@property(assign, nonatomic) MPAVController *player;	// G=0x34812775; S=0x34812785; @synthesize=_player
- (id)_currentSnapshot;	// 0x34812481
- (void)_finishSnapshot:(id)snapshot;	// 0x348124c5
- (void)_restoreOriginalTime;	// 0x3481262d
- (void)_startNextSnapshot;	// 0x348126b1
- (void)_takeSnapshot:(id)snapshot;	// 0x34812735
- (void)_timeDidJump:(id)_time;	// 0x348123b1
- (void)cancel;	// 0x34812121
- (void)dealloc;	// 0x34812059
// declared property getter: - (id)player;	// 0x34812775
- (void)scheduleSnapshotWithSize:(CGSize)size orientation:(int)orientation time:(float)time delegate:(id)delegate;	// 0x348121a1
- (void)setLayer:(id)layer;	// 0x3481235d
// declared property setter: - (void)setPlayer:(id)player;	// 0x34812785
- (void)setVideoView:(id)view;	// 0x348123a1
@end
