/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class LBSUserLocation, LBSGRectangle, NSString;

@interface LBSGeocodeParams : PBCodable {
	NSString *_resultLanguage;	// 4 = 0x4
	int _numFeatureLimit;	// 8 = 0x8
	BOOL _hasIncludeBoundingBoxes;	// 12 = 0xc
	BOOL _includeBoundingBoxes;	// 13 = 0xd
	LBSUserLocation *_location;	// 16 = 0x10
	LBSGRectangle *_boundingBox;	// 20 = 0x14
	BOOL _hasAddressLinesLimit;	// 24 = 0x18
	int _addressLinesLimit;	// 28 = 0x1c
}
@property(assign, nonatomic) int addressLinesLimit;	// G=0x33cd90f1; S=0x33cd9115; @synthesize=_addressLinesLimit
@property(retain, nonatomic) LBSGRectangle *boundingBox;	// G=0x33cd9849; S=0x33cd9859; @synthesize=_boundingBox
@property(assign, nonatomic) BOOL hasAddressLinesLimit;	// G=0x33cd987d; S=0x33cd988d; @synthesize=_hasAddressLinesLimit
@property(readonly, assign, nonatomic) BOOL hasBoundingBox;	// G=0x33cd90d9; 
@property(assign, nonatomic) BOOL hasIncludeBoundingBoxes;	// G=0x33cd97e5; S=0x33cd97f5; @synthesize=_hasIncludeBoundingBoxes
@property(readonly, assign, nonatomic) BOOL hasLocation;	// G=0x33cd90c1; 
@property(assign, nonatomic) BOOL includeBoundingBoxes;	// G=0x33cd9805; S=0x33cd909d; @synthesize=_includeBoundingBoxes
@property(retain, nonatomic) LBSUserLocation *location;	// G=0x33cd9815; S=0x33cd9825; @synthesize=_location
@property(assign, nonatomic) int numFeatureLimit;	// G=0x33cd97c5; S=0x33cd97d5; @synthesize=_numFeatureLimit
@property(retain, nonatomic) NSString *resultLanguage;	// G=0x33cd9791; S=0x33cd97a1; @synthesize=_resultLanguage
// declared property getter: - (int)addressLinesLimit;	// 0x33cd90f1
// declared property getter: - (id)boundingBox;	// 0x33cd9849
- (void)dealloc;	// 0x33cd9031
- (id)description;	// 0x33cd9139
- (id)dictionaryRepresentation;	// 0x33cd91a9
// declared property getter: - (BOOL)hasAddressLinesLimit;	// 0x33cd987d
// declared property getter: - (BOOL)hasBoundingBox;	// 0x33cd90d9
// declared property getter: - (BOOL)hasIncludeBoundingBoxes;	// 0x33cd97e5
// declared property getter: - (BOOL)hasLocation;	// 0x33cd90c1
// declared property getter: - (BOOL)includeBoundingBoxes;	// 0x33cd9805
// declared property getter: - (id)location;	// 0x33cd9815
// declared property getter: - (int)numFeatureLimit;	// 0x33cd97c5
- (BOOL)readFrom:(id)from;	// 0x33cd9319
// declared property getter: - (id)resultLanguage;	// 0x33cd9791
// declared property setter: - (void)setAddressLinesLimit:(int)limit;	// 0x33cd9115
// declared property setter: - (void)setBoundingBox:(id)box;	// 0x33cd9859
// declared property setter: - (void)setHasAddressLinesLimit:(BOOL)limit;	// 0x33cd988d
// declared property setter: - (void)setHasIncludeBoundingBoxes:(BOOL)boxes;	// 0x33cd97f5
// declared property setter: - (void)setIncludeBoundingBoxes:(BOOL)boxes;	// 0x33cd909d
// declared property setter: - (void)setLocation:(id)location;	// 0x33cd9825
// declared property setter: - (void)setNumFeatureLimit:(int)limit;	// 0x33cd97d5
// declared property setter: - (void)setResultLanguage:(id)language;	// 0x33cd97a1
- (void)writeTo:(id)to;	// 0x33cd95b5
@end
