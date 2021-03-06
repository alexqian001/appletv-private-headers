/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <NSObject.h> // Unknown library

@class CALayer, MPAVController, NSMutableArray, MPVideoView;

@interface MPMovieSnapshotController : NSObject {
	MPVideoView *_videoView;	// 4 = 0x4
	MPAVController *_player;	// 8 = 0x8
	CALayer *_layer;	// 12 = 0xc
	NSMutableArray *_pendingSnapshots;	// 16 = 0x10
	unsigned _expectingTimeJump : 1;	// 20 = 0x14
	unsigned _pendingRestore : 1;	// 20 = 0x14
	float _originalTime;	// 24 = 0x18
}
@property(assign, nonatomic) MPAVController *player;	// G=0x31d51995; S=0x31d519a5; @synthesize=_player
- (id)_currentSnapshot;	// 0x31d516a1
- (void)_finishSnapshot:(id)snapshot;	// 0x31d516e5
- (void)_restoreOriginalTime;	// 0x31d5184d
- (void)_startNextSnapshot;	// 0x31d518d1
- (void)_takeSnapshot:(id)snapshot;	// 0x31d51955
- (void)_timeDidJump:(id)_time;	// 0x31d515d1
- (void)cancel;	// 0x31d51341
- (void)dealloc;	// 0x31d51279
// declared property getter: - (id)player;	// 0x31d51995
- (void)scheduleSnapshotWithSize:(CGSize)size orientation:(int)orientation time:(float)time delegate:(id)delegate;	// 0x31d513c1
- (void)setLayer:(id)layer;	// 0x31d5157d
// declared property setter: - (void)setPlayer:(id)player;	// 0x31d519a5
- (void)setVideoView:(id)view;	// 0x31d515c1
@end

