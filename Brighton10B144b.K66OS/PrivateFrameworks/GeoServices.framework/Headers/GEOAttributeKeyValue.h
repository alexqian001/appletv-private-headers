/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class NSString;

@interface GEOAttributeKeyValue : PBCodable {
	NSString *_attributeKey;	// 4 = 0x4
	NSString *_attributeValue;	// 8 = 0x8
}
@property(retain, nonatomic) NSString *attributeKey;	// G=0x33fdcaa1; S=0x33fdcab1; @synthesize=_attributeKey
@property(retain, nonatomic) NSString *attributeValue;	// G=0x33fdcac1; S=0x33fdcad1; @synthesize=_attributeValue
// declared property getter: - (id)attributeKey;	// 0x33fdcaa1
// declared property getter: - (id)attributeValue;	// 0x33fdcac1
- (void)copyTo:(id)to;	// 0x33fdc969
- (void)dealloc;	// 0x33fdc641
- (id)description;	// 0x33fdc699
- (id)dictionaryRepresentation;	// 0x33fdc709
- (unsigned)hash;	// 0x33fdca61
- (BOOL)isEqual:(id)equal;	// 0x33fdc9c1
- (BOOL)readFrom:(id)from;	// 0x33fdc915
// declared property setter: - (void)setAttributeKey:(id)key;	// 0x33fdcab1
// declared property setter: - (void)setAttributeValue:(id)value;	// 0x33fdcad1
- (void)writeTo:(id)to;	// 0x33fdc921
@end
