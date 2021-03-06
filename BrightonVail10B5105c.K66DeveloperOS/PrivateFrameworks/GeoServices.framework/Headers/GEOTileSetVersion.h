/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <PBCodable.h> // Unknown library


@interface GEOTileSetVersion : PBCodable {
	XXStruct_1aFH4A *_availableTiles;	// 4 = 0x4
	unsigned _availableTilesCount;	// 8 = 0x8
	unsigned _availableTilesSpace;	// 12 = 0xc
	XXStruct_2ta5gB *_genericTiles;	// 16 = 0x10
	unsigned _genericTilesCount;	// 20 = 0x14
	unsigned _genericTilesSpace;	// 24 = 0x18
	unsigned _identifier;	// 28 = 0x1c
	unsigned _supportedLanguagesVersion;	// 32 = 0x20
	unsigned _timeToLiveSeconds;	// 36 = 0x24
	XXStruct_$8RKkA _has;	// 40 = 0x28
}
@property(readonly, assign, nonatomic) XXStruct_1aFH4A *availableTiles;	// G=0x33950209; 
@property(readonly, assign, nonatomic) unsigned availableTilesCount;	// G=0x339501f9; 
@property(readonly, assign, nonatomic) XXStruct_2ta5gB *genericTiles;	// G=0x339504e5; 
@property(readonly, assign, nonatomic) unsigned genericTilesCount;	// G=0x339504d5; 
@property(assign, nonatomic) BOOL hasSupportedLanguagesVersion;	// G=0x33950781; S=0x33950765; 
@property(assign, nonatomic) BOOL hasTimeToLiveSeconds;	// G=0x339504c1; S=0x339504a1; 
@property(assign, nonatomic) unsigned identifier;	// G=0x339514ed; S=0x339514fd; @synthesize=_identifier
@property(assign, nonatomic) unsigned supportedLanguagesVersion;	// G=0x3395151d; S=0x3395073d; @synthesize=_supportedLanguagesVersion
@property(assign, nonatomic) unsigned timeToLiveSeconds;	// G=0x3395150d; S=0x33950479; @synthesize=_timeToLiveSeconds
- (void)addAvailableTiles:(XXStruct_1aFH4A)tiles;	// 0x33950255
- (void)addGenericTile:(XXStruct_2ta5gB)tile;	// 0x33950531
// declared property getter: - (XXStruct_1aFH4A *)availableTiles;	// 0x33950209
- (XXStruct_1aFH4A)availableTilesAtIndex:(unsigned)index;	// 0x33950361
// declared property getter: - (unsigned)availableTilesCount;	// 0x339501f9
- (void)clearAvailableTiles;	// 0x33950219
- (void)clearGenericTiles;	// 0x339504f5
- (void)copyTo:(id)to;	// 0x339510dd
- (void)dealloc;	// 0x339501a5
- (id)description;	// 0x33950795
- (id)dictionaryRepresentation;	// 0x33950805
- (XXStruct_2ta5gB)genericTileAtIndex:(unsigned)index;	// 0x3395062d
// declared property getter: - (XXStruct_2ta5gB *)genericTiles;	// 0x339504e5
// declared property getter: - (unsigned)genericTilesCount;	// 0x339504d5
// declared property getter: - (BOOL)hasSupportedLanguagesVersion;	// 0x33950781
// declared property getter: - (BOOL)hasTimeToLiveSeconds;	// 0x339504c1
- (unsigned)hash;	// 0x3395140d
// declared property getter: - (unsigned)identifier;	// 0x339514ed
- (BOOL)isEqual:(id)equal;	// 0x339512d5
- (BOOL)readFrom:(id)from;	// 0x33950ec1
- (void)setAvailableTiles:(XXStruct_1aFH4A *)tiles count:(unsigned)count;	// 0x33950429
- (void)setGenericTiles:(XXStruct_2ta5gB *)tiles count:(unsigned)count;	// 0x339506ed
// declared property setter: - (void)setHasSupportedLanguagesVersion:(BOOL)version;	// 0x33950765
// declared property setter: - (void)setHasTimeToLiveSeconds:(BOOL)liveSeconds;	// 0x339504a1
// declared property setter: - (void)setIdentifier:(unsigned)identifier;	// 0x339514fd
// declared property setter: - (void)setSupportedLanguagesVersion:(unsigned)version;	// 0x3395073d
// declared property setter: - (void)setTimeToLiveSeconds:(unsigned)liveSeconds;	// 0x33950479
// declared property getter: - (unsigned)supportedLanguagesVersion;	// 0x3395151d
// declared property getter: - (unsigned)timeToLiveSeconds;	// 0x3395150d
- (void)writeTo:(id)to;	// 0x33950ecd
@end

