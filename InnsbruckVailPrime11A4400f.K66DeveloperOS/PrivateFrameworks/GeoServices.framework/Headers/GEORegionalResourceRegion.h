/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface GEORegionalResourceRegion : PBCodable {
	XXStruct_1aFH4A *_tileRanges;	// 4 = 0x4
	unsigned _tileRangesCount;	// 8 = 0x8
	unsigned _tileRangesSpace;	// 12 = 0xc
	NSMutableArray *_attributions;	// 16 = 0x10
	NSMutableArray *_iconChecksums;	// 20 = 0x14
	NSMutableArray *_icons;	// 24 = 0x18
}
@property(retain, nonatomic) NSMutableArray *attributions;	// G=0x30f9794d; S=0x30f9795d; @synthesize=_attributions
@property(retain, nonatomic) NSMutableArray *iconChecksums;	// G=0x30f9796d; S=0x30f9797d; @synthesize=_iconChecksums
@property(retain, nonatomic) NSMutableArray *icons;	// G=0x30f9792d; S=0x30f9793d; @synthesize=_icons
@property(readonly, assign, nonatomic) XXStruct_1aFH4A *tileRanges;	// G=0x30f967b9; 
@property(readonly, assign, nonatomic) unsigned tileRangesCount;	// G=0x30f967a9; 
- (void)addAttribution:(id)attribution;	// 0x30f96b01
- (void)addIcon:(id)icon;	// 0x30f96a35
- (void)addIconChecksum:(id)checksum;	// 0x30f96bcd
- (void)addTileRange:(XXStruct_1aFH4A)range;	// 0x30f96805
- (id)attributionAtIndex:(unsigned)index;	// 0x30f96b8d
// declared property getter: - (id)attributions;	// 0x30f9794d
- (unsigned)attributionsCount;	// 0x30f96b6d
- (void)clearAttributions;	// 0x30f96ae1
- (void)clearIconChecksums;	// 0x30f96bad
- (void)clearIcons;	// 0x30f96a15
- (void)clearTileRanges;	// 0x30f967c9
- (void)copyTo:(id)to;	// 0x30f9757d
- (void)dealloc;	// 0x30f9672d
- (id)description;	// 0x30f96c79
- (id)dictionaryRepresentation;	// 0x30f96ce9
- (unsigned)hash;	// 0x30f9789d
- (id)iconAtIndex:(unsigned)index;	// 0x30f96ac1
- (id)iconChecksumAtIndex:(unsigned)index;	// 0x30f96c59
// declared property getter: - (id)iconChecksums;	// 0x30f9796d
- (unsigned)iconChecksumsCount;	// 0x30f96c39
// declared property getter: - (id)icons;	// 0x30f9792d
- (unsigned)iconsCount;	// 0x30f96aa1
- (BOOL)isEqual:(id)equal;	// 0x30f97795
- (BOOL)readFrom:(id)from;	// 0x30f97241
// declared property setter: - (void)setAttributions:(id)attributions;	// 0x30f9795d
// declared property setter: - (void)setIconChecksums:(id)checksums;	// 0x30f9797d
// declared property setter: - (void)setIcons:(id)icons;	// 0x30f9793d
- (void)setTileRanges:(XXStruct_1aFH4A *)ranges count:(unsigned)count;	// 0x30f969c5
- (XXStruct_1aFH4A)tileRangeAtIndex:(unsigned)index;	// 0x30f96909
// declared property getter: - (XXStruct_1aFH4A *)tileRanges;	// 0x30f967b9
// declared property getter: - (unsigned)tileRangesCount;	// 0x30f967a9
- (void)writeTo:(id)to;	// 0x30f9724d
@end

