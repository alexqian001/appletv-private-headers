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
- (id)initWithEffectID:(id)effectID;	// 0x33457201
- (void)_cleanup;	// 0x33457305
- (void)_unload;	// 0x334573a1
- (BOOL)isLoadedForTime:(double)time;	// 0x33457395
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33457399
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3345739d
- (void)setPixelSize:(CGSize)size;	// 0x33457341
@end

