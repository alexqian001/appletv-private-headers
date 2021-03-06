/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class GEODownloadMetadata, GEOSupportedTileSets;

@interface GEOSupportedTileSetsDownload : PBCodable {
	GEODownloadMetadata *_metadata;	// 4 = 0x4
	GEOSupportedTileSets *_tileSets;	// 8 = 0x8
}
@property(retain, nonatomic) GEODownloadMetadata *metadata;	// G=0x34540ff1; S=0x34541001; @synthesize=_metadata
@property(retain, nonatomic) GEOSupportedTileSets *tileSets;	// G=0x34540fd1; S=0x34540fe1; @synthesize=_tileSets
- (void)copyTo:(id)to;	// 0x34540e99
- (void)dealloc;	// 0x345409f1
- (id)description;	// 0x34540a49
- (id)dictionaryRepresentation;	// 0x34540ab9
- (unsigned)hash;	// 0x34540f91
- (BOOL)isEqual:(id)equal;	// 0x34540ef1
// declared property getter: - (id)metadata;	// 0x34540ff1
- (BOOL)readFrom:(id)from;	// 0x34540d89
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x34541001
// declared property setter: - (void)setTileSets:(id)sets;	// 0x34540fe1
// declared property getter: - (id)tileSets;	// 0x34540fd1
- (void)writeTo:(id)to;	// 0x34540d95
@end

