/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVAssetTrackInspector.h"

@class AVWeakReference;

@interface AVPlaybackItemTrackInspector : AVAssetTrackInspector {
	OpaqueFigPlaybackItem *_playbackItem;	// 16 = 0x10
	int _trackID;	// 20 = 0x14
	unsigned long _mediaType;	// 24 = 0x18
	AVWeakReference *_weakReferenceToAsset;	// 28 = 0x1c
}
@property(readonly, assign) int trackID;	// G=0x2c2f9a81; converted property
- (unsigned long)_figMediaType;	// 0x2c2f9a91
- (id)_initWithAsset:(id)asset trackID:(int)anId trackIndex:(long)index;	// 0x2c2f9809
- (OpaqueFigPlaybackItem *)_playbackItem;	// 0x2c2f9afd
- (void *)_valueAsCFTypeForProperty:(CFStringRef)property;	// 0x2c2f9b0d
- (id)asset;	// 0x2c2f9a61
- (void)dealloc;	// 0x2c2f99b9
- (CGSize)dimensions;	// 0x2c2f9c59
- (float)estimatedDataRate;	// 0x2c2f9bf5
- (void)finalize;	// 0x2c2f9a1d
- (id)formatDescriptions;	// 0x2c2f9b6d
- (unsigned)hash;	// 0x2c2f9d95
- (BOOL)isEnabled;	// 0x2c2f9b8d
- (BOOL)isEqual:(id)equal;	// 0x2c2f9ced
- (id)mediaType;	// 0x2c2f9aa1
- (CGSize)naturalSize;	// 0x2c2f9c29
- (CGAffineTransform)preferredTransform;	// 0x2c2f9c89
- (XXStruct_pwHToB)samplePresentationTimeForTrackTime:(XXStruct_pwHToB)trackTime;	// 0x2c2f9cc5
- (XXStruct_yD8eWC)timeRange;	// 0x2c2f9bb5
// converted property getter: - (int)trackID;	// 0x2c2f9a81
@end
