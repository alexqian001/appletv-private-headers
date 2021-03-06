/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import "AddressBook-Structs.h"
#import </libobjc.A.h>


@interface ABVCardRecord : NSObject {
	void *_record;	// 4 = 0x4
	CFArrayRef _properties;	// 8 = 0x8
}
@property(readonly, assign) void *record;	// G=0x2c9cc56d; converted property
+ (void)clearPrivateFields;	// 0x2c9cc979
+ (BOOL)includeABClipRectInVCardPhotos;	// 0x2c9ccad5
+ (BOOL)includeImageURIInVCards;	// 0x2c9ccad1
+ (BOOL)includeNotesInVCards;	// 0x2c9cca31
+ (BOOL)includePhotosInVCards;	// 0x2c9ccb19
+ (BOOL)includeREVInVCards;	// 0x2c9ccaa1
+ (BOOL)privateVCardEnabled;	// 0x2c9cc819
+ (void)setIncludeNotesInVCards:(BOOL)vcards;	// 0x2c9cc9f1
+ (void)setIncludePhotosInVCards:(BOOL)vcards;	// 0x2c9ccad9
+ (void)setIncludeREVInVCards:(BOOL)vcards;	// 0x2c9cca61
+ (void)setPrivateVCardEnabled:(BOOL)enabled;	// 0x2c9cc83d
+ (void)setVCardField:(id)field isPrivate:(BOOL)aPrivate;	// 0x2c9cc87d
+ (CFArrayRef)supportedProperties;	// 0x2c9cc57d
+ (BOOL)vcardFieldisPrivate:(id)aPrivate;	// 0x2c9cc995
- (id)init;	// 0x2c9cc2f5
- (id)initWithRecord:(void *)record;	// 0x2c9cc289
- (id)initWithVCardRepresentation:(id)vcardRepresentation;	// 0x2c9cc35d
- (id)ISO8061StringFromDate:(id)date;	// 0x2c9cd0f5
- (id)ISO8061StringFromDateTime:(id)dateTime;	// 0x2c9cd11d
- (id)_21vCardRepresentationAsData;	// 0x2c9cef35
- (void)_appendPropValue:(id)value forExternalPropKey:(id)externalPropKey toOutString:(id)outString usingDelimiter:(id)delimiter;	// 0x2c9d0529
- (id)_copyGroupVCardRepresentationAsStringIncludeExternalProperties:(BOOL)properties;	// 0x2c9d27ad
- (id)_copyVCardRepresentationAsStringIncludeExternalProperties:(BOOL)properties withPhoto:(id)photo extraPhotoParameters:(id)parameters;	// 0x2c9d0689
- (id)_fullName;	// 0x2c9cedc5
- (id)_fullNameIncludingAuxiliaryElements:(BOOL)elements;	// 0x2c9ceb05
- (BOOL)_isCompany;	// 0x2c9ced85
- (id)_prodID;	// 0x2c9d0439
- (id)_realCompositeName;	// 0x2c9cee75
- (BOOL)_showField:(unsigned)field;	// 0x2c9ccb49
- (BOOL)_showField:(unsigned)field identifier:(int)identifier;	// 0x2c9ccb4d
- (BOOL)_usesArrayForExternalPropKey:(id)externalPropKey;	// 0x2c9d04f9
- (id)_vCardKeyForAddressLabel:(id)addressLabel vCard3:(BOOL)a3;	// 0x2c9ccb51
- (CFStringRef)_vCardKeyForEmailLabel:(id)emailLabel;	// 0x2c9ccf29
- (CFStringRef)_vCardKeyForGenericLabel:(id)genericLabel;	// 0x2c9ccc09
- (id)_vCardKeysForPhoneLabel:(id)phoneLabel;	// 0x2c9ccc71
- (id)alternateName;	// 0x2c9cedd9
- (void)appendLabel:(id)label toVCardRep:(id)vcardRep inGroup:(id)group;	// 0x2c9ccf91
- (void *)copyValueForProperty:(unsigned)property;	// 0x2c9cd1b9
- (id)dataForInstantMessageProperties;	// 0x2c9ce219
- (id)dataForSocialProfileProperty:(void *)socialProfileProperty groupCount:(int *)count;	// 0x2c9cdde1
- (void)dealloc;	// 0x2c9cc495
- (id)encodedDataForValue:(id)value charsetName:(id *)name;	// 0x2c9ce9e5
- (id)encodedLineForValue:(id)value;	// 0x2c9ce695
- (id)imageData;	// 0x2c9d03d9
- (id)newISO8061StringFromDate:(id)date;	// 0x2c9cd00d
- (id)propertyLineForGenericABProperty21:(unsigned)genericABProperty21 vCardProperty:(id)property;	// 0x2c9cdba9
- (id)propertyLineForGenericABProperty:(unsigned)genericABProperty vCardProperty:(id)property is21:(BOOL)a21 groupCount:(int *)count;	// 0x2c9cd1f5
- (id)propertyLineForIMHandles:(id)imhandles labels:(id)labels vCardProperty:(id)property;	// 0x2c9ce091
- (id)propertyLineForIMPPProperty:(id)imppproperty groupCount:(int *)count;	// 0x2c9cd81d
- (id)propertyLineForInstantMessageHandles:(id)instantMessageHandles groupCount:(int *)count;	// 0x2c9cd461
// converted property getter: - (void *)record;	// 0x2c9cc56d
- (BOOL)setValue:(void *)value forProperty:(unsigned)property;	// 0x2c9cc791
- (BOOL)useThumbnailImageFormatIfAvailable;	// 0x2c9d03d5
- (id)vCardRepresentationForMode:(int)mode;	// 0x2c9cc4f1
- (void *)valueForProperty:(unsigned)property;	// 0x2c9cd1cd
@end

