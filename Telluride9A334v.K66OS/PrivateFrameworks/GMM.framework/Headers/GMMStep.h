/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library
#import "GMM-Structs.h"

@class NSMutableArray, GMMDateTime, NSString;

__attribute__((visibility("hidden")))
@interface GMMStep : PBCodable {
	BOOL _hasStepType;	// 4 = 0x4
	int _stepType;	// 8 = 0x8
	NSString *_instructions;	// 12 = 0xc
	BOOL _hasDistanceMeters;	// 16 = 0x10
	int _distanceMeters;	// 20 = 0x14
	BOOL _hasDurationSeconds;	// 24 = 0x18
	int _durationSeconds;	// 28 = 0x1c
	BOOL _hasDeparturePointIndex;	// 32 = 0x20
	int _departurePointIndex;	// 36 = 0x24
	NSString *_departureAddress;	// 40 = 0x28
	NSString *_arrivalAddress;	// 44 = 0x2c
	GMMDateTime *_departureDateTime;	// 48 = 0x30
	GMMDateTime *_arrivalDateTime;	// 52 = 0x34
	BOOL _hasDepartureIntervalSeconds;	// 56 = 0x38
	int _departureIntervalSeconds;	// 60 = 0x3c
	NSString *_direction;	// 64 = 0x40
	BOOL _hasIconId;	// 68 = 0x44
	long long _iconId;	// 72 = 0x48
	NSString *_iconSummaryText;	// 80 = 0x50
	BOOL _hasShowInInstructions;	// 84 = 0x54
	BOOL _showInInstructions;	// 85 = 0x55
	BOOL _hasTransitAgencyIndex;	// 86 = 0x56
	int _transitAgencyIndex;	// 88 = 0x58
	NSString *_streetViewPanoId;	// 92 = 0x5c
	XXStruct_WmZAAA _alertIndexs;	// 96 = 0x60
	NSMutableArray *_notices;	// 108 = 0x6c
	BOOL _hasManeuverType;	// 112 = 0x70
	int _maneuverType;	// 116 = 0x74
	BOOL _hasManeuverTurnSide;	// 120 = 0x78
	int _maneuverTurnSide;	// 124 = 0x7c
	BOOL _hasManeuverTurnNumber;	// 128 = 0x80
	int _maneuverTurnNumber;	// 132 = 0x84
	NSMutableArray *_stepCues;	// 136 = 0x88
	NSString *_deprecatedDistance;	// 140 = 0x8c
	NSString *_deprecatedDuration;	// 144 = 0x90
}
@property(readonly, assign, nonatomic) int *alertIndexs;	// G=0x35b93bfd; 
@property(readonly, assign, nonatomic) unsigned alertIndexsCount;	// G=0x35b93be9; 
@property(retain, nonatomic) NSString *arrivalAddress;	// G=0x35b952a9; S=0x35b952b9; @synthesize=_arrivalAddress
@property(retain, nonatomic) GMMDateTime *arrivalDateTime;	// G=0x35b95311; S=0x35b95321; @synthesize=_arrivalDateTime
@property(retain, nonatomic) NSString *departureAddress;	// G=0x35b95275; S=0x35b95285; @synthesize=_departureAddress
@property(retain, nonatomic) GMMDateTime *departureDateTime;	// G=0x35b952dd; S=0x35b952ed; @synthesize=_departureDateTime
@property(assign, nonatomic) int departureIntervalSeconds;	// G=0x35b95365; S=0x35b93ae5; @synthesize=_departureIntervalSeconds
@property(assign, nonatomic) int departurePointIndex;	// G=0x35b95265; S=0x35b93a61; @synthesize=_departurePointIndex
@property(retain, nonatomic) NSString *deprecatedDistance;	// G=0x35b95591; S=0x35b955a1; @synthesize=_deprecatedDistance
@property(retain, nonatomic) NSString *deprecatedDuration;	// G=0x35b955c5; S=0x35b955d5; @synthesize=_deprecatedDuration
@property(retain, nonatomic) NSString *direction;	// G=0x35b95375; S=0x35b95385; @synthesize=_direction
@property(assign, nonatomic) int distanceMeters;	// G=0x35b95205; S=0x35b93a19; @synthesize=_distanceMeters
@property(assign, nonatomic) int durationSeconds;	// G=0x35b95235; S=0x35b93a3d; @synthesize=_durationSeconds
@property(readonly, assign, nonatomic) BOOL hasArrivalAddress;	// G=0x35b93a9d; 
@property(readonly, assign, nonatomic) BOOL hasArrivalDateTime;	// G=0x35b93acd; 
@property(readonly, assign, nonatomic) BOOL hasDepartureAddress;	// G=0x35b93a85; 
@property(readonly, assign, nonatomic) BOOL hasDepartureDateTime;	// G=0x35b93ab5; 
@property(assign, nonatomic) BOOL hasDepartureIntervalSeconds;	// G=0x35b95345; S=0x35b95355; @synthesize=_hasDepartureIntervalSeconds
@property(assign, nonatomic) BOOL hasDeparturePointIndex;	// G=0x35b95245; S=0x35b95255; @synthesize=_hasDeparturePointIndex
@property(readonly, assign, nonatomic) BOOL hasDeprecatedDistance;	// G=0x35b93ea5; 
@property(readonly, assign, nonatomic) BOOL hasDeprecatedDuration;	// G=0x35b93ebd; 
@property(readonly, assign, nonatomic) BOOL hasDirection;	// G=0x35b93b09; 
@property(assign, nonatomic) BOOL hasDistanceMeters;	// G=0x35b951e5; S=0x35b951f5; @synthesize=_hasDistanceMeters
@property(assign, nonatomic) BOOL hasDurationSeconds;	// G=0x35b95215; S=0x35b95225; @synthesize=_hasDurationSeconds
@property(assign, nonatomic) BOOL hasIconId;	// G=0x35b953a9; S=0x35b953b9; @synthesize=_hasIconId
@property(readonly, assign, nonatomic) BOOL hasIconSummaryText;	// G=0x35b93b4d; 
@property(readonly, assign, nonatomic) BOOL hasInstructions;	// G=0x35b93a01; 
@property(assign, nonatomic) BOOL hasManeuverTurnNumber;	// G=0x35b9552d; S=0x35b9553d; @synthesize=_hasManeuverTurnNumber
@property(assign, nonatomic) BOOL hasManeuverTurnSide;	// G=0x35b954fd; S=0x35b9550d; @synthesize=_hasManeuverTurnSide
@property(assign, nonatomic) BOOL hasManeuverType;	// G=0x35b954cd; S=0x35b954dd; @synthesize=_hasManeuverType
@property(assign, nonatomic) BOOL hasShowInInstructions;	// G=0x35b95415; S=0x35b95425; @synthesize=_hasShowInInstructions
@property(assign, nonatomic) BOOL hasStepType;	// G=0x35b95191; S=0x35b951a1; @synthesize=_hasStepType
@property(readonly, assign, nonatomic) BOOL hasStreetViewPanoId;	// G=0x35b93bd1; 
@property(assign, nonatomic) BOOL hasTransitAgencyIndex;	// G=0x35b95435; S=0x35b95445; @synthesize=_hasTransitAgencyIndex
@property(assign, nonatomic) long long iconId;	// G=0x35b953c9; S=0x35b93b21; @synthesize=_iconId
@property(retain, nonatomic) NSString *iconSummaryText;	// G=0x35b953e1; S=0x35b953f1; @synthesize=_iconSummaryText
@property(retain, nonatomic) NSString *instructions;	// G=0x35b951b1; S=0x35b951c1; @synthesize=_instructions
@property(assign, nonatomic) int maneuverTurnNumber;	// G=0x35b9554d; S=0x35b93ddd; @synthesize=_maneuverTurnNumber
@property(assign, nonatomic) int maneuverTurnSide;	// G=0x35b9551d; S=0x35b93db9; @synthesize=_maneuverTurnSide
@property(assign, nonatomic) int maneuverType;	// G=0x35b954ed; S=0x35b93d95; @synthesize=_maneuverType
@property(retain, nonatomic) NSMutableArray *notices;	// G=0x35b95499; S=0x35b954a9; @synthesize=_notices
@property(assign, nonatomic) BOOL showInInstructions;	// G=0x35b93b65; S=0x35b93b89; @synthesize=_showInInstructions
@property(retain, nonatomic) NSMutableArray *stepCues;	// G=0x35b9555d; S=0x35b9556d; @synthesize=_stepCues
@property(assign, nonatomic) int stepType;	// G=0x35b939b9; S=0x35b939dd; @synthesize=_stepType
@property(retain, nonatomic) NSString *streetViewPanoId;	// G=0x35b95465; S=0x35b95475; @synthesize=_streetViewPanoId
@property(assign, nonatomic) int transitAgencyIndex;	// G=0x35b95455; S=0x35b93bad; @synthesize=_transitAgencyIndex
- (void)addAlertIndex:(int)index;	// 0x35b93c21
- (void)addNotice:(id)notice;	// 0x35b93cf1
- (void)addStepCue:(id)cue;	// 0x35b93e01
- (int)alertIndexAtIndex:(unsigned)index;	// 0x35b93c35
// declared property getter: - (int *)alertIndexs;	// 0x35b93bfd
// declared property getter: - (unsigned)alertIndexsCount;	// 0x35b93be9
// declared property getter: - (id)arrivalAddress;	// 0x35b952a9
// declared property getter: - (id)arrivalDateTime;	// 0x35b95311
- (void)clearAlertIndexs;	// 0x35b93c0d
- (void)dealloc;	// 0x35b93889
// declared property getter: - (id)departureAddress;	// 0x35b95275
// declared property getter: - (id)departureDateTime;	// 0x35b952dd
// declared property getter: - (int)departureIntervalSeconds;	// 0x35b95365
// declared property getter: - (int)departurePointIndex;	// 0x35b95265
// declared property getter: - (id)deprecatedDistance;	// 0x35b95591
// declared property getter: - (id)deprecatedDuration;	// 0x35b955c5
- (id)description;	// 0x35b93ed5
- (id)description;	// 0x35b7aced
- (id)dictionaryRepresentation;	// 0x35b93f45
// declared property getter: - (id)direction;	// 0x35b95375
// declared property getter: - (int)distanceMeters;	// 0x35b95205
// declared property getter: - (int)durationSeconds;	// 0x35b95235
// declared property getter: - (BOOL)hasArrivalAddress;	// 0x35b93a9d
// declared property getter: - (BOOL)hasArrivalDateTime;	// 0x35b93acd
// declared property getter: - (BOOL)hasDepartureAddress;	// 0x35b93a85
// declared property getter: - (BOOL)hasDepartureDateTime;	// 0x35b93ab5
// declared property getter: - (BOOL)hasDepartureIntervalSeconds;	// 0x35b95345
// declared property getter: - (BOOL)hasDeparturePointIndex;	// 0x35b95245
// declared property getter: - (BOOL)hasDeprecatedDistance;	// 0x35b93ea5
// declared property getter: - (BOOL)hasDeprecatedDuration;	// 0x35b93ebd
// declared property getter: - (BOOL)hasDirection;	// 0x35b93b09
// declared property getter: - (BOOL)hasDistanceMeters;	// 0x35b951e5
// declared property getter: - (BOOL)hasDurationSeconds;	// 0x35b95215
// declared property getter: - (BOOL)hasIconId;	// 0x35b953a9
// declared property getter: - (BOOL)hasIconSummaryText;	// 0x35b93b4d
// declared property getter: - (BOOL)hasInstructions;	// 0x35b93a01
// declared property getter: - (BOOL)hasManeuverTurnNumber;	// 0x35b9552d
// declared property getter: - (BOOL)hasManeuverTurnSide;	// 0x35b954fd
// declared property getter: - (BOOL)hasManeuverType;	// 0x35b954cd
// declared property getter: - (BOOL)hasShowInInstructions;	// 0x35b95415
// declared property getter: - (BOOL)hasStepType;	// 0x35b95191
// declared property getter: - (BOOL)hasStreetViewPanoId;	// 0x35b93bd1
// declared property getter: - (BOOL)hasTransitAgencyIndex;	// 0x35b95435
// declared property getter: - (long long)iconId;	// 0x35b953c9
// declared property getter: - (id)iconSummaryText;	// 0x35b953e1
// declared property getter: - (id)instructions;	// 0x35b951b1
// declared property getter: - (int)maneuverTurnNumber;	// 0x35b9554d
// declared property getter: - (int)maneuverTurnSide;	// 0x35b9551d
// declared property getter: - (int)maneuverType;	// 0x35b954ed
- (id)noticeAtIndex:(unsigned)index;	// 0x35b93d75
// declared property getter: - (id)notices;	// 0x35b95499
- (unsigned)noticesCount;	// 0x35b93d55
- (BOOL)readFrom:(id)from;	// 0x35b94535
- (void)setAlertIndexs:(int *)indexs count:(unsigned)count;	// 0x35b93cd9
// declared property setter: - (void)setArrivalAddress:(id)address;	// 0x35b952b9
// declared property setter: - (void)setArrivalDateTime:(id)time;	// 0x35b95321
// declared property setter: - (void)setDepartureAddress:(id)address;	// 0x35b95285
// declared property setter: - (void)setDepartureDateTime:(id)time;	// 0x35b952ed
// declared property setter: - (void)setDepartureIntervalSeconds:(int)seconds;	// 0x35b93ae5
// declared property setter: - (void)setDeparturePointIndex:(int)index;	// 0x35b93a61
// declared property setter: - (void)setDeprecatedDistance:(id)distance;	// 0x35b955a1
// declared property setter: - (void)setDeprecatedDuration:(id)duration;	// 0x35b955d5
// declared property setter: - (void)setDirection:(id)direction;	// 0x35b95385
// declared property setter: - (void)setDistanceMeters:(int)meters;	// 0x35b93a19
// declared property setter: - (void)setDurationSeconds:(int)seconds;	// 0x35b93a3d
// declared property setter: - (void)setHasDepartureIntervalSeconds:(BOOL)seconds;	// 0x35b95355
// declared property setter: - (void)setHasDeparturePointIndex:(BOOL)index;	// 0x35b95255
// declared property setter: - (void)setHasDistanceMeters:(BOOL)meters;	// 0x35b951f5
// declared property setter: - (void)setHasDurationSeconds:(BOOL)seconds;	// 0x35b95225
// declared property setter: - (void)setHasIconId:(BOOL)anId;	// 0x35b953b9
// declared property setter: - (void)setHasManeuverTurnNumber:(BOOL)number;	// 0x35b9553d
// declared property setter: - (void)setHasManeuverTurnSide:(BOOL)side;	// 0x35b9550d
// declared property setter: - (void)setHasManeuverType:(BOOL)type;	// 0x35b954dd
// declared property setter: - (void)setHasShowInInstructions:(BOOL)instructions;	// 0x35b95425
// declared property setter: - (void)setHasStepType:(BOOL)type;	// 0x35b951a1
// declared property setter: - (void)setHasTransitAgencyIndex:(BOOL)index;	// 0x35b95445
// declared property setter: - (void)setIconId:(long long)anId;	// 0x35b93b21
// declared property setter: - (void)setIconSummaryText:(id)text;	// 0x35b953f1
// declared property setter: - (void)setInstructions:(id)instructions;	// 0x35b951c1
// declared property setter: - (void)setManeuverTurnNumber:(int)number;	// 0x35b93ddd
// declared property setter: - (void)setManeuverTurnSide:(int)side;	// 0x35b93db9
// declared property setter: - (void)setManeuverType:(int)type;	// 0x35b93d95
// declared property setter: - (void)setNotices:(id)notices;	// 0x35b954a9
// declared property setter: - (void)setShowInInstructions:(BOOL)instructions;	// 0x35b93b89
// declared property setter: - (void)setStepCues:(id)cues;	// 0x35b9556d
// declared property setter: - (void)setStepType:(int)type;	// 0x35b939dd
// declared property setter: - (void)setStreetViewPanoId:(id)anId;	// 0x35b95475
// declared property setter: - (void)setTransitAgencyIndex:(int)index;	// 0x35b93bad
// declared property getter: - (BOOL)showInInstructions;	// 0x35b93b65
- (id)stepCueAtIndex:(unsigned)index;	// 0x35b93e85
// declared property getter: - (id)stepCues;	// 0x35b9555d
- (unsigned)stepCuesCount;	// 0x35b93e65
// declared property getter: - (int)stepType;	// 0x35b939b9
// declared property getter: - (id)streetViewPanoId;	// 0x35b95465
// declared property getter: - (int)transitAgencyIndex;	// 0x35b95455
- (void)writeTo:(id)to;	// 0x35b94b41
@end
