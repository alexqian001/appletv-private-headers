/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSDictionary;

@interface ATVMusicStoreCatalogItemProviderFactory : NSObject {
@private
	NSDictionary *_catalogItem;	// 4 = 0x4
	NSDictionary *_actionItems;	// 8 = 0x8
	NSDictionary *_dateItems;	// 12 = 0xc
}
@property(readonly, retain) NSDictionary *actionItems;	// G=0x340d3b89; converted property
+ (id)providerFactoryWithCatalogItem:(id)catalogItem;	// 0x340d3a25
- (id)initWithCatalogItem:(id)catalogItem;	// 0x340d3a61
- (id)_actionButtonProviders;	// 0x340d5ab9
- (id)_decomposeDateAvailableStoreOffers;	// 0x340d5215
- (id)_decomposeStoreOffers;	// 0x340d4529
- (id)_initWithCatalogItem:(id)catalogItem;	// 0x340d3925
- (id)_itemDetailWishListProvider;	// 0x340d589d
- (id)_largestSizeInCollection;	// 0x340d553d
- (id)_metadataProviderWithAbbreviatedForm:(BOOL)abbreviatedForm;	// 0x340d56a5
- (id)_storeOfferMetadataProvider;	// 0x340d57dd
- (id)abbreviatedMetadataProvider;	// 0x340d3ce5
// converted property getter: - (id)actionItems;	// 0x340d3b89
- (id)actionProviders;	// 0x340d3ec5
- (id)copyrightProvider;	// 0x340d40cd
- (id)dateAvailableProvider;	// 0x340d3d5d
- (void)dealloc;	// 0x340d3b15
- (id)imageProxy;	// 0x340d3bb5
- (id)itemDetailMoreInfoProvider;	// 0x340d43ad
- (id)listProviders;	// 0x340d41b5
- (id)metadataProvider;	// 0x340d3cd1
- (id)moreInfoProvider;	// 0x340d3cf9
- (id)previewBrowserProvider;	// 0x340d43a9
- (id)relatedProvider;	// 0x340d4189
- (id)rentalActionProviders;	// 0x340d4009
- (id)storeOffersProvider;	// 0x340d3d25
- (id)storeOffersSansPreviewsProvider;	// 0x340d3d95
@end
