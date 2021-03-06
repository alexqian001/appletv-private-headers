/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVAssetTrack.h"

@class NSArray, AVCompositionTrackInternal;

@interface AVCompositionTrack : AVAssetTrack {
	AVCompositionTrackInternal *_priv;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSArray *segments;	// G=0x317622c1; 
- (id)_initWithAsset:(id)asset trackID:(int)anId trackIndex:(long)index;	// 0x31762065
- (OpaqueFigMutableComposition *)_mutableComposition;	// 0x317622a1
- (void)dealloc;	// 0x31762125
- (id)description;	// 0x317621f5
- (void)finalize;	// 0x3176218d
// declared property getter: - (id)segments;	// 0x317622c1
@end

