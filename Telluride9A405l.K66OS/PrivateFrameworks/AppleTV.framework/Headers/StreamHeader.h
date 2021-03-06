/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class DRMData, IndexData, StreamData, VideoData, AudioData;

__attribute__((visibility("hidden")))
@interface StreamHeader : NSObject {
@private
	StreamData *streamData;	// 4 = 0x4
	VideoData *videoData;	// 8 = 0x8
	AudioData *audioData;	// 12 = 0xc
	IndexData *indexData;	// 16 = 0x10
	DRMData *playReady_;	// 20 = 0x14
	DRMData *netflixKeyEnvelope_;	// 24 = 0x18
}
@property(retain, nonatomic) DRMData *netflixKeyEnvelope;	// G=0x3607ad80; S=0x3607b170; @synthesize=netflixKeyEnvelope_
@property(retain, nonatomic) DRMData *playReady;	// G=0x3607ad94; S=0x3607b13c; @synthesize=playReady_
- (id)initWithBuffer:(id)buffer;	// 0x3607ada8
- (void)dealloc;	// 0x3607b1a4
- (id)getAudioData;	// 0x3607ad30
- (id)getIndexData;	// 0x3607ad6c
- (id)getNetflixKeyEnvelope;	// 0x3607ad58
- (id)getPlayReady;	// 0x3607ad44
- (id)getStreamData;	// 0x3607ad08
- (id)getVideoData;	// 0x3607ad1c
// declared property getter: - (id)netflixKeyEnvelope;	// 0x3607ad80
// declared property getter: - (id)playReady;	// 0x3607ad94
// declared property setter: - (void)setNetflixKeyEnvelope:(id)envelope;	// 0x3607b170
// declared property setter: - (void)setPlayReady:(id)ready;	// 0x3607b13c
@end

