/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <PBCodable.h> // Unknown library


@interface GEOVisibleTileSet : PBCodable {
	XXStruct_VrsxJB *_tileKeys;	// 4 = 0x4
	unsigned _tileKeysCount;	// 8 = 0x8
	unsigned _tileKeysSpace;	// 12 = 0xc
	unsigned _identifier;	// 16 = 0x10
	int _style;	// 20 = 0x14
}
@property(assign, nonatomic) unsigned identifier;	// G=0x345b7e11; S=0x345b7e21; @synthesize=_identifier
@property(assign, nonatomic) int style;	// G=0x345b7df1; S=0x345b7e01; @synthesize=_style
@property(readonly, assign, nonatomic) XXStruct_VrsxJB *tileKeys;	// G=0x345b73d9; 
@property(readonly, assign, nonatomic) unsigned tileKeysCount;	// G=0x345b73c9; 
- (void)addTileKey:(XXStruct_VrsxJB)key;	// 0x345b7425
- (void)clearTileKeys;	// 0x345b73e9
- (void)copyTo:(id)to;	// 0x345b7be9
- (void)dealloc;	// 0x345b7389
- (id)description;	// 0x345b7631
- (id)dictionaryRepresentation;	// 0x345b76a1
- (unsigned)hash;	// 0x345b7d79
// declared property getter: - (unsigned)identifier;	// 0x345b7e11
- (BOOL)isEqual:(id)equal;	// 0x345b7cdd
- (BOOL)readFrom:(id)from;	// 0x345b7ac1
// declared property setter: - (void)setIdentifier:(unsigned)identifier;	// 0x345b7e21
// declared property setter: - (void)setStyle:(int)style;	// 0x345b7e01
- (void)setTileKeys:(XXStruct_VrsxJB *)keys count:(unsigned)count;	// 0x345b75e1
// declared property getter: - (int)style;	// 0x345b7df1
- (XXStruct_VrsxJB)tileKeyAtIndex:(unsigned)index;	// 0x345b7521
// declared property getter: - (XXStruct_VrsxJB *)tileKeys;	// 0x345b73d9
// declared property getter: - (unsigned)tileKeysCount;	// 0x345b73c9
- (void)writeTo:(id)to;	// 0x345b7acd
@end

