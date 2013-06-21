/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library


@interface GEOPlaceActionDetails : PBCodable {
	unsigned long long _businessID;	// 4 = 0x4
	long long _placeID;	// 12 = 0xc
	double _searchResponseRelativeTimestamp;	// 20 = 0x14
	int _localSearchProviderID;	// 28 = 0x1c
	int _resultIndex;	// 32 = 0x20
	int _sequenceNumber;	// 36 = 0x24
	struct {
		unsigned uID : 1;
		unsigned totalNumberOfPhotos : 1;
		unsigned version : 1;
		unsigned canBeCorrectedByBusinessOwner : 1;
		unsigned isClosed : 1;
		unsigned isUnverified : 1;
	} _has;	// 40 = 0x28
}
@property(assign, nonatomic) unsigned long long businessID;	// G=0x3401df21; S=0x3401cf1d; @synthesize=_businessID
@property(assign, nonatomic) BOOL hasBusinessID;	// G=0x3401cf6d; S=0x3401cf51; 
@property(assign, nonatomic) BOOL hasLocalSearchProviderID;	// G=0x3401d031; S=0x3401d011; 
@property(assign, nonatomic) BOOL hasPlaceID;	// G=0x3401cfd5; S=0x3401cfb5; 
@property(assign, nonatomic) BOOL hasResultIndex;	// G=0x3401d151; S=0x3401d131; 
@property(assign, nonatomic) BOOL hasSearchResponseRelativeTimestamp;	// G=0x3401d0f5; S=0x3401d0d5; 
@property(assign, nonatomic) BOOL hasSequenceNumber;	// G=0x3401d08d; S=0x3401d06d; 
@property(assign, nonatomic) int localSearchProviderID;	// G=0x3401df51; S=0x3401cfe9; @synthesize=_localSearchProviderID
@property(assign, nonatomic) long long placeID;	// G=0x3401df39; S=0x3401cf81; @synthesize=_placeID
@property(assign, nonatomic) int resultIndex;	// G=0x3401df89; S=0x3401d109; @synthesize=_resultIndex
@property(assign, nonatomic) double searchResponseRelativeTimestamp;	// G=0x3401df71; S=0x3401d0a1; @synthesize=_searchResponseRelativeTimestamp
@property(assign, nonatomic) int sequenceNumber;	// G=0x3401df61; S=0x3401d045; @synthesize=_sequenceNumber
// declared property getter: - (unsigned long long)businessID;	// 0x3401df21
- (void)copyTo:(id)to;	// 0x3401da4d
- (void)dealloc;	// 0x3401cef1
- (id)description;	// 0x3401d165
- (id)dictionaryRepresentation;	// 0x3401d1d5
// declared property getter: - (BOOL)hasBusinessID;	// 0x3401cf6d
// declared property getter: - (BOOL)hasLocalSearchProviderID;	// 0x3401d031
// declared property getter: - (BOOL)hasPlaceID;	// 0x3401cfd5
// declared property getter: - (BOOL)hasResultIndex;	// 0x3401d151
// declared property getter: - (BOOL)hasSearchResponseRelativeTimestamp;	// 0x3401d0f5
// declared property getter: - (BOOL)hasSequenceNumber;	// 0x3401d08d
- (unsigned)hash;	// 0x3401dd71
- (BOOL)isEqual:(id)equal;	// 0x3401dbd5
// declared property getter: - (int)localSearchProviderID;	// 0x3401df51
// declared property getter: - (long long)placeID;	// 0x3401df39
- (BOOL)readFrom:(id)from;	// 0x3401d905
// declared property getter: - (int)resultIndex;	// 0x3401df89
// declared property getter: - (double)searchResponseRelativeTimestamp;	// 0x3401df71
// declared property getter: - (int)sequenceNumber;	// 0x3401df61
// declared property setter: - (void)setBusinessID:(unsigned long long)anId;	// 0x3401cf1d
// declared property setter: - (void)setHasBusinessID:(BOOL)anId;	// 0x3401cf51
// declared property setter: - (void)setHasLocalSearchProviderID:(BOOL)anId;	// 0x3401d011
// declared property setter: - (void)setHasPlaceID:(BOOL)anId;	// 0x3401cfb5
// declared property setter: - (void)setHasResultIndex:(BOOL)index;	// 0x3401d131
// declared property setter: - (void)setHasSearchResponseRelativeTimestamp:(BOOL)timestamp;	// 0x3401d0d5
// declared property setter: - (void)setHasSequenceNumber:(BOOL)number;	// 0x3401d06d
// declared property setter: - (void)setLocalSearchProviderID:(int)anId;	// 0x3401cfe9
// declared property setter: - (void)setPlaceID:(long long)anId;	// 0x3401cf81
// declared property setter: - (void)setResultIndex:(int)index;	// 0x3401d109
// declared property setter: - (void)setSearchResponseRelativeTimestamp:(double)timestamp;	// 0x3401d0a1
// declared property setter: - (void)setSequenceNumber:(int)number;	// 0x3401d045
- (void)writeTo:(id)to;	// 0x3401d911
@end
