/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "SSCoding.h"

@class NSArray, NSMutableDictionary;

@interface SSPersonalizeOffersResponse : NSObject <SSCoding> {
@private
	NSMutableDictionary *_actionDisplayNames;	// 4 = 0x4
	NSMutableDictionary *_actionParameters;	// 8 = 0x8
	NSArray *_items;	// 12 = 0xc
	NSMutableDictionary *_priceDisplayNames;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) NSArray *personalizedItems;	// G=0x30527ed1; 
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x30528175
- (id)initWithXPCEncoding:(void *)xpcencoding;	// 0x30528241
- (void)_setPersonalizedItems:(id)items;	// 0x30528131
- (id)actionDisplayNameForItemType:(id)itemType;	// 0x30527e89
- (id)actionParametersForItemIdentifier:(id)itemIdentifier;	// 0x30527f51
- (id)copyPropertyListEncoding;	// 0x3052827d
- (void *)copyXPCEncoding;	// 0x30528321
- (void)dealloc;	// 0x30527e01
// declared property getter: - (id)personalizedItems;	// 0x30527ed1
- (id)priceDisplayForItemType:(id)itemType;	// 0x30527f09
- (void)setActionDisplayNameString:(id)string forItemType:(id)itemType;	// 0x30527f99
- (void)setActionParameters:(id)parameters forItemIdentifier:(id)itemIdentifier;	// 0x30528021
- (void)setPriceDisplayString:(id)string forItemType:(id)itemType;	// 0x305280a9
@end
