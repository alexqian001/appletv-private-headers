/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library


@interface GEOETAStep : PBCodable {
	unsigned _expectedTime;	// 4 = 0x4
	unsigned _stepID;	// 8 = 0x8
	int _zilchPointIndex;	// 12 = 0xc
	struct {
		unsigned departureTime : 1;
		unsigned maxRouteCount : 1;
		unsigned timeSinceLastRerouteRequest : 1;
	} _has;	// 16 = 0x10
}
@property(assign, nonatomic) unsigned expectedTime;	// G=0x33fc809d; S=0x33fc7801; @synthesize=_expectedTime
@property(assign, nonatomic) BOOL hasExpectedTime;	// G=0x33fc7845; S=0x33fc7829; 
@property(assign, nonatomic) BOOL hasStepID;	// G=0x33fc77ed; S=0x33fc77cd; 
@property(assign, nonatomic) BOOL hasZilchPointIndex;	// G=0x33fc78cd; S=0x33fc78ad; 
@property(assign, nonatomic) unsigned stepID;	// G=0x33fc808d; S=0x33fc77a5; @synthesize=_stepID
@property(assign, nonatomic) int zilchPointIndex;	// G=0x33fc7859; S=0x33fc7885; @synthesize=_zilchPointIndex
- (void)copyTo:(id)to;	// 0x33fc7e59
- (void)dealloc;	// 0x33fc7779
- (id)description;	// 0x33fc78e1
- (id)dictionaryRepresentation;	// 0x33fc7951
// declared property getter: - (unsigned)expectedTime;	// 0x33fc809d
// declared property getter: - (BOOL)hasExpectedTime;	// 0x33fc7845
// declared property getter: - (BOOL)hasStepID;	// 0x33fc77ed
// declared property getter: - (BOOL)hasZilchPointIndex;	// 0x33fc78cd
- (unsigned)hash;	// 0x33fc7ff5
- (BOOL)isEqual:(id)equal;	// 0x33fc7f21
- (BOOL)readFrom:(id)from;	// 0x33fc7db1
// declared property setter: - (void)setExpectedTime:(unsigned)time;	// 0x33fc7801
// declared property setter: - (void)setHasExpectedTime:(BOOL)time;	// 0x33fc7829
// declared property setter: - (void)setHasStepID:(BOOL)anId;	// 0x33fc77cd
// declared property setter: - (void)setHasZilchPointIndex:(BOOL)index;	// 0x33fc78ad
// declared property setter: - (void)setStepID:(unsigned)anId;	// 0x33fc77a5
// declared property setter: - (void)setZilchPointIndex:(int)index;	// 0x33fc7885
// declared property getter: - (unsigned)stepID;	// 0x33fc808d
- (void)writeTo:(id)to;	// 0x33fc7dbd
// declared property getter: - (int)zilchPointIndex;	// 0x33fc7859
@end

