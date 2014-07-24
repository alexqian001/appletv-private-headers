/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRXMLMediaAsset.h"

@class ATVImage;

__attribute__((visibility("hidden")))
@interface RUIYTMediaAsset : BRXMLMediaAsset {
	unsigned char _validThumbnailsFound;	// 12 = 0xc
	ATVImage *_smallThumbnailArtImage;	// 16 = 0x10
	BOOL _isFavorite;	// 20 = 0x14
}
@property(assign) BOOL isFavorite;	// G=0x29edc9; S=0x29edb9; converted property
@property(readonly, retain) ATVImage *smallThumbnailArtImage;	// G=0x29ecf1; converted property
+ (id)mediaAssetFromMediaProvider:(id)mediaProvider;	// 0x29e3ed
- (id)initWithMediaProvider:(id)mediaProvider;	// 0x29e43d
- (void).cxx_destruct;	// 0x29edd9
- (void)addThumbnailAttribute:(id)attribute;	// 0x29e505
- (id)authorName;	// 0x29e991
- (id)category;	// 0x29ebb1
- (void)clearSmallCoverArtImage;	// 0x29ed35
- (id)datePublished;	// 0x29eb5d
- (long)duration;	// 0x29e8c5
- (int)grFormat;	// 0x29ec89
// converted property getter: - (BOOL)isFavorite;	// 0x29edc9
- (BOOL)isInappropriate;	// 0x29ec1d
- (id)keywords;	// 0x29eb09
- (id)mediaType;	// 0x29e4e9
- (void)numberOfLikes:(int *)likes numberOfDislikes:(int *)dislikes;	// 0x29e92d
- (id)objectForKey:(id)key;	// 0x29ed4d
// converted property setter: - (void)setIsFavorite:(BOOL)favorite;	// 0x29edb9
// converted property getter: - (id)smallThumbnailArtImage;	// 0x29ecf1
- (id)viewCount;	// 0x29e9e5
@end
