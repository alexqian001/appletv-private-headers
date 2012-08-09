/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class MRImageProvider;

@interface MREffectVignettingOverlay : MREffect {
	MRImageProvider *mVignetteProvider;	// 116 = 0x74
}
- (id)initWithEffectID:(id)effectID;	// 0x3629d549
- (void)_cleanup;	// 0x3629d64d
- (void)_unload;	// 0x3629d6e9
- (BOOL)isLoadedForTime:(double)time;	// 0x3629d6dd
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3629d6e1
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3629d6e5
- (void)setPixelSize:(CGSize)size;	// 0x3629d689
@end
