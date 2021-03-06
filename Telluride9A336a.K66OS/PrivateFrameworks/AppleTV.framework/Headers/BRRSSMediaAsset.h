/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRXMLMediaAsset.h"


@interface BRRSSMediaAsset : BRXMLMediaAsset {
@private
	BOOL _needsVolumeFading;	// 12 = 0xc
}
@property(assign) BOOL needsVolumeFading;	// G=0x33a603a5; S=0x33a603b5; converted property
+ (id)mediaAssetFromMediaProvider:(id)mediaProvider;	// 0x33a600f1
- (id)coverArt;	// 0x33a60185
- (id)description;	// 0x33a6037d
- (long)duration;	// 0x33a60131
- (BOOL)hasVideoContent;	// 0x33a6033d
// converted property getter: - (BOOL)needsVolumeFading;	// 0x33a603a5
// converted property setter: - (void)setNeedsVolumeFading:(BOOL)fading;	// 0x33a603b5
@end

