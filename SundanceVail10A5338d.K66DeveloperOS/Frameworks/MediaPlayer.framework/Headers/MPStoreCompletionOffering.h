/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "MediaPlayer-Structs.h"

@class NSDictionary, MPMediaQuery, MPStoreCollectionCompletionOffering, MPStoreLinkCompletionOffering;

@interface MPStoreCompletionOffering : NSObject <NSCopying> {
	int _preferredStoreOfferVariant;	// 4 = 0x4
	NSDictionary *_responseCollectionDictionary;	// 8 = 0x8
	MPMediaQuery *_localItemsQuery;	// 12 = 0xc
	MPStoreCollectionCompletionOffering *_purchaseableCollectionOffering;	// 16 = 0x10
	MPStoreLinkCompletionOffering *_linkOffering;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) MPStoreLinkCompletionOffering *linkOffering;	// G=0x3421231d; @synthesize=_linkOffering
@property(assign, nonatomic) int preferredStoreOfferVariant;	// G=0x342122fd; S=0x34212295; 
@property(retain, nonatomic) MPStoreCollectionCompletionOffering *purchaseableCollectionOffering;	// G=0x34212251; S=0x3421230d; @synthesize=_purchaseableCollectionOffering
+ (int)defaultOfferVariant;	// 0x34211ab1
+ (id)offeringWithCollectionResponseDictionary:(id)collectionResponseDictionary localItemsQuery:(id)query;	// 0x34211ac1
+ (void)setDefaultOfferVariant:(int)variant;	// 0x34211aa1
- (id)initWithCollectionResponseDictionary:(id)collectionResponseDictionary localItemsQuery:(id)query;	// 0x34211b01
- (id)_getPurchaseableCollectionOffering;	// 0x34211e85
- (id)copyByInvalidatingCalculatedContent;	// 0x34211e55
- (id)copyWithZone:(NSZone *)zone;	// 0x34211d9d
- (void)dealloc;	// 0x34211d11
// declared property getter: - (id)linkOffering;	// 0x3421231d
// declared property getter: - (int)preferredStoreOfferVariant;	// 0x342122fd
// declared property getter: - (id)purchaseableCollectionOffering;	// 0x34212251
// declared property setter: - (void)setPreferredStoreOfferVariant:(int)variant;	// 0x34212295
// declared property setter: - (void)setPurchaseableCollectionOffering:(id)offering;	// 0x3421230d
@end
