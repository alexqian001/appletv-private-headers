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
@property(retain, nonatomic) NSString *attributeKey;	// G=0x33fde7c9; S=0x33fde7d9; @synthesize=_attributeKey
@property(retain, nonatomic) NSString *attributeValue;	// G=0x33fde7e9; S=0x33fde7f9; @synthesize=_attributeValue
// declared property getter: - (id)attributeKey;	// 0x33fde7c9
// declared property getter: - (id)attributeValue;	// 0x33fde7e9
- (void)copyTo:(id)to;	// 0x33fde691
- (void)dealloc;	// 0x33fde369
- (id)description;	// 0x33fde3c1
- (id)dictionaryRepresentation;	// 0x33fde431
- (unsigned)hash;	// 0x33fde789
- (BOOL)isEqual:(id)equal;	// 0x33fde6e9
- (BOOL)readFrom:(id)from;	// 0x33fde63d
// declared property setter: - (void)setAttributeKey:(id)key;	// 0x33fde7d9
// declared property setter: - (void)setAttributeValue:(id)value;	// 0x33fde7f9
- (void)writeTo:(id)to;	// 0x33fde649
@end

