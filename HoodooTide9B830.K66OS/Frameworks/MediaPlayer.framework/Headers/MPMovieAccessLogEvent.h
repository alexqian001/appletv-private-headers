/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "MediaPlayer-Structs.h"

@class NSString, NSDate;

@interface MPMovieAccessLogEvent : NSObject <NSCopying> {
@private
	MPMovieAccessLogEventInternal _internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSString *URI;	// G=0x346331b9; 
@property(assign, nonatomic) MPMovieAccessLogEventInternal _internal;	// G=0x34633339; S=0x3463334d; @synthesize
@property(readonly, assign, nonatomic) double durationWatched;	// G=0x34633279; 
@property(readonly, assign, nonatomic) double indicatedBitrate;	// G=0x346332f9; 
@property(readonly, assign, nonatomic) long long numberOfBytesTransferred;	// G=0x346332b9; 
@property(readonly, assign, nonatomic) int numberOfDroppedVideoFrames;	// G=0x34633319; 
@property(readonly, assign, nonatomic) unsigned numberOfSegmentsDownloaded;	// G=0x34633179; 
@property(readonly, assign, nonatomic) unsigned numberOfServerAddressChanges;	// G=0x346331f9; 
@property(readonly, assign, nonatomic) int numberOfStalls;	// G=0x34633299; 
@property(readonly, assign, nonatomic) double observedBitrate;	// G=0x346332d9; 
@property(readonly, assign, nonatomic) NSString *playbackSessionID;	// G=0x34633219; 
@property(readonly, assign, nonatomic) NSDate *playbackStartDate;	// G=0x34633199; 
@property(readonly, assign, nonatomic) double playbackStartOffset;	// G=0x34633239; 
@property(readonly, assign, nonatomic) double segmentsDownloadedDuration;	// G=0x34633259; 
@property(readonly, assign, nonatomic) NSString *serverAddress;	// G=0x346331d9; 
// declared property getter: - (id)URI;	// 0x346331b9
- (id)_initWithAVItemAccessLogEvent:(id)avitemAccessLogEvent;	// 0x346330c9
// declared property getter: - (MPMovieAccessLogEventInternal)_internal;	// 0x34633339
- (id)copyWithZone:(NSZone *)zone;	// 0x34633169
- (void)dealloc;	// 0x3463311d
// declared property getter: - (double)durationWatched;	// 0x34633279
// declared property getter: - (double)indicatedBitrate;	// 0x346332f9
// declared property getter: - (long long)numberOfBytesTransferred;	// 0x346332b9
// declared property getter: - (int)numberOfDroppedVideoFrames;	// 0x34633319
// declared property getter: - (unsigned)numberOfSegmentsDownloaded;	// 0x34633179
// declared property getter: - (unsigned)numberOfServerAddressChanges;	// 0x346331f9
// declared property getter: - (int)numberOfStalls;	// 0x34633299
// declared property getter: - (double)observedBitrate;	// 0x346332d9
// declared property getter: - (id)playbackSessionID;	// 0x34633219
// declared property getter: - (id)playbackStartDate;	// 0x34633199
// declared property getter: - (double)playbackStartOffset;	// 0x34633239
// declared property getter: - (double)segmentsDownloadedDuration;	// 0x34633259
// declared property getter: - (id)serverAddress;	// 0x346331d9
// declared property setter: - (void)set_internal:(MPMovieAccessLogEventInternal)internal;	// 0x3463334d
@end
