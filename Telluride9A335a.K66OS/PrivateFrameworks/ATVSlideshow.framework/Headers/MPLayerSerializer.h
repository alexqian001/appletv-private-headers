/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MPLayer.h"

@class MCContainerSerializer;

@interface MPLayerSerializer : MPLayer {
	MCContainerSerializer *_layerSerializer;	// 48 = 0x30
}
- (id)container;	// 0x31ac2f95
- (void)dealloc;	// 0x31ac2365
- (id)description;	// 0x31ac22b5
- (void)finalize;	// 0x31ac2325
- (void)insertEffectContainers:(id)containers atIndex:(int)index;	// 0x31ac23d1
- (void)moveEffectContainersFromIndices:(id)indices toIndex:(int)index;	// 0x31ac2ca9
- (void)removeEffectContainersAtIndices:(id)indices;	// 0x31ac296d
- (void)setAudioPlaylist:(id)playlist;	// 0x31ac2e2d
- (void)setLayerSerializer:(id)serializer;	// 0x31ac2fa5
@end
