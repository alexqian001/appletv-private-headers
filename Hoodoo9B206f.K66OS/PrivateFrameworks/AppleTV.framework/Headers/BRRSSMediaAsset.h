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
@property(assign) BOOL needsVolumeFading;	// G=0x366675c5; S=0x366675d5; converted property
+ (id)mediaAssetFromMediaProvider:(id)mediaProvider;	// 0x36667311
- (id)coverArt;	// 0x366673a5
- (id)description;	// 0x3666759d
- (long)duration;	// 0x36667351
- (BOOL)hasVideoContent;	// 0x3666755d
// converted property getter: - (BOOL)needsVolumeFading;	// 0x366675c5
// converted property setter: - (void)setNeedsVolumeFading:(BOOL)fading;	// 0x366675d5
@end
