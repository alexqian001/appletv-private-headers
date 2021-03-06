/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVAsset.h"
#import "NSMutableCopying.h"

@class NSArray, AVCompositionInternal;

@interface AVComposition : AVAsset <NSMutableCopying> {
@private
	AVCompositionInternal *_priv;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSArray *tracks;	// G=0x303df351; 
+ (void)initialize;	// 0x303df19d
- (id)init;	// 0x303df44d
- (id)_assetInspector;	// 0x303df3c9
- (long)_createEmptyMutableCompositionIfNeeded;	// 0x303df1e5
- (OpaqueFigFormatReader *)_formatReader;	// 0x303df5f5
- (id)_initWithComposition:(id)composition;	// 0x303df679
- (OpaqueFigMutableComposition *)_mutableComposition;	// 0x303df1a1
- (id)_mutableTracks;	// 0x303dfbc5
- (id)_newTrackForIndex:(long)index;	// 0x303df365
- (void)_setNaturalSize:(CGSize)size;	// 0x303df1bd
- (void)dealloc;	// 0x303df8a5
- (void)finalize;	// 0x303df81d
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x303df399
- (CGSize)naturalSize;	// 0x303df995
// declared property getter: - (id)tracks;	// 0x303df351
@end

