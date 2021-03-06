/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "StoreServices-Structs.h"
#import "SSCoding.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class NSDictionary, SSItemOffer, NSArray, SSURLRequestProperties, NSMutableDictionary, SSItem, NSNumber, NSString;

@interface SSPurchase : NSObject <SSCoding, NSCoding, NSCopying> {
@private
	NSNumber *_accountIdentifier;	// 4 = 0x4
	NSString *_buyParameters;	// 8 = 0x8
	NSMutableDictionary *_downloadProperties;	// 12 = 0xc
	NSArray *_filteredAssetTypes;	// 16 = 0x10
	SSItem *_item;	// 20 = 0x14
	SSItemOffer *_itemOffer;	// 24 = 0x18
	long long _placeholderDownloadIdentifier;	// 28 = 0x1c
	SSURLRequestProperties *_requestProperties;	// 36 = 0x24
	NSString *_uniqueIdentifier;	// 40 = 0x28
}
@property(retain, nonatomic) NSNumber *accountIdentifier;	// G=0x33c845f9; S=0x33c84609; @synthesize=_accountIdentifier
@property(copy, nonatomic) NSString *buyParameters;	// G=0x33c8462d; S=0x33c8463d; @synthesize=_buyParameters
@property(retain) id downloadMetadata;	// G=0x33c845b5; S=0x33c845b9; converted property
@property(copy, nonatomic) NSDictionary *downloadProperties;	// G=0x33c83861; S=0x33c838d1; 
@property(copy, nonatomic) NSArray *filteredAssetTypes;	// G=0x33c84661; S=0x33c84671; @synthesize=_filteredAssetTypes
@property(readonly, assign, nonatomic) SSItem *item;	// G=0x33c84695; @synthesize=_item
@property(readonly, assign, nonatomic) SSItemOffer *itemOffer;	// G=0x33c846a5; @synthesize=_itemOffer
@property(assign, nonatomic) long long placeholderDownloadIdentifier;	// G=0x33c846b5; S=0x33c846cd; @synthesize=_placeholderDownloadIdentifier
@property(copy, nonatomic) SSURLRequestProperties *requestProperties;	// G=0x33c83899; S=0x33c83915; 
@property(readonly, assign, nonatomic) NSString *uniqueIdentifier;	// G=0x33c8457d; 
+ (id)purchaseWithBuyParameters:(id)buyParameters;	// 0x33c837c1
- (id)init;	// 0x33c83561
- (id)initWithCoder:(id)coder;	// 0x33c83a2d
- (id)initWithItem:(id)item;	// 0x33c83571
- (id)initWithItem:(id)item offer:(id)offer;	// 0x33c835a5
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x33c842c9
- (id)initWithXPCEncoding:(void *)xpcencoding;	// 0x33c84541
- (id)_initSSPurchase;	// 0x33c834f5
// declared property getter: - (id)accountIdentifier;	// 0x33c845f9
// declared property getter: - (id)buyParameters;	// 0x33c8462d
- (id)copyPropertyListEncoding;	// 0x33c840b5
- (id)copyWithZone:(NSZone *)zone;	// 0x33c83f59
- (void *)copyXPCEncoding;	// 0x33c84295
- (void)dealloc;	// 0x33c836e9
// converted property getter: - (id)downloadMetadata;	// 0x33c845b5
// declared property getter: - (id)downloadProperties;	// 0x33c83861
- (void)encodeWithCoder:(id)coder;	// 0x33c83d55
// declared property getter: - (id)filteredAssetTypes;	// 0x33c84661
// declared property getter: - (id)item;	// 0x33c84695
// declared property getter: - (id)itemOffer;	// 0x33c846a5
// declared property getter: - (long long)placeholderDownloadIdentifier;	// 0x33c846b5
// declared property getter: - (id)requestProperties;	// 0x33c83899
// declared property setter: - (void)setAccountIdentifier:(id)identifier;	// 0x33c84609
// declared property setter: - (void)setBuyParameters:(id)parameters;	// 0x33c8463d
// converted property setter: - (void)setDownloadMetadata:(id)metadata;	// 0x33c845b9
// declared property setter: - (void)setDownloadProperties:(id)properties;	// 0x33c838d1
// declared property setter: - (void)setFilteredAssetTypes:(id)types;	// 0x33c84671
// declared property setter: - (void)setPlaceholderDownloadIdentifier:(long long)identifier;	// 0x33c846cd
// declared property setter: - (void)setRequestProperties:(id)properties;	// 0x33c83915
- (void)setValue:(id)value forDownloadProperty:(id)downloadProperty;	// 0x33c83959
// declared property getter: - (id)uniqueIdentifier;	// 0x33c8457d
- (id)valueForDownloadProperty:(id)downloadProperty;	// 0x33c839e5
@end

