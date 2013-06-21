/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library


@interface GEOTimeRange : PBCodable {
	unsigned _from;	// 4 = 0x4
	unsigned _to;	// 8 = 0x8
	BOOL _allDay;	// 12 = 0xc
	struct {
		unsigned departureTime : 1;
		unsigned maxRouteCount : 1;
		unsigned timeSinceLastRerouteRequest : 1;
	} _has;	// 13 = 0xd
}
@property(assign, nonatomic) BOOL allDay;	// G=0x341d4d55; S=0x341d458d; @synthesize=_allDay
@property(assign, nonatomic) unsigned from;	// G=0x341d4d35; S=0x341d44d9; @synthesize=_from
@property(assign, nonatomic) BOOL hasAllDay;	// G=0x341d45d5; S=0x341d45b5; 
@property(assign, nonatomic) BOOL hasFrom;	// G=0x341d451d; S=0x341d4501; 
@property(assign, nonatomic) BOOL hasTo;	// G=0x341d4579; S=0x341d4559; 
@property(assign, nonatomic) unsigned to;	// G=0x341d4d45; S=0x341d4531; @synthesize=_to
// declared property getter: - (BOOL)allDay;	// 0x341d4d55
- (void)copyTo:(id)to;	// 0x341d4af9
- (void)dealloc;	// 0x341d44ad
- (id)description;	// 0x341d45e9
- (id)dictionaryRepresentation;	// 0x341d4659
// declared property getter: - (unsigned)from;	// 0x341d4d35
// declared property getter: - (BOOL)hasAllDay;	// 0x341d45d5
// declared property getter: - (BOOL)hasFrom;	// 0x341d451d
// declared property getter: - (BOOL)hasTo;	// 0x341d4579
- (unsigned)hash;	// 0x341d4c99
- (BOOL)isEqual:(id)equal;	// 0x341d4bc1
- (BOOL)readFrom:(id)from;	// 0x341d4a51
// declared property setter: - (void)setAllDay:(BOOL)day;	// 0x341d458d
// declared property setter: - (void)setFrom:(unsigned)from;	// 0x341d44d9
// declared property setter: - (void)setHasAllDay:(BOOL)day;	// 0x341d45b5
// declared property setter: - (void)setHasFrom:(BOOL)from;	// 0x341d4501
// declared property setter: - (void)setHasTo:(BOOL)to;	// 0x341d4559
// declared property setter: - (void)setTo:(unsigned)to;	// 0x341d4531
// declared property getter: - (unsigned)to;	// 0x341d4d45
- (void)writeTo:(id)to;	// 0x341d4a5d
@end
