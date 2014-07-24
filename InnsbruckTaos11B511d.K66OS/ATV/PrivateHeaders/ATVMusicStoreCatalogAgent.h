/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "ATVCatalogAgent.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ATVMusicStoreCatalogAgent : XXUnknownSuperclass <ATVCatalogAgent> {
}
+ (void)_augmentStoreOffers:(id)offers itemID:(id)anId purchaseOfferParams:(id)params isCMS:(BOOL)cms addAllOffers:(BOOL)offers5;	// 0x1d9965
+ (id)_backgroundGradientImageForItem:(id)item;	// 0x1dd521
+ (id)_backgroundImageForItem:(id)item;	// 0x1dd501
+ (id)_backgroundImageForItem:(id)item imageName:(id)name;	// 0x1dd541
+ (CGSize)_backgroundImageSizeForItem:(id)item inset:(float *)inset;	// 0x1dd3a9
+ (id)_catalogPageControlForItem:(id)item;	// 0x1da6a1
+ (BOOL)_checkForPurchases:(id)purchases metadata:(id)metadata userInfo:(id)info;	// 0x1d95c5
+ (id)_collectionControlsForPageItem:(id)pageItem requestedBy:(id)by dividerSeparated:(BOOL)separated;	// 0x1dbb59
+ (id)_controlForItem:(id)item;	// 0x1da11d
+ (void)_controlForMediaItem:(id)mediaItem;	// 0x1da59d
+ (id)_controlForRequestParameters:(id)requestParameters identifier:(id)identifier merchant:(id)merchant;	// 0x1d9f75
+ (id)_controlForURL:(id)url identifier:(id)identifier merchant:(id)merchant;	// 0x1da0b9
+ (id)_createItemTypeMap;	// 0x1d635d
+ (id)_firstControlOfType:(Class)type inArray:(id)array;	// 0x1dce01
+ (id)_formattedPageContentCountString:(id)string;	// 0x1dc739
+ (id)_headerControlsForPageItem:(id)pageItem;	// 0x1dc071
+ (id)_listPageForItem:(id)item;	// 0x1dac61
+ (id)_mediaTypeForStoreLink:(id)storeLink;	// 0x1d8fe1
+ (id)_mediaTypeForStoreMediaCollectionType:(id)storeMediaCollectionType;	// 0x1d8e71
+ (id)_mediaTypeForStoreMediaType:(id)storeMediaType;	// 0x1d8cb9
+ (id)_moreInfoHeaderControlsForPageItem:(id)pageItem;	// 0x1dc45d
+ (void)_playEventMediaAsset:(id)asset swapCatalogApplianceController:(BOOL)controller;	// 0x1d9339
+ (void)_playVideoClip:(id)clip;	// 0x1d9049
+ (id)_roomDescriptionControlsForPageItem:(id)pageItem;	// 0x1dcec9
+ (id)_roomPageContainerForItem:(id)item withScroller:(id)scroller;	// 0x1db06d
+ (id)_roomPageForItem:(id)item;	// 0x1dae29
+ (id)_scrollerControlsFromHeaderControls:(id)headerControls collectionControls:(id)controls;	// 0x1dc6a9
+ (id)_setupScroller;	// 0x1da989
+ (id)_supplementPageForItem:(id)item;	// 0x1dabb9
+ (id)_tabbedPageForItem:(id)item;	// 0x1db49d
+ (id)allLeafItemsForItem:(id)item;	// 0x1d74ad
+ (void)augmentPageDictionaryWithPurchases:(id)purchases purchaseCheckResponse:(id)response addAllOffers:(BOOL)offers;	// 0x1d8321
+ (id)catalogHandler;	// 0x1d5ba1
+ (id)checkForPurchasesRequestsForPageDictionary:(id)pageDictionary;	// 0x1d7b41
+ (id)configureRelatedControlsFromControl:(id)control style:(int)style;	// 0x1d78dd
+ (id)controlForItem:(id)item;	// 0x1d634d
+ (void)controlForObject:(id)object;	// 0x1d5ff1
+ (id)controlForObject:(id)object merchant:(id)merchant;	// 0x1d6031
+ (id)coverArtForItem:(id)item;	// 0x1d6ff1
+ (id)coverArtURLForItem:(id)item featured:(BOOL)featured thumbnail:(BOOL)thumbnail;	// 0x1d71f9
+ (id)episodeArtURLForItem:(id)item;	// 0x1d72e9
+ (void)initialize;	// 0x1d58a1
+ (BOOL)isItemFeatured:(id)featured;	// 0x1d739d
+ (BOOL)isItemOrdered:(id)ordered;	// 0x1d73c5
+ (BOOL)isTemplateParameterSet:(id)set forItem:(id)item;	// 0x1d73ed
+ (long)itemIDForItem:(id)item;	// 0x1d6e61
+ (int)itemType:(id)type;	// 0x1d65f1
+ (id)mediaAssetForStoreOffer:(id)storeOffer;	// 0x1d6809
+ (id)mediaTypeForItem:(id)item;	// 0x1d6765
+ (void)playItem:(id)item;	// 0x1d77f9
+ (void)playStoreItem:(id)item;	// 0x1d767d
+ (void)processResponseDocument:(id)document;	// 0x1d8835
+ (void)registerClass:(Class)aClass withTemplateName:(id)templateName;	// 0x1d5c11
+ (void)sendPingForItem:(id)item;	// 0x1d5d49
+ (BOOL)showAllTitles:(id)titles;	// 0x1d734d
+ (BOOL)showTitleAndSubtitle:(id)subtitle;	// 0x1d7375
+ (BOOL)storeVersionIsCompatibileForPageDictionary:(id)pageDictionary redirectURL:(id *)url;	// 0x1d5eed
@end
