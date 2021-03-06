/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class MRImageProvider;

@interface MREffectFlipupBackground : MREffect {
	MRImageProvider *mGradientProvider;	// 112 = 0x70
}
- (id)initWithEffectID:(id)effectID;	// 0x321de5b9
- (void)_cleanup;	// 0x321de6c1
- (void)_unload;	// 0x321de9e1
- (BOOL)isLoadedForTime:(double)time;	// 0x321de759
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x321de77d
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x321de9dd
- (void)setAttributes:(id)attributes;	// 0x321de7e9
- (void)setPixelSize:(CGSize)size;	// 0x321de701
@end

