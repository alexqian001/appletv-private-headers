/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVMediaFileType, AVWeakReference, NSString;

@interface AVFigAssetWriterTrack : NSObject {
@private
	AVWeakReference *_weakReference;	// 4 = 0x4
	OpaqueFigAssetWriter *_figAssetWriter;	// 8 = 0x8
	int _trackID;	// 12 = 0xc
	NSString *_mediaType;	// 16 = 0x10
	AVMediaFileType *_mediaFileType;	// 20 = 0x14
	dispatch_queue_s *_aboveHighWaterLevelQueue;	// 24 = 0x18
	BOOL _aboveHighWaterLevel;	// 28 = 0x1c
	XXStruct_pwHToB _sampleBufferCoalescingInterval;	// 32 = 0x20
}
@property(readonly, assign, getter=isAboveHighWaterLevel) BOOL aboveHighWaterLevel;	// G=0x34754829; 
@property(readonly, assign, nonatomic) OpaqueFigAssetWriter *figAssetWriter;	// G=0x3475264d; @synthesize=_figAssetWriter
@property(readonly, assign, nonatomic) AVMediaFileType *mediaFileType;	// G=0x3475261d; @synthesize=_mediaFileType
@property(readonly, assign, nonatomic) NSString *mediaType;	// G=0x3475262d; @synthesize=_mediaType
@property(readonly, assign, nonatomic) CVPixelBufferPoolRef pixelBufferPool;	// G=0x34756679; 
@property(assign, nonatomic) XXStruct_pwHToB sampleBufferCoalescingInterval;	// G=0x3475265d; S=0x34752679; @synthesize=_sampleBufferCoalescingInterval
@property(readonly, assign, nonatomic) int trackID;	// G=0x3475263d; @synthesize=_trackID
+ (id)assetWriterTrackWithFigAssetWriter:(OpaqueFigAssetWriter *)figAssetWriter mediaType:(id)type mediaFileType:(id)type3 outputSettings:(id)settings sourcePixelBufferAttributes:(id)attributes error:(id *)error;	// 0x34752819
- (id)init;	// 0x347527f1
- (id)initWithFigAssetWriter:(OpaqueFigAssetWriter *)figAssetWriter mediaType:(id)type mediaFileType:(id)type3 outputSettings:(id)settings sourcePixelBufferAttributes:(id)attributes error:(id *)error;	// 0x347560d9
- (int)_attachToFigAssetWriterUsingOutputSettings:(id)figAssetWriterUsingOutputSettings sourcePixelBufferAttributes:(id)attributes error:(id *)error;	// 0x34756ba1
- (void)_figAssetWriterDidDropBelowLowWaterLevelForTrackID:(int)_figAssetWriter;	// 0x347527c5
- (void)_refreshAboveHighWaterLevel;	// 0x34757179
- (BOOL)addPixelBuffer:(CVBufferRef)buffer atPresentationTime:(XXStruct_pwHToB)presentationTime error:(id *)error;	// 0x34756925
- (BOOL)addSampleBuffer:(opaqueCMSampleBuffer *)buffer error:(id *)error;	// 0x34756a55
- (void)dealloc;	// 0x34755fc9
// declared property getter: - (OpaqueFigAssetWriter *)figAssetWriter;	// 0x3475264d
- (void)finalize;	// 0x34755ef9
// declared property getter: - (BOOL)isAboveHighWaterLevel;	// 0x34754829
- (BOOL)markEndOfDataReturningError:(id *)dataReturningError;	// 0x347568c1
// declared property getter: - (id)mediaFileType;	// 0x3475261d
// declared property getter: - (id)mediaType;	// 0x3475262d
// declared property getter: - (CVPixelBufferPoolRef)pixelBufferPool;	// 0x34756679
- (void)release;	// 0x34753535
- (id)retain;	// 0x3475357d
// declared property getter: - (XXStruct_pwHToB)sampleBufferCoalescingInterval;	// 0x3475265d
- (void)setFigMetadata:(id)metadata;	// 0x347566f1
- (void)setFigTrackMatrix:(id)matrix;	// 0x34756639
- (void)setMediaTimeScale:(int)scale;	// 0x347565d1
// declared property setter: - (void)setSampleBufferCoalescingInterval:(XXStruct_pwHToB)interval;	// 0x34752679
// declared property getter: - (int)trackID;	// 0x3475263d
@end
