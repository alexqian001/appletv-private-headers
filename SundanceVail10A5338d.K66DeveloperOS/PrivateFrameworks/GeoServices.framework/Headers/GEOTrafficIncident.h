/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface GEOTrafficIncident : PBCodable {
	double _endTime;	// 4 = 0x4
	double _lastUpdated;	// 12 = 0xc
	double _startTime;	// 20 = 0x14
	long long _uID;	// 28 = 0x1c
	NSString *_info;	// 36 = 0x24
	NSString *_location;	// 40 = 0x28
	NSString *_title;	// 44 = 0x2c
	int _type;	// 48 = 0x30
	int _vertexCount;	// 52 = 0x34
	int _vertexOffset;	// 56 = 0x38
	struct {
		unsigned arrivalStepID : 1;
		unsigned departureStepID : 1;
		unsigned distance : 1;
		unsigned drivingSide : 1;
		unsigned expectedTime : 1;
		unsigned routeType : 1;
		unsigned transportType : 1;
	} _has;	// 60 = 0x3c
}
@property(assign, nonatomic) double endTime;	// G=0x324922c9; S=0x32490ded; @synthesize=_endTime
@property(assign, nonatomic) BOOL hasEndTime;	// G=0x32490e3d; S=0x32490e21; 
@property(readonly, assign, nonatomic) BOOL hasInfo;	// G=0x32490c9d; 
@property(assign, nonatomic) BOOL hasLastUpdated;	// G=0x32490ea5; S=0x32490e85; 
@property(readonly, assign, nonatomic) BOOL hasLocation;	// G=0x32490cb5; 
@property(assign, nonatomic) BOOL hasStartTime;	// G=0x32490dd9; S=0x32490db9; 
@property(readonly, assign, nonatomic) BOOL hasTitle;	// G=0x32490c85; 
@property(assign, nonatomic) BOOL hasType;	// G=0x32490f01; S=0x32490ee1; 
@property(assign, nonatomic) BOOL hasUID;	// G=0x32490c71; S=0x32490c51; 
@property(assign, nonatomic) BOOL hasVertexCount;	// G=0x32490d71; S=0x32490d51; 
@property(assign, nonatomic) BOOL hasVertexOffset;	// G=0x32490d15; S=0x32490cf5; 
@property(retain, nonatomic) NSString *info;	// G=0x32492251; S=0x32492261; @synthesize=_info
@property(assign, nonatomic) double lastUpdated;	// G=0x324922e1; S=0x32490e51; @synthesize=_lastUpdated
@property(retain, nonatomic) NSString *location;	// G=0x32492271; S=0x32492281; @synthesize=_location
@property(assign, nonatomic) double startTime;	// G=0x324922b1; S=0x32490d85; @synthesize=_startTime
@property(retain, nonatomic) NSString *title;	// G=0x32492231; S=0x32492241; @synthesize=_title
@property(assign, nonatomic) int type;	// G=0x324922f9; S=0x32490eb9; @synthesize=_type
@property(assign, nonatomic) long long uID;	// G=0x32492219; S=0x32490c1d; @synthesize=_uID
@property(assign, nonatomic) int vertexCount;	// G=0x324922a1; S=0x32490d29; @synthesize=_vertexCount
@property(assign, nonatomic) int vertexOffset;	// G=0x32492291; S=0x32490ccd; @synthesize=_vertexOffset
- (void)copyTo:(id)to;	// 0x32491a41
- (void)dealloc;	// 0x32490bb1
- (id)description;	// 0x32490f15
- (id)dictionaryRepresentation;	// 0x32490f85
// declared property getter: - (double)endTime;	// 0x324922c9
// declared property getter: - (BOOL)hasEndTime;	// 0x32490e3d
// declared property getter: - (BOOL)hasInfo;	// 0x32490c9d
// declared property getter: - (BOOL)hasLastUpdated;	// 0x32490ea5
// declared property getter: - (BOOL)hasLocation;	// 0x32490cb5
// declared property getter: - (BOOL)hasStartTime;	// 0x32490dd9
// declared property getter: - (BOOL)hasTitle;	// 0x32490c85
// declared property getter: - (BOOL)hasType;	// 0x32490f01
// declared property getter: - (BOOL)hasUID;	// 0x32490c71
// declared property getter: - (BOOL)hasVertexCount;	// 0x32490d71
// declared property getter: - (BOOL)hasVertexOffset;	// 0x32490d15
- (unsigned)hash;	// 0x32491f41
// declared property getter: - (id)info;	// 0x32492251
- (BOOL)isEqual:(id)equal;	// 0x32491cc5
// declared property getter: - (double)lastUpdated;	// 0x324922e1
// declared property getter: - (id)location;	// 0x32492271
- (BOOL)readFrom:(id)from;	// 0x3249183d
// declared property setter: - (void)setEndTime:(double)time;	// 0x32490ded
// declared property setter: - (void)setHasEndTime:(BOOL)time;	// 0x32490e21
// declared property setter: - (void)setHasLastUpdated:(BOOL)updated;	// 0x32490e85
// declared property setter: - (void)setHasStartTime:(BOOL)time;	// 0x32490db9
// declared property setter: - (void)setHasType:(BOOL)type;	// 0x32490ee1
// declared property setter: - (void)setHasUID:(BOOL)uid;	// 0x32490c51
// declared property setter: - (void)setHasVertexCount:(BOOL)count;	// 0x32490d51
// declared property setter: - (void)setHasVertexOffset:(BOOL)offset;	// 0x32490cf5
// declared property setter: - (void)setInfo:(id)info;	// 0x32492261
// declared property setter: - (void)setLastUpdated:(double)updated;	// 0x32490e51
// declared property setter: - (void)setLocation:(id)location;	// 0x32492281
// declared property setter: - (void)setStartTime:(double)time;	// 0x32490d85
// declared property setter: - (void)setTitle:(id)title;	// 0x32492241
// declared property setter: - (void)setType:(int)type;	// 0x32490eb9
// declared property setter: - (void)setUID:(long long)uid;	// 0x32490c1d
// declared property setter: - (void)setVertexCount:(int)count;	// 0x32490d29
// declared property setter: - (void)setVertexOffset:(int)offset;	// 0x32490ccd
// declared property getter: - (double)startTime;	// 0x324922b1
// declared property getter: - (id)title;	// 0x32492231
// declared property getter: - (int)type;	// 0x324922f9
// declared property getter: - (long long)uID;	// 0x32492219
// declared property getter: - (int)vertexCount;	// 0x324922a1
// declared property getter: - (int)vertexOffset;	// 0x32492291
- (void)writeTo:(id)to;	// 0x32491849
@end
