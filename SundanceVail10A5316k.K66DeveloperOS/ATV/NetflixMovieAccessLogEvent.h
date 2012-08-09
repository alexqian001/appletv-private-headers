/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface NetflixMovieAccessLogEvent : XXUnknownSuperclass {
	double indicatedBitrate_;	// 4 = 0x4
	double observedBitrate_;	// 12 = 0xc
	int numberOfStalls_;	// 20 = 0x14
	long long numberOfBytesTransferred_;	// 24 = 0x18
	double durationWatched_;	// 32 = 0x20
	int numberOfSegmentsDownloaded_;	// 40 = 0x28
	double segmentsDownloadedDuration_;	// 44 = 0x2c
}
@property(assign, nonatomic) double durationWatched;	// G=0x4afc5d; S=0x4afc75; @synthesize=durationWatched_
@property(assign, nonatomic) double indicatedBitrate;	// G=0x4afbb9; S=0x4afbd1; @synthesize=indicatedBitrate_
@property(assign, nonatomic) long long numberOfBytesTransferred;	// G=0x4afc31; S=0x4afc49; @synthesize=numberOfBytesTransferred_
@property(assign, nonatomic) int numberOfSegmentsDownloaded;	// G=0x4afc89; S=0x4afc99; @synthesize=numberOfSegmentsDownloaded_
@property(assign, nonatomic) int numberOfStalls;	// G=0x4afc11; S=0x4afc21; @synthesize=numberOfStalls_
@property(assign, nonatomic) double observedBitrate;	// G=0x4afbe5; S=0x4afbfd; @synthesize=observedBitrate_
@property(assign, nonatomic) double segmentsDownloadedDuration;	// G=0x4afca9; S=0x4afcc1; @synthesize=segmentsDownloadedDuration_
// declared property getter: - (double)durationWatched;	// 0x4afc5d
// declared property getter: - (double)indicatedBitrate;	// 0x4afbb9
// declared property getter: - (long long)numberOfBytesTransferred;	// 0x4afc31
// declared property getter: - (int)numberOfSegmentsDownloaded;	// 0x4afc89
// declared property getter: - (int)numberOfStalls;	// 0x4afc11
// declared property getter: - (double)observedBitrate;	// 0x4afbe5
// declared property getter: - (double)segmentsDownloadedDuration;	// 0x4afca9
// declared property setter: - (void)setDurationWatched:(double)watched;	// 0x4afc75
// declared property setter: - (void)setIndicatedBitrate:(double)bitrate;	// 0x4afbd1
// declared property setter: - (void)setNumberOfBytesTransferred:(long long)bytesTransferred;	// 0x4afc49
// declared property setter: - (void)setNumberOfSegmentsDownloaded:(int)segmentsDownloaded;	// 0x4afc99
// declared property setter: - (void)setNumberOfStalls:(int)stalls;	// 0x4afc21
// declared property setter: - (void)setObservedBitrate:(double)bitrate;	// 0x4afbfd
// declared property setter: - (void)setSegmentsDownloadedDuration:(double)duration;	// 0x4afcc1
@end
