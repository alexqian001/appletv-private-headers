/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVComposition.h"

@class AVMutableCompositionInternal, NSArray;

@interface AVMutableComposition : AVComposition {
	AVMutableCompositionInternal *_mutablePriv;	// 12 = 0xc
}
@property(assign, nonatomic) CGSize naturalSize;	// G=0x302cde39; S=0x302cde65; 
@property(readonly, assign, nonatomic) NSArray *tracks;	// G=0x302cde0d; 
+ (id)composition;	// 0x302cdcf5
- (id)_initWithComposition:(id)composition;	// 0x302cdd39
- (id)_newTrackForIndex:(long)index;	// 0x302cddd1
- (void)_notifyAllTracksThatSegmentsDidChange;	// 0x302ce845
- (id)addMutableTrackWithMediaType:(id)mediaType preferredTrackID:(int)anId;	// 0x302ce5a1
- (id)copyWithZone:(NSZone *)zone;	// 0x302cdd99
- (void)insertEmptyTimeRange:(XXStruct_yD8eWC)range;	// 0x302ce095
- (BOOL)insertTimeRange:(XXStruct_yD8eWC)range ofAsset:(id)asset atTime:(XXStruct_pwHToB)time error:(id *)error;	// 0x302cde75
- (id)mutableTrackCompatibleWithTrack:(id)track;	// 0x302ce775
// declared property getter: - (CGSize)naturalSize;	// 0x302cde39
- (void)removeTimeRange:(XXStruct_yD8eWC)range;	// 0x302ce239
- (void)removeTrack:(id)track;	// 0x302ce6a1
- (void)scaleTimeRange:(XXStruct_yD8eWC)range toDuration:(XXStruct_pwHToB)duration;	// 0x302ce3dd
// declared property setter: - (void)setNaturalSize:(CGSize)size;	// 0x302cde65
// declared property getter: - (id)tracks;	// 0x302cde0d
@end

