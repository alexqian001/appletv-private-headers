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
@property(retain, nonatomic) NSMutableArray *junctions;	// G=0x379c754d; S=0x379c755d; @synthesize=_junctions
- (void)addJunction:(id)junction;	// 0x379c6e89
- (void)clearJunctions;	// 0x379c6e69
- (void)copyTo:(id)to;	// 0x379c743d
- (void)dealloc;	// 0x379c6e25
- (id)description;	// 0x379c6f35
- (id)dictionaryRepresentation;	// 0x379c6fa5
- (unsigned)hash;	// 0x379c752d
- (BOOL)isEqual:(id)equal;	// 0x379c74bd
- (id)junctionAtIndex:(unsigned)index;	// 0x379c6f15
// declared property getter: - (id)junctions;	// 0x379c754d
- (unsigned)junctionsCount;	// 0x379c6ef5
- (BOOL)readFrom:(id)from;	// 0x379c72ed
// declared property setter: - (void)setJunctions:(id)junctions;	// 0x379c755d
- (void)writeTo:(id)to;	// 0x379c72f9
@end

