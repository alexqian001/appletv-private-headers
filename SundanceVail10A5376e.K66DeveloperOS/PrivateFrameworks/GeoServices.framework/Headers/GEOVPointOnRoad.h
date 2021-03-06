/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library
#import "GeoServices-Structs.h"


__attribute__((visibility("hidden")))
@interface GEOVPointOnRoad : PBCodable {
	int _featureIndex;	// 4 = 0x4
	int _vertexIndex;	// 8 = 0x8
	XXStruct_ec15KC _has;	// 12 = 0xc
}
@property(assign, nonatomic) int featureIndex;	// G=0x37a7c6e1; S=0x37a7c6f1; @synthesize=_featureIndex
@property(assign, nonatomic) BOOL hasVertexIndex;	// G=0x37a7c169; S=0x37a7c14d; 
@property(assign, nonatomic) int vertexIndex;	// G=0x37a7c701; S=0x37a7c125; @synthesize=_vertexIndex
- (void)copyTo:(id)to;	// 0x37a7c589
- (void)dealloc;	// 0x37a7c0f9
- (id)description;	// 0x37a7c17d
- (id)dictionaryRepresentation;	// 0x37a7c1ed
// declared property getter: - (int)featureIndex;	// 0x37a7c6e1
// declared property getter: - (BOOL)hasVertexIndex;	// 0x37a7c169
- (unsigned)hash;	// 0x37a7c689
- (BOOL)isEqual:(id)equal;	// 0x37a7c5fd
- (BOOL)readFrom:(id)from;	// 0x37a7c51d
// declared property setter: - (void)setFeatureIndex:(int)index;	// 0x37a7c6f1
// declared property setter: - (void)setHasVertexIndex:(BOOL)index;	// 0x37a7c14d
// declared property setter: - (void)setVertexIndex:(int)index;	// 0x37a7c125
// declared property getter: - (int)vertexIndex;	// 0x37a7c701
- (void)writeTo:(id)to;	// 0x37a7c529
@end

