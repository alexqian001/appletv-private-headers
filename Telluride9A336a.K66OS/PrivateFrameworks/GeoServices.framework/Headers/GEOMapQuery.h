/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class GEOPlaceSearchRequest, GEOSessionID, GEOMapRegion, GEOLocation, NSString;

@interface GEOMapQuery : PBCodable {
	NSString *_query;	// 4 = 0x4
	BOOL _hasRequestType;	// 8 = 0x8
	int _requestType;	// 12 = 0xc
	BOOL _hasMapCenterX;	// 16 = 0x10
	int _mapCenterX;	// 20 = 0x14
	BOOL _hasMapCenterY;	// 24 = 0x18
	int _mapCenterY;	// 28 = 0x1c
	BOOL _hasMapSpanX;	// 32 = 0x20
	int _mapSpanX;	// 36 = 0x24
	BOOL _hasMapSpanY;	// 40 = 0x28
	int _mapSpanY;	// 44 = 0x2c
	BOOL _hasZoomlevel;	// 48 = 0x30
	int _zoomlevel;	// 52 = 0x34
	BOOL _hasClientImgFmt;	// 56 = 0x38
	int _clientImgFmt;	// 60 = 0x3c
	BOOL _hasTilesizeX;	// 64 = 0x40
	int _tilesizeX;	// 68 = 0x44
	BOOL _hasTilesizeY;	// 72 = 0x48
	int _tilesizeY;	// 76 = 0x4c
	BOOL _hasClientImgMaxWidth;	// 80 = 0x50
	int _clientImgMaxWidth;	// 84 = 0x54
	BOOL _hasClientImgMaxHeight;	// 88 = 0x58
	int _clientImgMaxHeight;	// 92 = 0x5c
	GEOMapRegion *_mapRegion;	// 96 = 0x60
	GEOLocation *_userLocation;	// 100 = 0x64
	GEOSessionID *_sessionID;	// 104 = 0x68
	GEOPlaceSearchRequest *_placeSearchRequest;	// 108 = 0x6c
}
@property(assign, nonatomic) int clientImgFmt;	// G=0x366f89e1; S=0x366f785d; @synthesize=_clientImgFmt
@property(assign, nonatomic) int clientImgMaxHeight;	// G=0x366f8aa1; S=0x366f78ed; @synthesize=_clientImgMaxHeight
@property(assign, nonatomic) int clientImgMaxWidth;	// G=0x366f8a71; S=0x366f78c9; @synthesize=_clientImgMaxWidth
@property(assign, nonatomic) BOOL hasClientImgFmt;	// G=0x366f89c1; S=0x366f89d1; @synthesize=_hasClientImgFmt
@property(assign, nonatomic) BOOL hasClientImgMaxHeight;	// G=0x366f8a81; S=0x366f8a91; @synthesize=_hasClientImgMaxHeight
@property(assign, nonatomic) BOOL hasClientImgMaxWidth;	// G=0x366f8a51; S=0x366f8a61; @synthesize=_hasClientImgMaxWidth
@property(assign, nonatomic) BOOL hasMapCenterX;	// G=0x366f88d1; S=0x366f88e1; @synthesize=_hasMapCenterX
@property(assign, nonatomic) BOOL hasMapCenterY;	// G=0x366f8901; S=0x366f8911; @synthesize=_hasMapCenterY
@property(readonly, assign, nonatomic) BOOL hasMapRegion;	// G=0x366f7911; 
@property(assign, nonatomic) BOOL hasMapSpanX;	// G=0x366f8931; S=0x366f8941; @synthesize=_hasMapSpanX
@property(assign, nonatomic) BOOL hasMapSpanY;	// G=0x366f8961; S=0x366f8971; @synthesize=_hasMapSpanY
@property(readonly, assign, nonatomic) BOOL hasPlaceSearchRequest;	// G=0x366f7959; 
@property(readonly, assign, nonatomic) BOOL hasQuery;	// G=0x366f776d; 
@property(assign, nonatomic) BOOL hasRequestType;	// G=0x366f88a1; S=0x366f88b1; @synthesize=_hasRequestType
@property(readonly, assign, nonatomic) BOOL hasSessionID;	// G=0x366f7941; 
@property(assign, nonatomic) BOOL hasTilesizeX;	// G=0x366f89f1; S=0x366f8a01; @synthesize=_hasTilesizeX
@property(assign, nonatomic) BOOL hasTilesizeY;	// G=0x366f8a21; S=0x366f8a31; @synthesize=_hasTilesizeY
@property(readonly, assign, nonatomic) BOOL hasUserLocation;	// G=0x366f7929; 
@property(assign, nonatomic) BOOL hasZoomlevel;	// G=0x366f8991; S=0x366f89a1; @synthesize=_hasZoomlevel
@property(assign, nonatomic) int mapCenterX;	// G=0x366f88f1; S=0x366f77a9; @synthesize=_mapCenterX
@property(assign, nonatomic) int mapCenterY;	// G=0x366f8921; S=0x366f77cd; @synthesize=_mapCenterY
@property(retain, nonatomic) GEOMapRegion *mapRegion;	// G=0x366f8ab1; S=0x366f8ac1; @synthesize=_mapRegion
@property(assign, nonatomic) int mapSpanX;	// G=0x366f8951; S=0x366f77f1; @synthesize=_mapSpanX
@property(assign, nonatomic) int mapSpanY;	// G=0x366f8981; S=0x366f7815; @synthesize=_mapSpanY
@property(retain, nonatomic) GEOPlaceSearchRequest *placeSearchRequest;	// G=0x366f8b4d; S=0x366f8b5d; @synthesize=_placeSearchRequest
@property(retain, nonatomic) NSString *query;	// G=0x366f886d; S=0x366f887d; @synthesize=_query
@property(assign, nonatomic) int requestType;	// G=0x366f88c1; S=0x366f7785; @synthesize=_requestType
@property(retain, nonatomic) GEOSessionID *sessionID;	// G=0x366f8b19; S=0x366f8b29; @synthesize=_sessionID
@property(assign, nonatomic) int tilesizeX;	// G=0x366f8a11; S=0x366f7881; @synthesize=_tilesizeX
@property(assign, nonatomic) int tilesizeY;	// G=0x366f8a41; S=0x366f78a5; @synthesize=_tilesizeY
@property(retain, nonatomic) GEOLocation *userLocation;	// G=0x366f8ae5; S=0x366f8af5; @synthesize=_userLocation
@property(assign, nonatomic) int zoomlevel;	// G=0x366f89b1; S=0x366f7839; @synthesize=_zoomlevel
// declared property getter: - (int)clientImgFmt;	// 0x366f89e1
// declared property getter: - (int)clientImgMaxHeight;	// 0x366f8aa1
// declared property getter: - (int)clientImgMaxWidth;	// 0x366f8a71
- (void)dealloc;	// 0x366f76d9
- (id)description;	// 0x366f7971
- (id)dictionaryRepresentation;	// 0x366f79e1
// declared property getter: - (BOOL)hasClientImgFmt;	// 0x366f89c1
// declared property getter: - (BOOL)hasClientImgMaxHeight;	// 0x366f8a81
// declared property getter: - (BOOL)hasClientImgMaxWidth;	// 0x366f8a51
// declared property getter: - (BOOL)hasMapCenterX;	// 0x366f88d1
// declared property getter: - (BOOL)hasMapCenterY;	// 0x366f8901
// declared property getter: - (BOOL)hasMapRegion;	// 0x366f7911
// declared property getter: - (BOOL)hasMapSpanX;	// 0x366f8931
// declared property getter: - (BOOL)hasMapSpanY;	// 0x366f8961
// declared property getter: - (BOOL)hasPlaceSearchRequest;	// 0x366f7959
// declared property getter: - (BOOL)hasQuery;	// 0x366f776d
// declared property getter: - (BOOL)hasRequestType;	// 0x366f88a1
// declared property getter: - (BOOL)hasSessionID;	// 0x366f7941
// declared property getter: - (BOOL)hasTilesizeX;	// 0x366f89f1
// declared property getter: - (BOOL)hasTilesizeY;	// 0x366f8a21
// declared property getter: - (BOOL)hasUserLocation;	// 0x366f7929
// declared property getter: - (BOOL)hasZoomlevel;	// 0x366f8991
// declared property getter: - (int)mapCenterX;	// 0x366f88f1
// declared property getter: - (int)mapCenterY;	// 0x366f8921
// declared property getter: - (id)mapRegion;	// 0x366f8ab1
// declared property getter: - (int)mapSpanX;	// 0x366f8951
// declared property getter: - (int)mapSpanY;	// 0x366f8981
// declared property getter: - (id)placeSearchRequest;	// 0x366f8b4d
// declared property getter: - (id)query;	// 0x366f886d
- (BOOL)readFrom:(id)from;	// 0x366f7ef5
// declared property getter: - (int)requestType;	// 0x366f88c1
// declared property getter: - (id)sessionID;	// 0x366f8b19
// declared property setter: - (void)setClientImgFmt:(int)fmt;	// 0x366f785d
// declared property setter: - (void)setClientImgMaxHeight:(int)height;	// 0x366f78ed
// declared property setter: - (void)setClientImgMaxWidth:(int)width;	// 0x366f78c9
// declared property setter: - (void)setHasClientImgFmt:(BOOL)fmt;	// 0x366f89d1
// declared property setter: - (void)setHasClientImgMaxHeight:(BOOL)height;	// 0x366f8a91
// declared property setter: - (void)setHasClientImgMaxWidth:(BOOL)width;	// 0x366f8a61
// declared property setter: - (void)setHasMapCenterX:(BOOL)x;	// 0x366f88e1
// declared property setter: - (void)setHasMapCenterY:(BOOL)y;	// 0x366f8911
// declared property setter: - (void)setHasMapSpanX:(BOOL)x;	// 0x366f8941
// declared property setter: - (void)setHasMapSpanY:(BOOL)y;	// 0x366f8971
// declared property setter: - (void)setHasRequestType:(BOOL)type;	// 0x366f88b1
// declared property setter: - (void)setHasTilesizeX:(BOOL)x;	// 0x366f8a01
// declared property setter: - (void)setHasTilesizeY:(BOOL)y;	// 0x366f8a31
// declared property setter: - (void)setHasZoomlevel:(BOOL)zoomlevel;	// 0x366f89a1
// declared property setter: - (void)setMapCenterX:(int)x;	// 0x366f77a9
// declared property setter: - (void)setMapCenterY:(int)y;	// 0x366f77cd
// declared property setter: - (void)setMapRegion:(id)region;	// 0x366f8ac1
// declared property setter: - (void)setMapSpanX:(int)x;	// 0x366f77f1
// declared property setter: - (void)setMapSpanY:(int)y;	// 0x366f7815
// declared property setter: - (void)setPlaceSearchRequest:(id)request;	// 0x366f8b5d
// declared property setter: - (void)setQuery:(id)query;	// 0x366f887d
// declared property setter: - (void)setRequestType:(int)type;	// 0x366f7785
// declared property setter: - (void)setSessionID:(id)anId;	// 0x366f8b29
// declared property setter: - (void)setTilesizeX:(int)x;	// 0x366f7881
// declared property setter: - (void)setTilesizeY:(int)y;	// 0x366f78a5
// declared property setter: - (void)setUserLocation:(id)location;	// 0x366f8af5
// declared property setter: - (void)setZoomlevel:(int)zoomlevel;	// 0x366f7839
// declared property getter: - (int)tilesizeX;	// 0x366f8a11
// declared property getter: - (int)tilesizeY;	// 0x366f8a41
// declared property getter: - (id)userLocation;	// 0x366f8ae5
- (void)writeTo:(id)to;	// 0x366f83c1
// declared property getter: - (int)zoomlevel;	// 0x366f89b1
@end
