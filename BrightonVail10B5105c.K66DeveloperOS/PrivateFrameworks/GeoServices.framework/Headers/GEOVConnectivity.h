/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOVConnectivity : PBCodable {
	NSMutableArray *_junctions;	// 4 = 0x4
}
@property(retain, nonatomic) NSMutableArray *junctions;	// G=0x3399648d; S=0x3399649d; @synthesize=_junctions
- (void)addJunction:(id)junction;	// 0x33995dc9
- (void)clearJunctions;	// 0x33995da9
- (void)copyTo:(id)to;	// 0x3399637d
- (void)dealloc;	// 0x33995d65
- (id)description;	// 0x33995e75
- (id)dictionaryRepresentation;	// 0x33995ee5
- (unsigned)hash;	// 0x3399646d
- (BOOL)isEqual:(id)equal;	// 0x339963fd
- (id)junctionAtIndex:(unsigned)index;	// 0x33995e55
// declared property getter: - (id)junctions;	// 0x3399648d
- (unsigned)junctionsCount;	// 0x33995e35
- (BOOL)readFrom:(id)from;	// 0x3399622d
// declared property setter: - (void)setJunctions:(id)junctions;	// 0x3399649d
- (void)writeTo:(id)to;	// 0x33996239
@end

