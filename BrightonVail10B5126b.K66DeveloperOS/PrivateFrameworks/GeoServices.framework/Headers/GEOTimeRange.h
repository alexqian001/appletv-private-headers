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
@property(assign, nonatomic) BOOL allDay;	// G=0x33ff3955; S=0x33ff318d; @synthesize=_allDay
@property(assign, nonatomic) unsigned from;	// G=0x33ff3935; S=0x33ff30d9; @synthesize=_from
@property(assign, nonatomic) BOOL hasAllDay;	// G=0x33ff31d5; S=0x33ff31b5; 
@property(assign, nonatomic) BOOL hasFrom;	// G=0x33ff311d; S=0x33ff3101; 
@property(assign, nonatomic) BOOL hasTo;	// G=0x33ff3179; S=0x33ff3159; 
@property(assign, nonatomic) unsigned to;	// G=0x33ff3945; S=0x33ff3131; @synthesize=_to
// declared property getter: - (BOOL)allDay;	// 0x33ff3955
- (void)copyTo:(id)to;	// 0x33ff36f9
- (void)dealloc;	// 0x33ff30ad
- (id)description;	// 0x33ff31e9
- (id)dictionaryRepresentation;	// 0x33ff3259
// declared property getter: - (unsigned)from;	// 0x33ff3935
// declared property getter: - (BOOL)hasAllDay;	// 0x33ff31d5
// declared property getter: - (BOOL)hasFrom;	// 0x33ff311d
// declared property getter: - (BOOL)hasTo;	// 0x33ff3179
- (unsigned)hash;	// 0x33ff3899
- (BOOL)isEqual:(id)equal;	// 0x33ff37c1
- (BOOL)readFrom:(id)from;	// 0x33ff3651
// declared property setter: - (void)setAllDay:(BOOL)day;	// 0x33ff318d
// declared property setter: - (void)setFrom:(unsigned)from;	// 0x33ff30d9
// declared property setter: - (void)setHasAllDay:(BOOL)day;	// 0x33ff31b5
// declared property setter: - (void)setHasFrom:(BOOL)from;	// 0x33ff3101
// declared property setter: - (void)setHasTo:(BOOL)to;	// 0x33ff3159
// declared property setter: - (void)setTo:(unsigned)to;	// 0x33ff3131
// declared property getter: - (unsigned)to;	// 0x33ff3945
- (void)writeTo:(id)to;	// 0x33ff365d
@end
