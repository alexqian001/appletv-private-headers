/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class GMMMapPoint;

__attribute__((visibility("hidden")))
@interface GMMMapInfo : PBCodable {
	GMMMapPoint *_center;	// 4 = 0x4
	int _latitudeSpan;	// 8 = 0x8
	int _longitudeSpan;	// 12 = 0xc
	BOOL _hasZoomLevel;	// 16 = 0x10
	int _zoomLevel;	// 20 = 0x14
}
@property(retain, nonatomic) GMMMapPoint *center;	// G=0x33845aa1; S=0x33845ab1; @synthesize=_center
@property(assign, nonatomic) BOOL hasZoomLevel;	// G=0x33845b15; S=0x33845b25; @synthesize=_hasZoomLevel
@property(assign, nonatomic) int latitudeSpan;	// G=0x33845ad5; S=0x33845ae5; @synthesize=_latitudeSpan
@property(assign, nonatomic) int longitudeSpan;	// G=0x33845af5; S=0x33845b05; @synthesize=_longitudeSpan
@property(assign, nonatomic) int zoomLevel;	// G=0x33845b35; S=0x33845619; @synthesize=_zoomLevel
- (id)initWithGEOMapRegion:(id)geomapRegion withZoom:(int)zoom;	// 0x3386e78d
- (id)initWithSearchRequest:(id)searchRequest;	// 0x3386d1ed
// declared property getter: - (id)center;	// 0x33845aa1
- (void)dealloc;	// 0x338455d5
- (id)description;	// 0x3384563d
- (id)dictionaryRepresentation;	// 0x338456ad
// declared property getter: - (BOOL)hasZoomLevel;	// 0x33845b15
// declared property getter: - (int)latitudeSpan;	// 0x33845ad5
// declared property getter: - (int)longitudeSpan;	// 0x33845af5
- (BOOL)readFrom:(id)from;	// 0x338457c1
// declared property setter: - (void)setCenter:(id)center;	// 0x33845ab1
// declared property setter: - (void)setHasZoomLevel:(BOOL)level;	// 0x33845b25
// declared property setter: - (void)setLatitudeSpan:(int)span;	// 0x33845ae5
// declared property setter: - (void)setLongitudeSpan:(int)span;	// 0x33845b05
// declared property setter: - (void)setZoomLevel:(int)level;	// 0x33845619
- (void)writeTo:(id)to;	// 0x338459a9
// declared property getter: - (int)zoomLevel;	// 0x33845b35
@end

