/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MPLayer.h"

@class NSArray, MCContainerParallelizer;

@interface MPLayerAnimatedSet : MPLayer {
	NSArray *_animatedSets;	// 48 = 0x30
	MCContainerParallelizer *_layerParallelizer;	// 52 = 0x34
}
@property(retain) NSArray *animatedSets;	// G=0x31ab0211; S=0x31ab0221; converted property
- (id)init;	// 0x31aafee9
- (id)initWithCoder:(id)coder;	// 0x31aaffad
// converted property getter: - (id)animatedSets;	// 0x31ab0211
- (void)cleanup;	// 0x31ab0c35
- (id)container;	// 0x31ab0c25
- (void)dealloc;	// 0x31ab0189
- (id)description;	// 0x31ab00dd
- (void)encodeWithCoder:(id)coder;	// 0x31aaff4d
- (void)finalize;	// 0x31ab0149
- (void)insertEffectContainers:(id)containers atIndex:(int)index;	// 0x31ab042d
- (void)moveEffectContainersFromIndices:(id)indices toIndex:(int)index;	// 0x31ab0a09
- (void)removeEffectContainersAtIndices:(id)indices;	// 0x31ab07ad
- (void)resetStartTimes;	// 0x31ab0cfd
// converted property setter: - (void)setAnimatedSets:(id)sets;	// 0x31ab0221
- (void)setAudioPlaylist:(id)playlist;	// 0x31ab0abd
- (void)setLayerParallelizer:(id)parallelizer;	// 0x31ab0ebd
@end
