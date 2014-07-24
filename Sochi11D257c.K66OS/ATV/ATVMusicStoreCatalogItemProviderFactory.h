/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary;
@protocol BRProvider;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreCatalogItemProviderFactory : XXUnknownSuperclass {
	NSDictionary *_catalogItem;	// 4 = 0x4
	NSDictionary *_actionItems;	// 8 = 0x8
	NSDictionary *_dateItems;	// 12 = 0xc
	id<BRProvider> _previewProvider;	// 16 = 0x10
	BOOL _purchased;	// 20 = 0x14
}
@property(readonly, retain) NSDictionary *actionItems;	// G=0x1f7ead; converted property
@property(assign, nonatomic) BOOL purchased;	// G=0x1f8ddd; S=0x1f8ded; @synthesize=_purchased
+ (id)providerFactoryWithCatalogItem:(id)catalogItem;	// 0x1f7d9d
- (id)initWithCatalogItem:(id)catalogItem;	// 0x1f7dd9
- (id)_actionButtonProviders;	// 0x1fa84d
- (void)_addActionItems:(id)items toProviderArray:(id)providerArray;	// 0x1fab39
- (id)_decomposeDateAvailableStoreOffers;	// 0x1f9be9
- (id)_decomposeStoreOffers;	// 0x1f8dfd
- (id)_initWithCatalogItem:(id)catalogItem;	// 0x1f7c9d
- (id)_itemDetailExtrasProvider;	// 0x1fa3e9
- (id)_itemDetailWishListProvider;	// 0x1fa659
- (id)_largestSizeInCollection;	// 0x1f9f49
- (id)_mapActionTypes:(id)types toProviderData:(id)providerData;	// 0x1fa9e9
- (id)_metadataProviderWithAbbreviatedForm:(BOOL)abbreviatedForm;	// 0x1fa0c1
- (id)_providerItemArrayWithActionTypes:(id)actionTypes fromTypeMap:(id)typeMap;	// 0x1fabc5
- (id)_storeOfferMetadataProvider;	// 0x1fa329
- (id)abbreviatedMetadataProvider;	// 0x1f8045
// converted property getter: - (id)actionItems;	// 0x1f7ead
- (id)actionProviders;	// 0x1f8225
- (id)copyrightProvider;	// 0x1f8749
- (id)dateAvailableProvider;	// 0x1f80b9
- (void)dealloc;	// 0x1f7e21
- (id)imageProxy;	// 0x1f7edd
- (id)itemDetailMoreInfoProvider;	// 0x1f8c81
- (id)listProviders;	// 0x1f8835
- (id)metadataProvider;	// 0x1f7ffd
- (id)metadataProviderWithExpandedSummary:(BOOL)expandedSummary;	// 0x1f8011
- (id)moreInfoProvider;	// 0x1f8059
- (id)previewBrowserProvider;	// 0x1f8c7d
// declared property getter: - (BOOL)purchased;	// 0x1f8ddd
- (id)relatedProvider;	// 0x1f8809
- (id)rentalActionProvidersForItem:(id)item;	// 0x1f85f5
// declared property setter: - (void)setPurchased:(BOOL)purchased;	// 0x1f8ded
- (id)storeOffersProvider;	// 0x1f8085
- (id)storeOffersSansPreviewsProvider;	// 0x1f80ed
@end
