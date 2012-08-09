/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class NSString, MRImageProvider;

@interface MREffectBackgroundImage : MREffect {
	MRImageProvider *mImageProvider;	// 116 = 0x74
	NSString *mClampingMode;	// 120 = 0x78
}
@property(retain) id assetPath;	// G=0x320be751; S=0x320be779; converted property
- (id)initWithEffectID:(id)effectID;	// 0x320bdbb9
- (void)_cleanup;	// 0x320bde65
- (void)_unload;	// 0x320be79d
// converted property getter: - (id)assetPath;	// 0x320be751
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x320bdf71
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x320bdfe9
// converted property setter: - (void)setAssetPath:(id)path;	// 0x320be779
- (void)setPixelSize:(CGSize)size;	// 0x320bdecd
@end
