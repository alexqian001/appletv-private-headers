/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRMetadataPopulator.h"


__attribute__((visibility("hidden")))
@interface BRBaseMetadataPopulator : XXUnknownSuperclass <BRMetadataPopulator> {
}
- (void)_populateMetadataLabels:(id *)labels andValues:(id *)values forAsset:(id)asset;	// 0x326a75
- (id)axMetadataFromAsset:(id)asset;	// 0x326511
- (id)copyrightForAsset:(id)asset;	// 0x3267b9
- (void)populateLayer:(id)layer fromAsset:(id)asset;	// 0x32680d
- (void)populateLongDescriptionLayer:(id)layer fromAsset:(id)asset;	// 0x326955
- (void)populateMetadataLabels:(id *)labels andValues:(id *)values forAsset:(id)asset;	// 0x3267bd
- (id)ratingForAsset:(id)asset;	// 0x326691
- (id)starRatingForAsset:(id)asset;	// 0x3266d9
- (id)summaryForAsset:(id)asset;	// 0x326721
- (id)titleForAsset:(id)asset;	// 0x326649
@end
