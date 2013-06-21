/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVMediaFileType, NSString, AVWeakReference;
@protocol OS_dispatch_queue;

@interface AVFigAssetWriterTrack : NSObject {
	AVWeakReference *_weakReference;	// 4 = 0x4
	OpaqueFigAssetWriter *_figAssetWriter;	// 8 = 0x8
	int _trackID;	// 12 = 0xc
	NSString *_mediaType;	// 16 = 0x10
	AVMediaFileType *_mediaFileType;	// 20 = 0x14
	NSObject<OS_dispatch_queue> *_aboveHighWaterLevelQueue;	// 24 = 0x18
	BOOL _aboveHighWaterLevel;	// 28 = 0x1c
	XXStruct_pwHToB _sampleBufferCoalescingInterval;	// 32 = 0x20
}
@property(readonly, assign, getter=isAboveHighWaterLevel) BOOL aboveHighWaterLevel;	// G=0x3027f4fd; 
@property(readonly, assign, nonatomic) OpaqueFigAssetWriter *figAssetWriter;	// G=0x3027fe19; @synthesize=_figAssetWriter
@property(readonly, assign, nonatomic) AVMediaFileType *mediaFileType;	// G=0x3027fe49; @synthesize=_mediaFileType
@property(readonly, assign, nonatomic) NSString *mediaType;	// G=0x3027fe39; @synthesize=_mediaType
@property(readonly, assign, nonatomic) CVPixelBufferPoolRef pixelBufferPool;	// G=0x3027f2dd; 
@property(assign, nonatomic) XXStruct_pwHToB sampleBufferCoalescingInterval;	// G=0x3027fdb1; S=0x3027fde5; @synthesize=_sampleBufferCoalescingInterval
@property(readonly, assign, nonatomic) int trackID;	// G=0x3027fe29; @synthesize=_trackID
+ (id)assetWriterTrackWithFigAssetWriter:(OpaqueFigAssetWriter *)figAssetWriter mediaType:(id)type mediaFileType:(id)type3 formatSpecification:(id)specification sourcePixelBufferAttributes:(id)attributes error:(id *)error;	// 0x3027eb3d
- (id)init;	// 0x3027ec25
- (id)initWithFigAssetWriter:(OpaqueFigAssetWriter *)figAssetWriter mediaType:(id)type mediaFileType:(id)type3 formatSpecification:(id)specification sourcePixelBufferAttributes:(id)attributes error:(id *)error;	// 0x3027ec4d
- (int)_attachToFigAssetWriterUsingFormatSpecification:(id)figAssetWriterUsingFormatSpecification sourcePixelBufferAttributes:(id)attributes error:(id *)error;	// 0x3027fd2d
- (void)_figAssetWriterDidDropBelowLowWaterLevelForTrackID:(int)_figAssetWriter;	// 0x3027f359
- (void)_refreshAboveHighWaterLevel;	// 0x3027f391
- (BOOL)addPixelBuffer:(CVBufferRef)buffer atPresentationTime:(XXStruct_pwHToB)presentationTime error:(id *)error;	// 0x3027f795
- (BOOL)addSampleBuffer:(opaqueCMSampleBuffer *)buffer error:(id *)error;	// 0x3027f5cd
- (void)dealloc;	// 0x3027f0f5
// declared property getter: - (OpaqueFigAssetWriter *)figAssetWriter;	// 0x3027fe19
- (void)finalize;	// 0x3027f20d
// declared property getter: - (BOOL)isAboveHighWaterLevel;	// 0x3027f4fd
- (BOOL)markEndOfDataReturningError:(id *)dataReturningError;	// 0x3027f8c5
// declared property getter: - (id)mediaFileType;	// 0x3027fe49
// declared property getter: - (id)mediaType;	// 0x3027fe39
// declared property getter: - (CVPixelBufferPoolRef)pixelBufferPool;	// 0x3027f2dd
- (void)prepareToEndSession;	// 0x3027f8c1
// declared property getter: - (XXStruct_pwHToB)sampleBufferCoalescingInterval;	// 0x3027fdb1
- (void)setAlternateGroupID:(short)anId;	// 0x3027fc2d
- (void)setExcludeFromAutoSelection:(BOOL)autoSelection;	// 0x3027fcad
- (void)setExtendedLanguageTag:(id)tag;	// 0x3027fb4d
- (void)setFigDimensions:(id)dimensions;	// 0x3027fa8d
- (void)setFigMetadata:(id)metadata;	// 0x3027f94d
- (void)setFigTrackMatrix:(id)matrix;	// 0x3027f9ad
- (void)setLanguageCode:(id)code;	// 0x3027faed
- (void)setMarksOutputTrackAsEnabled:(BOOL)enabled;	// 0x3027fbad
- (void)setMediaTimeScale:(int)scale;	// 0x3027fa0d
// declared property setter: - (void)setSampleBufferCoalescingInterval:(XXStruct_pwHToB)interval;	// 0x3027fde5
// declared property getter: - (int)trackID;	// 0x3027fe29
@end
