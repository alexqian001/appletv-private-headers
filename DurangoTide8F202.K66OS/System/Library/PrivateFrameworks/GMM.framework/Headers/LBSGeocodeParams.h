/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class LBSUserLocation, LBSGRectangle, NSString;

__attribute__((visibility("hidden")))
@interface LBSGeocodeParams : PBCodable {
@private
	NSString *_resultLanguage;	// 4 = 0x4
	int _numFeatureLimit;	// 8 = 0x8
	BOOL _includeBoundingBoxes;	// 12 = 0xc
	BOOL _hasIncludeBoundingBoxes;	// 13 = 0xd
	LBSUserLocation *_location;	// 16 = 0x10
	LBSGRectangle *_boundingBox;	// 20 = 0x14
	int _addressLinesLimit;	// 24 = 0x18
	BOOL _hasAddressLinesLimit;	// 28 = 0x1c
}
@property(assign, nonatomic) int addressLinesLimit;	// G=0x30a82371; S=0x30a82345; @synthesize=_addressLinesLimit
@property(retain, nonatomic) LBSGRectangle *boundingBox;	// G=0x30a82381; S=0x30a82c15; @synthesize=_boundingBox
@property(readonly, assign, nonatomic) BOOL hasAddressLinesLimit;	// G=0x30a82361; @synthesize=_hasAddressLinesLimit
@property(readonly, assign, nonatomic) BOOL hasBoundingBox;	// G=0x30a82331; 
@property(readonly, assign, nonatomic) BOOL hasIncludeBoundingBoxes;	// G=0x30a823a1; @synthesize=_hasIncludeBoundingBoxes
@property(readonly, assign, nonatomic) BOOL hasLocation;	// G=0x30a8231d; 
@property(assign, nonatomic) BOOL includeBoundingBoxes;	// G=0x30a823b1; S=0x30a82301; @synthesize=_includeBoundingBoxes
@property(retain, nonatomic) LBSUserLocation *location;	// G=0x30a82391; S=0x30a82bed; @synthesize=_location
@property(assign, nonatomic) int numFeatureLimit;	// G=0x30a823c1; S=0x30a823d1; @synthesize=_numFeatureLimit
@property(retain, nonatomic) NSString *resultLanguage;	// G=0x30a823e1; S=0x30a82bc5; @synthesize=_resultLanguage
- (id)init;	// 0x30a82b85
// declared property getter: - (int)addressLinesLimit;	// 0x30a82371
// declared property getter: - (id)boundingBox;	// 0x30a82381
- (void)dealloc;	// 0x30a82b19
- (id)description;	// 0x30a8254d
- (id)dictionaryRepresentation;	// 0x30a823f1
// declared property getter: - (BOOL)hasAddressLinesLimit;	// 0x30a82361
// declared property getter: - (BOOL)hasBoundingBox;	// 0x30a82331
// declared property getter: - (BOOL)hasIncludeBoundingBoxes;	// 0x30a823a1
// declared property getter: - (BOOL)hasLocation;	// 0x30a8231d
// declared property getter: - (BOOL)includeBoundingBoxes;	// 0x30a823b1
// declared property getter: - (id)location;	// 0x30a82391
// declared property getter: - (int)numFeatureLimit;	// 0x30a823c1
- (BOOL)readFrom:(id)from;	// 0x30a828c9
// declared property getter: - (id)resultLanguage;	// 0x30a823e1
// declared property setter: - (void)setAddressLinesLimit:(int)limit;	// 0x30a82345
// declared property setter: - (void)setBoundingBox:(id)box;	// 0x30a82c15
// declared property setter: - (void)setIncludeBoundingBoxes:(BOOL)boxes;	// 0x30a82301
// declared property setter: - (void)setLocation:(id)location;	// 0x30a82bed
// declared property setter: - (void)setNumFeatureLimit:(int)limit;	// 0x30a823d1
// declared property setter: - (void)setResultLanguage:(id)language;	// 0x30a82bc5
- (void)writeTo:(id)to;	// 0x30a826ed
@end
