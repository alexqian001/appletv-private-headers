/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObject.h"
#import "SAAceSerializable.h"

@class SALocation, NSDictionary, NSString, NSArray, NSURL, SALocalSearchOperationHours;

@interface SALocalSearchBusiness2 : SADomainObject <SAAceSerializable> {
}
@property(retain, nonatomic) SALocation *address;	// G=0x3425f5f9; S=0x3425f64d; 
@property(copy, nonatomic) NSURL *businessUrl;	// G=0x3425f689; S=0x3425f705; 
@property(copy, nonatomic) NSArray *categories;	// G=0x3425f765; S=0x3425f781; 
@property(copy, nonatomic) NSString *description;	// G=0x3425f7d1; S=0x3425f7ed; 
@property(copy, nonatomic) NSString *extSessionGuid;	// G=0x3425f83d; S=0x3425f859; 
@property(copy, nonatomic) NSDictionary *identifierMap;	// G=0x3425f8a9; S=0x3425f8c5; 
@property(copy, nonatomic) NSString *name;	// G=0x3425f915; S=0x3425f931; 
@property(copy, nonatomic) NSArray *offerLists;	// G=0x3425f981; S=0x3425f9fd; 
@property(retain, nonatomic) SALocalSearchOperationHours *operationHours;	// G=0x3425fa65; S=0x3425fab9; 
@property(copy, nonatomic) NSString *phoneNumber;	// G=0x3425faf5; S=0x3425fb11; 
@property(copy, nonatomic) NSArray *photoFullSize;	// G=0x3425fb61; S=0x3425fc01; 
@property(copy, nonatomic) NSArray *photoList;	// G=0x3425fc81; S=0x3425fcfd; 
@property(copy, nonatomic) NSArray *photoThumbnail;	// G=0x3425fd65; S=0x3425fe05; 
@property(copy, nonatomic) NSArray *reviewList;	// G=0x3425fe85; S=0x3425ff01; 
+ (id)business2;	// 0x3425f569
+ (id)business2WithDictionary:(id)dictionary context:(id)context;	// 0x3425f5ad
// declared property getter: - (id)address;	// 0x3425f5f9
// declared property getter: - (id)businessUrl;	// 0x3425f689
// declared property getter: - (id)categories;	// 0x3425f765
// declared property getter: - (id)description;	// 0x3425f7d1
- (id)encodedClassName;	// 0x3425f55d
// declared property getter: - (id)extSessionGuid;	// 0x3425f83d
- (id)groupIdentifier;	// 0x3425f54d
// declared property getter: - (id)identifierMap;	// 0x3425f8a9
// declared property getter: - (id)name;	// 0x3425f915
// declared property getter: - (id)offerLists;	// 0x3425f981
// declared property getter: - (id)operationHours;	// 0x3425fa65
// declared property getter: - (id)phoneNumber;	// 0x3425faf5
// declared property getter: - (id)photoFullSize;	// 0x3425fb61
// declared property getter: - (id)photoList;	// 0x3425fc81
// declared property getter: - (id)photoThumbnail;	// 0x3425fd65
// declared property getter: - (id)reviewList;	// 0x3425fe85
// declared property setter: - (void)setAddress:(id)address;	// 0x3425f64d
// declared property setter: - (void)setBusinessUrl:(id)url;	// 0x3425f705
// declared property setter: - (void)setCategories:(id)categories;	// 0x3425f781
// declared property setter: - (void)setDescription:(id)description;	// 0x3425f7ed
// declared property setter: - (void)setExtSessionGuid:(id)guid;	// 0x3425f859
// declared property setter: - (void)setIdentifierMap:(id)map;	// 0x3425f8c5
// declared property setter: - (void)setName:(id)name;	// 0x3425f931
// declared property setter: - (void)setOfferLists:(id)lists;	// 0x3425f9fd
// declared property setter: - (void)setOperationHours:(id)hours;	// 0x3425fab9
// declared property setter: - (void)setPhoneNumber:(id)number;	// 0x3425fb11
// declared property setter: - (void)setPhotoFullSize:(id)size;	// 0x3425fc01
// declared property setter: - (void)setPhotoList:(id)list;	// 0x3425fcfd
// declared property setter: - (void)setPhotoThumbnail:(id)thumbnail;	// 0x3425fe05
// declared property setter: - (void)setReviewList:(id)list;	// 0x3425ff01
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x3425ff69
@end
