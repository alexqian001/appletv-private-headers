/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library
#import "GeoServices-Structs.h"

@class NSMutableArray;

@interface GEOPlaceSearchFeedbackCollection : PBCodable {
	XXStruct_t9EeIA _sessionID;	// 4 = 0x4
	unsigned long long _businessID;	// 20 = 0x14
	long long _placeID;	// 28 = 0x1c
	NSMutableArray *_actionCaptures;	// 36 = 0x24
	int _localSearchProviderID;	// 40 = 0x28
	struct {
		unsigned eastLng : 1;
		unsigned northLat : 1;
		unsigned southLat : 1;
		unsigned westLng : 1;
	} _has;	// 44 = 0x2c
}
@property(retain, nonatomic) NSMutableArray *actionCaptures;	// G=0x341bd0f1; S=0x341bd101; @synthesize=_actionCaptures
@property(assign, nonatomic) unsigned long long businessID;	// G=0x341bd0c1; S=0x34152fd5; @synthesize=_businessID
@property(assign, nonatomic) BOOL hasBusinessID;	// G=0x341bc179; S=0x341bc159; 
@property(assign, nonatomic) BOOL hasLocalSearchProviderID;	// G=0x341bc269; S=0x341bc249; 
@property(assign, nonatomic) BOOL hasPlaceID;	// G=0x341bc1ad; S=0x341bc18d; 
@property(assign, nonatomic) BOOL hasSessionID;	// G=0x341bc145; S=0x341bc129; 
@property(assign, nonatomic) int localSearchProviderID;	// G=0x341bd111; S=0x341bc221; @synthesize=_localSearchProviderID
@property(assign, nonatomic) long long placeID;	// G=0x341bd0d9; S=0x34153021; @synthesize=_placeID
@property(assign, nonatomic) XXStruct_t9EeIA sessionID;	// G=0x341bd09d; S=0x34153055; @synthesize=_sessionID
- (id)actionCaptureAtIndex:(unsigned)index;	// 0x341bc201
// declared property getter: - (id)actionCaptures;	// 0x341bd0f1
- (unsigned)actionCapturesCount;	// 0x341bc1e1
- (void)addActionCapture:(id)capture;	// 0x3415311d
// declared property getter: - (unsigned long long)businessID;	// 0x341bd0c1
- (void)clearActionCaptures;	// 0x341bc1c1
- (void)copyTo:(id)to;	// 0x341bcc7d
- (void)dealloc;	// 0x341bc0e5
- (id)description;	// 0x341bc27d
- (id)dictionaryRepresentation;	// 0x341bc2ed
// declared property getter: - (BOOL)hasBusinessID;	// 0x341bc179
// declared property getter: - (BOOL)hasLocalSearchProviderID;	// 0x341bc269
// declared property getter: - (BOOL)hasPlaceID;	// 0x341bc1ad
// declared property getter: - (BOOL)hasSessionID;	// 0x341bc145
- (unsigned)hash;	// 0x341bcfad
- (BOOL)isEqual:(id)equal;	// 0x341bce21
// declared property getter: - (int)localSearchProviderID;	// 0x341bd111
// declared property getter: - (long long)placeID;	// 0x341bd0d9
- (BOOL)readFrom:(id)from;	// 0x341bca01
// declared property getter: - (XXStruct_t9EeIA)sessionID;	// 0x341bd09d
// declared property setter: - (void)setActionCaptures:(id)captures;	// 0x341bd101
// declared property setter: - (void)setBusinessID:(unsigned long long)anId;	// 0x34152fd5
// declared property setter: - (void)setHasBusinessID:(BOOL)anId;	// 0x341bc159
// declared property setter: - (void)setHasLocalSearchProviderID:(BOOL)anId;	// 0x341bc249
// declared property setter: - (void)setHasPlaceID:(BOOL)anId;	// 0x341bc18d
// declared property setter: - (void)setHasSessionID:(BOOL)anId;	// 0x341bc129
// declared property setter: - (void)setLocalSearchProviderID:(int)anId;	// 0x341bc221
// declared property setter: - (void)setPlaceID:(long long)anId;	// 0x34153021
// declared property setter: - (void)setSessionID:(XXStruct_t9EeIA)anId;	// 0x34153055
- (void)writeTo:(id)to;	// 0x341bca0d
@end

