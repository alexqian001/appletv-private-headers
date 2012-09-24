/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class NSString, NSDate;

@interface MPMovieAccessLogEvent : NSObject <NSCopying> {
	MPMovieAccessLogEventInternal _internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSString *URI;	// G=0x35cb48f5; 
@property(assign, nonatomic) MPMovieAccessLogEventInternal _internal;	// G=0x35cb4a75; S=0x35cb4a89; @synthesize
@property(readonly, assign, nonatomic) double durationWatched;	// G=0x35cb49b5; 
@property(readonly, assign, nonatomic) double indicatedBitrate;	// G=0x35cb4a35; 
@property(readonly, assign, nonatomic) long long numberOfBytesTransferred;	// G=0x35cb49f5; 
@property(readonly, assign, nonatomic) int numberOfDroppedVideoFrames;	// G=0x35cb4a55; 
@property(readonly, assign, nonatomic) unsigned numberOfSegmentsDownloaded;	// G=0x35cb48b5; 
@property(readonly, assign, nonatomic) unsigned numberOfServerAddressChanges;	// G=0x35cb4935; 
@property(readonly, assign, nonatomic) int numberOfStalls;	// G=0x35cb49d5; 
@property(readonly, assign, nonatomic) double observedBitrate;	// G=0x35cb4a15; 
@property(readonly, assign, nonatomic) NSString *playbackSessionID;	// G=0x35cb4955; 
@property(readonly, assign, nonatomic) NSDate *playbackStartDate;	// G=0x35cb48d5; 
@property(readonly, assign, nonatomic) double playbackStartOffset;	// G=0x35cb4975; 
@property(readonly, assign, nonatomic) double segmentsDownloadedDuration;	// G=0x35cb4995; 
@property(readonly, assign, nonatomic) NSString *serverAddress;	// G=0x35cb4915; 
// declared property getter: - (id)URI;	// 0x35cb48f5
- (id)_initWithAVItemAccessLogEvent:(id)avitemAccessLogEvent;	// 0x35cb4805
// declared property getter: - (MPMovieAccessLogEventInternal)_internal;	// 0x35cb4a75
- (id)copyWithZone:(NSZone *)zone;	// 0x35cb48a5
- (void)dealloc;	// 0x35cb4859
// declared property getter: - (double)durationWatched;	// 0x35cb49b5
// declared property getter: - (double)indicatedBitrate;	// 0x35cb4a35
// declared property getter: - (long long)numberOfBytesTransferred;	// 0x35cb49f5
// declared property getter: - (int)numberOfDroppedVideoFrames;	// 0x35cb4a55
// declared property getter: - (unsigned)numberOfSegmentsDownloaded;	// 0x35cb48b5
// declared property getter: - (unsigned)numberOfServerAddressChanges;	// 0x35cb4935
// declared property getter: - (int)numberOfStalls;	// 0x35cb49d5
// declared property getter: - (double)observedBitrate;	// 0x35cb4a15
// declared property getter: - (id)playbackSessionID;	// 0x35cb4955
// declared property getter: - (id)playbackStartDate;	// 0x35cb48d5
// declared property getter: - (double)playbackStartOffset;	// 0x35cb4975
// declared property getter: - (double)segmentsDownloadedDuration;	// 0x35cb4995
// declared property getter: - (id)serverAddress;	// 0x35cb4915
// declared property setter: - (void)set_internal:(MPMovieAccessLogEventInternal)internal;	// 0x35cb4a89
@end
