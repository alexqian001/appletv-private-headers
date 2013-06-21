/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library
#import "GeoServices-Structs.h"

@class GEOStructuredAddress, NSMutableArray;

@interface GEOAddress : PBCodable {
	NSMutableArray *_formattedAddressLines;	// 4 = 0x4
	int _formattedAddressType;	// 8 = 0x8
	GEOStructuredAddress *_structuredAddress;	// 12 = 0xc
	XXStruct_ec15KC _has;	// 16 = 0x10
}
@property(retain, nonatomic) NSMutableArray *formattedAddressLines;	// G=0x33f6c0e9; S=0x33f702c1; @synthesize=_formattedAddressLines
@property(assign, nonatomic) int formattedAddressType;	// G=0x33f88cf1; S=0x33f88d19; @synthesize=_formattedAddressType
@property(assign, nonatomic) BOOL hasFormattedAddressType;	// G=0x33f88d5d; S=0x33f88d41; 
@property(readonly, assign, nonatomic) BOOL hasStructuredAddress;	// G=0x33f88cd9; 
@property(retain, nonatomic) GEOStructuredAddress *structuredAddress;	// G=0x33f72a1d; S=0x33f702d1; @synthesize=_structuredAddress
- (id)initWithAddressString:(id)addressString;	// 0x33f7b9b9
- (void)addFormattedAddressLine:(id)line;	// 0x33f6b939
- (id)addressDictionary;	// 0x33f7ba49
- (void)clearFormattedAddressLines;	// 0x33f88c79
- (void)copyTo:(id)to;	// 0x33f88edd
- (void)dealloc;	// 0x33f70269
- (id)description;	// 0x33f88d71
- (id)dictionaryRepresentation;	// 0x33f88de1
- (id)formattedAddressLineAtIndex:(unsigned)index;	// 0x33f88cb9
// declared property getter: - (id)formattedAddressLines;	// 0x33f6c0e9
- (unsigned)formattedAddressLinesCount;	// 0x33f88c99
// declared property getter: - (int)formattedAddressType;	// 0x33f88cf1
// declared property getter: - (BOOL)hasFormattedAddressType;	// 0x33f88d5d
// declared property getter: - (BOOL)hasStructuredAddress;	// 0x33f88cd9
- (unsigned)hash;	// 0x33f890b9
- (BOOL)isEqual:(id)equal;	// 0x33f88fe1
- (BOOL)readFrom:(id)from;	// 0x33f88ed1
// declared property setter: - (void)setFormattedAddressLines:(id)lines;	// 0x33f702c1
// declared property setter: - (void)setFormattedAddressType:(int)type;	// 0x33f88d19
// declared property setter: - (void)setHasFormattedAddressType:(BOOL)type;	// 0x33f88d41
// declared property setter: - (void)setStructuredAddress:(id)address;	// 0x33f702d1
// declared property getter: - (id)structuredAddress;	// 0x33f72a1d
- (void)writeTo:(id)to;	// 0x33f715f5
@end
