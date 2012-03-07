/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSMutableArray, NSString, GMMDateTime;

__attribute__((visibility("hidden")))
@interface GMMStep : PBCodable {
@private
	int _stepType;	// 4 = 0x4
	BOOL _hasStepType;	// 8 = 0x8
	NSString *_instructions;	// 12 = 0xc
	int _distanceMeters;	// 16 = 0x10
	BOOL _hasDistanceMeters;	// 20 = 0x14
	int _durationSeconds;	// 24 = 0x18
	BOOL _hasDurationSeconds;	// 28 = 0x1c
	int _departurePointIndex;	// 32 = 0x20
	BOOL _hasDeparturePointIndex;	// 36 = 0x24
	NSString *_departureAddress;	// 40 = 0x28
	NSString *_arrivalAddress;	// 44 = 0x2c
	GMMDateTime *_departureDateTime;	// 48 = 0x30
	GMMDateTime *_arrivalDateTime;	// 52 = 0x34
	int _departureIntervalSeconds;	// 56 = 0x38
	BOOL _hasDepartureIntervalSeconds;	// 60 = 0x3c
	NSString *_direction;	// 64 = 0x40
	long long _iconId;	// 68 = 0x44
	BOOL _hasIconId;	// 76 = 0x4c
	NSString *_iconSummaryText;	// 80 = 0x50
	BOOL _showInInstructions;	// 84 = 0x54
	BOOL _hasShowInInstructions;	// 85 = 0x55
	int _transitAgencyIndex;	// 88 = 0x58
	BOOL _hasTransitAgencyIndex;	// 92 = 0x5c
	NSString *_streetViewPanoId;	// 96 = 0x60
	NSMutableArray *_alertIndexs;	// 100 = 0x64
	NSMutableArray *_notices;	// 104 = 0x68
	int _maneuverType;	// 108 = 0x6c
	BOOL _hasManeuverType;	// 112 = 0x70
	int _maneuverTurnSide;	// 116 = 0x74
	BOOL _hasManeuverTurnSide;	// 120 = 0x78
	int _maneuverTurnNumber;	// 124 = 0x7c
	BOOL _hasManeuverTurnNumber;	// 128 = 0x80
	NSMutableArray *_stepCues;	// 132 = 0x84
	NSString *_deprecatedDistance;	// 136 = 0x88
	NSString *_deprecatedDuration;	// 140 = 0x8c
}
@property(retain, nonatomic) NSMutableArray *alertIndexs;	// G=0x30a79de1; S=0x30a7bd45; @synthesize=_alertIndexs
@property(readonly, assign, nonatomic) int alertIndexsCount;	// G=0x30a7ba71; 
@property(retain, nonatomic) NSString *arrivalAddress;	// G=0x30a79ec1; S=0x30a7bc55; @synthesize=_arrivalAddress
@property(retain, nonatomic) GMMDateTime *arrivalDateTime;	// G=0x30a79ea1; S=0x30a7bca5; @synthesize=_arrivalDateTime
@property(retain, nonatomic) NSString *departureAddress;	// G=0x30a79ed1; S=0x30a7bc2d; @synthesize=_departureAddress
@property(retain, nonatomic) GMMDateTime *departureDateTime;	// G=0x30a79eb1; S=0x30a7bc7d; @synthesize=_departureDateTime
@property(assign, nonatomic) int departureIntervalSeconds;	// G=0x30a79e91; S=0x30a79c11; @synthesize=_departureIntervalSeconds
@property(assign, nonatomic) int departurePointIndex;	// G=0x30a79ef1; S=0x30a79ba5; @synthesize=_departurePointIndex
@property(retain, nonatomic) NSString *deprecatedDistance;	// G=0x30a79d51; S=0x30a7bdbd; @synthesize=_deprecatedDistance
@property(retain, nonatomic) NSString *deprecatedDuration;	// G=0x30a79d41; S=0x30a7bde5; @synthesize=_deprecatedDuration
@property(retain, nonatomic) NSString *direction;	// G=0x30a79e71; S=0x30a7bccd; @synthesize=_direction
@property(assign, nonatomic) int distanceMeters;	// G=0x30a79f31; S=0x30a79b6d; @synthesize=_distanceMeters
@property(assign, nonatomic) int durationSeconds;	// G=0x30a79f11; S=0x30a79b89; @synthesize=_durationSeconds
@property(readonly, assign, nonatomic) BOOL hasArrivalAddress;	// G=0x30a79bd5; 
@property(readonly, assign, nonatomic) BOOL hasArrivalDateTime;	// G=0x30a79bfd; 
@property(readonly, assign, nonatomic) BOOL hasDepartureAddress;	// G=0x30a79bc1; 
@property(readonly, assign, nonatomic) BOOL hasDepartureDateTime;	// G=0x30a79be9; 
@property(readonly, assign, nonatomic) BOOL hasDepartureIntervalSeconds;	// G=0x30a79e81; @synthesize=_hasDepartureIntervalSeconds
@property(readonly, assign, nonatomic) BOOL hasDeparturePointIndex;	// G=0x30a79ee1; @synthesize=_hasDeparturePointIndex
@property(readonly, assign, nonatomic) BOOL hasDeprecatedDistance;	// G=0x30a79d19; 
@property(readonly, assign, nonatomic) BOOL hasDeprecatedDuration;	// G=0x30a79d2d; 
@property(readonly, assign, nonatomic) BOOL hasDirection;	// G=0x30a79c2d; 
@property(readonly, assign, nonatomic) BOOL hasDistanceMeters;	// G=0x30a79f21; @synthesize=_hasDistanceMeters
@property(readonly, assign, nonatomic) BOOL hasDurationSeconds;	// G=0x30a79f01; @synthesize=_hasDurationSeconds
@property(readonly, assign, nonatomic) BOOL hasIconId;	// G=0x30a79e51; @synthesize=_hasIconId
@property(readonly, assign, nonatomic) BOOL hasIconSummaryText;	// G=0x30a79c65; 
@property(readonly, assign, nonatomic) BOOL hasInstructions;	// G=0x30a79b59; 
@property(readonly, assign, nonatomic) BOOL hasManeuverTurnNumber;	// G=0x30a79d71; @synthesize=_hasManeuverTurnNumber
@property(readonly, assign, nonatomic) BOOL hasManeuverTurnSide;	// G=0x30a79d91; @synthesize=_hasManeuverTurnSide
@property(readonly, assign, nonatomic) BOOL hasManeuverType;	// G=0x30a79db1; @synthesize=_hasManeuverType
@property(readonly, assign, nonatomic) BOOL hasShowInInstructions;	// G=0x30a79e21; @synthesize=_hasShowInInstructions
@property(readonly, assign, nonatomic) BOOL hasStepType;	// G=0x30a79f51; @synthesize=_hasStepType
@property(readonly, assign, nonatomic) BOOL hasStreetViewPanoId;	// G=0x30a79cb1; 
@property(readonly, assign, nonatomic) BOOL hasTransitAgencyIndex;	// G=0x30a79e01; @synthesize=_hasTransitAgencyIndex
@property(assign, nonatomic) long long iconId;	// G=0x30a79e61; S=0x30a79c41; @synthesize=_iconId
@property(retain, nonatomic) NSString *iconSummaryText;	// G=0x30a79e41; S=0x30a7bcf5; @synthesize=_iconSummaryText
@property(retain, nonatomic) NSString *instructions;	// G=0x30a79f41; S=0x30a7bc05; @synthesize=_instructions
@property(assign, nonatomic) int maneuverTurnNumber;	// G=0x30a79d81; S=0x30a79cfd; @synthesize=_maneuverTurnNumber
@property(assign, nonatomic) int maneuverTurnSide;	// G=0x30a79da1; S=0x30a79ce1; @synthesize=_maneuverTurnSide
@property(assign, nonatomic) int maneuverType;	// G=0x30a79dc1; S=0x30a79cc5; @synthesize=_maneuverType
@property(retain, nonatomic) NSMutableArray *notices;	// G=0x30a79dd1; S=0x30a7bd6d; @synthesize=_notices
@property(readonly, assign, nonatomic) int noticesCount;	// G=0x30a7b925; 
@property(assign, nonatomic) BOOL showInInstructions;	// G=0x30a79e31; S=0x30a79c79; @synthesize=_showInInstructions
@property(retain, nonatomic) NSMutableArray *stepCues;	// G=0x30a79d61; S=0x30a7bd95; @synthesize=_stepCues
@property(readonly, assign, nonatomic) int stepCuesCount;	// G=0x30a7b805; 
@property(assign, nonatomic) int stepType;	// G=0x30a79f61; S=0x30a79b3d; @synthesize=_stepType
@property(retain, nonatomic) NSString *streetViewPanoId;	// G=0x30a79df1; S=0x30a7bd1d; @synthesize=_streetViewPanoId
@property(assign, nonatomic) int transitAgencyIndex;	// G=0x30a79e11; S=0x30a79c95; @synthesize=_transitAgencyIndex
- (id)init;	// 0x30a7bbb5
- (void)addAlertIndex:(int)index;	// 0x30a7b949
- (void)addNotice:(id)notice;	// 0x30a7b829
- (void)addStepCue:(id)cue;	// 0x30a7b709
- (int)alertIndexAtIndex:(unsigned)index;	// 0x30a7b979
// declared property getter: - (id)alertIndexs;	// 0x30a79de1
// declared property getter: - (int)alertIndexsCount;	// 0x30a7ba71
// declared property getter: - (id)arrivalAddress;	// 0x30a79ec1
// declared property getter: - (id)arrivalDateTime;	// 0x30a79ea1
- (void)dealloc;	// 0x30a7ba95
// declared property getter: - (id)departureAddress;	// 0x30a79ed1
// declared property getter: - (id)departureDateTime;	// 0x30a79eb1
// declared property getter: - (int)departureIntervalSeconds;	// 0x30a79e91
// declared property getter: - (int)departurePointIndex;	// 0x30a79ef1
// declared property getter: - (id)deprecatedDistance;	// 0x30a79d51
// declared property getter: - (id)deprecatedDuration;	// 0x30a79d41
- (id)description;	// 0x30a7a505
- (id)description;	// 0x30a5e751
- (id)dictionaryRepresentation;	// 0x30a79f71
// declared property getter: - (id)direction;	// 0x30a79e71
// declared property getter: - (int)distanceMeters;	// 0x30a79f31
// declared property getter: - (int)durationSeconds;	// 0x30a79f11
// declared property getter: - (BOOL)hasArrivalAddress;	// 0x30a79bd5
// declared property getter: - (BOOL)hasArrivalDateTime;	// 0x30a79bfd
// declared property getter: - (BOOL)hasDepartureAddress;	// 0x30a79bc1
// declared property getter: - (BOOL)hasDepartureDateTime;	// 0x30a79be9
// declared property getter: - (BOOL)hasDepartureIntervalSeconds;	// 0x30a79e81
// declared property getter: - (BOOL)hasDeparturePointIndex;	// 0x30a79ee1
// declared property getter: - (BOOL)hasDeprecatedDistance;	// 0x30a79d19
// declared property getter: - (BOOL)hasDeprecatedDuration;	// 0x30a79d2d
// declared property getter: - (BOOL)hasDirection;	// 0x30a79c2d
// declared property getter: - (BOOL)hasDistanceMeters;	// 0x30a79f21
// declared property getter: - (BOOL)hasDurationSeconds;	// 0x30a79f01
// declared property getter: - (BOOL)hasIconId;	// 0x30a79e51
// declared property getter: - (BOOL)hasIconSummaryText;	// 0x30a79c65
// declared property getter: - (BOOL)hasInstructions;	// 0x30a79b59
// declared property getter: - (BOOL)hasManeuverTurnNumber;	// 0x30a79d71
// declared property getter: - (BOOL)hasManeuverTurnSide;	// 0x30a79d91
// declared property getter: - (BOOL)hasManeuverType;	// 0x30a79db1
// declared property getter: - (BOOL)hasShowInInstructions;	// 0x30a79e21
// declared property getter: - (BOOL)hasStepType;	// 0x30a79f51
// declared property getter: - (BOOL)hasStreetViewPanoId;	// 0x30a79cb1
// declared property getter: - (BOOL)hasTransitAgencyIndex;	// 0x30a79e01
// declared property getter: - (long long)iconId;	// 0x30a79e61
// declared property getter: - (id)iconSummaryText;	// 0x30a79e41
// declared property getter: - (id)instructions;	// 0x30a79f41
// declared property getter: - (int)maneuverTurnNumber;	// 0x30a79d81
// declared property getter: - (int)maneuverTurnSide;	// 0x30a79da1
// declared property getter: - (int)maneuverType;	// 0x30a79dc1
- (id)noticeAtIndex:(unsigned)index;	// 0x30a7b859
// declared property getter: - (id)notices;	// 0x30a79dd1
// declared property getter: - (int)noticesCount;	// 0x30a7b925
- (BOOL)readFrom:(id)from;	// 0x30a7b161
- (void)setAlertIndex:(int)index atIndex:(unsigned)index2;	// 0x30a7b9e9
// declared property setter: - (void)setAlertIndexs:(id)indexs;	// 0x30a7bd45
// declared property setter: - (void)setArrivalAddress:(id)address;	// 0x30a7bc55
// declared property setter: - (void)setArrivalDateTime:(id)time;	// 0x30a7bca5
// declared property setter: - (void)setDepartureAddress:(id)address;	// 0x30a7bc2d
// declared property setter: - (void)setDepartureDateTime:(id)time;	// 0x30a7bc7d
// declared property setter: - (void)setDepartureIntervalSeconds:(int)seconds;	// 0x30a79c11
// declared property setter: - (void)setDeparturePointIndex:(int)index;	// 0x30a79ba5
// declared property setter: - (void)setDeprecatedDistance:(id)distance;	// 0x30a7bdbd
// declared property setter: - (void)setDeprecatedDuration:(id)duration;	// 0x30a7bde5
// declared property setter: - (void)setDirection:(id)direction;	// 0x30a7bccd
// declared property setter: - (void)setDistanceMeters:(int)meters;	// 0x30a79b6d
// declared property setter: - (void)setDurationSeconds:(int)seconds;	// 0x30a79b89
// declared property setter: - (void)setIconId:(long long)anId;	// 0x30a79c41
// declared property setter: - (void)setIconSummaryText:(id)text;	// 0x30a7bcf5
// declared property setter: - (void)setInstructions:(id)instructions;	// 0x30a7bc05
// declared property setter: - (void)setManeuverTurnNumber:(int)number;	// 0x30a79cfd
// declared property setter: - (void)setManeuverTurnSide:(int)side;	// 0x30a79ce1
// declared property setter: - (void)setManeuverType:(int)type;	// 0x30a79cc5
- (void)setNotice:(id)notice atIndex:(unsigned)index;	// 0x30a7b8bd
// declared property setter: - (void)setNotices:(id)notices;	// 0x30a7bd6d
// declared property setter: - (void)setShowInInstructions:(BOOL)instructions;	// 0x30a79c79
- (void)setStepCue:(id)cue atIndex:(unsigned)index;	// 0x30a7b79d
// declared property setter: - (void)setStepCues:(id)cues;	// 0x30a7bd95
// declared property setter: - (void)setStepType:(int)type;	// 0x30a79b3d
// declared property setter: - (void)setStreetViewPanoId:(id)anId;	// 0x30a7bd1d
// declared property setter: - (void)setTransitAgencyIndex:(int)index;	// 0x30a79c95
// declared property getter: - (BOOL)showInInstructions;	// 0x30a79e31
- (id)stepCueAtIndex:(unsigned)index;	// 0x30a7b739
// declared property getter: - (id)stepCues;	// 0x30a79d61
// declared property getter: - (int)stepCuesCount;	// 0x30a7b805
// declared property getter: - (int)stepType;	// 0x30a79f61
// declared property getter: - (id)streetViewPanoId;	// 0x30a79df1
// declared property getter: - (int)transitAgencyIndex;	// 0x30a79e11
- (void)writeTo:(id)to;	// 0x30a7aa4d
@end
