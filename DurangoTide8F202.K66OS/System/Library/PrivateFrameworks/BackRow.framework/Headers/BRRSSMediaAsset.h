/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRXMLMediaAsset.h"


@interface BRRSSMediaAsset : BRXMLMediaAsset {
@private
	BOOL _needsVolumeFading;	// 12 = 0xc
}
@property(assign) BOOL needsVolumeFading;	// G=0x328e19ed; S=0x328e19fd; converted property
+ (id)mediaAssetFromMediaProvider:(id)mediaProvider;	// 0x328e1a65
- (id)coverArt;	// 0x328e1add
- (id)description;	// 0x328e1a0d
- (long)duration;	// 0x328e1a9d
- (BOOL)hasVideoContent;	// 0x328e1a31
// converted property getter: - (BOOL)needsVolumeFading;	// 0x328e19ed
// converted property setter: - (void)setNeedsVolumeFading:(BOOL)fading;	// 0x328e19fd
@end

