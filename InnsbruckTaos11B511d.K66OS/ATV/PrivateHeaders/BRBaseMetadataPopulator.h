/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRMetadataPopulator.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface BRBaseMetadataPopulator : XXUnknownSuperclass <BRMetadataPopulator> {
}
- (void)_populateMetadataLabels:(id *)labels andValues:(id *)values forAsset:(id)asset;	// 0x3f1e1d
- (id)axMetadataFromAsset:(id)asset;	// 0x3f182d
- (id)copyrightForAsset:(id)asset;	// 0x3f1b55
- (void)likesRatingForAsset:(id)asset numberOfLikes:(int *)likes numberOfDislikes:(int *)dislikes;	// 0x3f19f1
- (void)populateLayer:(id)layer fromAsset:(id)asset;	// 0x3f1ba9
- (void)populateLongDescriptionLayer:(id)layer fromAsset:(id)asset;	// 0x3f1cfd
- (void)populateMetadataLabels:(id *)labels andValues:(id *)values forAsset:(id)asset;	// 0x3f1b59
- (id)ratingForAsset:(id)asset;	// 0x3f19a9
- (id)summaryForAsset:(id)asset;	// 0x3f1abd
- (id)titleForAsset:(id)asset;	// 0x3f1961
@end
