/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import </libobjc.A.h>

@class MPAVItem, NSString;

@interface MPArrayQueueItem : NSObject {
	MPAVItem *_item;	// 4 = 0x4
	NSString *_path;	// 8 = 0x8
	double _startTime;	// 12 = 0xc
	double _stopTime;	// 20 = 0x14
	NSString *_videoID;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) MPAVItem *item;	// G=0x2e25882d; @synthesize=_item
@property(copy, nonatomic) NSString *path;	// G=0x2e25883d; S=0x2e258851; @synthesize=_path
@property(assign, nonatomic) double startTime;	// G=0x2e258861; S=0x2e258879; @synthesize=_startTime
@property(assign, nonatomic) double stopTime;	// G=0x2e25888d; S=0x2e2588a5; @synthesize=_stopTime
@property(copy, nonatomic) NSString *videoID;	// G=0x2e2588b9; S=0x2e2588cd; @synthesize=_videoID
- (id)init;	// 0x2e258769
- (id)initWithMPAVItem:(id)mpavitem;	// 0x2e25877d
- (void).cxx_destruct;	// 0x2e2588dd
// declared property getter: - (id)item;	// 0x2e25882d
// declared property getter: - (id)path;	// 0x2e25883d
// declared property setter: - (void)setPath:(id)path;	// 0x2e258851
// declared property setter: - (void)setStartTime:(double)time;	// 0x2e258879
// declared property setter: - (void)setStopTime:(double)time;	// 0x2e2588a5
// declared property setter: - (void)setVideoID:(id)anId;	// 0x2e2588cd
// declared property getter: - (double)startTime;	// 0x2e258861
// declared property getter: - (double)stopTime;	// 0x2e25888d
// declared property getter: - (id)videoID;	// 0x2e2588b9
@end

