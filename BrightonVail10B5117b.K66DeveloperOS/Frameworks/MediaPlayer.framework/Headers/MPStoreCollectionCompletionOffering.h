/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class MPMediaQuery, MPStoreOfferMediaItemCollection, NSArray;

@interface MPStoreCollectionCompletionOffering : NSObject {
	MPMediaQuery *_localItemsQuery;	// 4 = 0x4
	MPStoreOfferMediaItemCollection *_mergedCollection;	// 8 = 0x8
	MPStoreOfferMediaItemCollection *_offeredCollection;	// 12 = 0xc
	int _preferredStoreOfferVariant;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) MPStoreOfferMediaItemCollection *itemsWithCompletionsCollection;	// G=0x31e24cf1; 
@property(readonly, assign, nonatomic) NSArray *localItems;	// G=0x31e24d01; 
@property(readonly, assign, nonatomic) MPStoreOfferMediaItemCollection *mergedCollection;	// G=0x31e24d99; @synthesize=_mergedCollection
@property(readonly, assign, nonatomic) MPStoreOfferMediaItemCollection *offeredCollection;	// G=0x31e24da9; @synthesize=_offeredCollection
@property(readonly, assign, nonatomic) int preferredStoreOfferVariant;	// G=0x31e24db9; @synthesize=_preferredStoreOfferVariant
- (id)initWithOfferedCollection:(id)offeredCollection localItemsQuery:(id)query preferredStoreOfferVariant:(int)variant;	// 0x31e24c2d
- (void)dealloc;	// 0x31e24d21
// declared property getter: - (id)itemsWithCompletionsCollection;	// 0x31e24cf1
// declared property getter: - (id)localItems;	// 0x31e24d01
// declared property getter: - (id)mergedCollection;	// 0x31e24d99
// declared property getter: - (id)offeredCollection;	// 0x31e24da9
// declared property getter: - (int)preferredStoreOfferVariant;	// 0x31e24db9
@end
