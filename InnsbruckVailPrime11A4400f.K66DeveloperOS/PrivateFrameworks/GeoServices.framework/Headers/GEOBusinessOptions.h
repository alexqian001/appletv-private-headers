/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface GEOBusinessOptions : PBCodable {
	NSMutableArray *_attributeKeys;	// 4 = 0x4
	int _maxBusinessResults;	// 8 = 0x8
	NSMutableArray *_photoOptions;	// 12 = 0xc
	BOOL _includeBusinessHours;	// 16 = 0x10
	BOOL _includeCenter;	// 17 = 0x11
	XXStruct_H_8QpB _has;	// 18 = 0x12
}
@property(retain, nonatomic) NSMutableArray *attributeKeys;	// G=0x30f41479; S=0x30ea93f1; @synthesize=_attributeKeys
@property(assign, nonatomic) BOOL hasIncludeBusinessHours;	// G=0x30f40d51; S=0x30f40d31; 
@property(assign, nonatomic) BOOL hasIncludeCenter;	// G=0x30f40e31; S=0x30f40e11; 
@property(assign, nonatomic) BOOL hasMaxBusinessResults;	// G=0x30f40dd5; S=0x30f40db9; 
@property(assign, nonatomic) BOOL includeBusinessHours;	// G=0x30f41489; S=0x30ea9061; @synthesize=_includeBusinessHours
@property(assign, nonatomic) BOOL includeCenter;	// G=0x30f41499; S=0x30f40de9; @synthesize=_includeCenter
@property(assign, nonatomic) int maxBusinessResults;	// G=0x30f40d69; S=0x30f40d91; @synthesize=_maxBusinessResults
@property(retain, nonatomic) NSMutableArray *photoOptions;	// G=0x30f41469; S=0x30ea93a1; @synthesize=_photoOptions
- (void)addAttributeKey:(id)key;	// 0x30ea3d1d
- (void)addPhotoOptions:(id)options;	// 0x30ea38b9
- (id)attributeKeyAtIndex:(unsigned)index;	// 0x30f40d11
// declared property getter: - (id)attributeKeys;	// 0x30f41479
- (unsigned)attributeKeysCount;	// 0x30f40cf1
- (void)clearAttributeKeys;	// 0x30f40cd1
- (void)clearPhotoOptions;	// 0x30f40c71
- (void)copyTo:(id)to;	// 0x30f41185
- (void)dealloc;	// 0x30ea9349
- (id)description;	// 0x30f40e49
- (id)dictionaryRepresentation;	// 0x30f40eb9
// declared property getter: - (BOOL)hasIncludeBusinessHours;	// 0x30f40d51
// declared property getter: - (BOOL)hasIncludeCenter;	// 0x30f40e31
// declared property getter: - (BOOL)hasMaxBusinessResults;	// 0x30f40dd5
- (unsigned)hash;	// 0x30eafe19
// declared property getter: - (BOOL)includeBusinessHours;	// 0x30f41489
// declared property getter: - (BOOL)includeCenter;	// 0x30f41499
- (BOOL)isEqual:(id)equal;	// 0x30f41331
// declared property getter: - (int)maxBusinessResults;	// 0x30f40d69
// declared property getter: - (id)photoOptions;	// 0x30f41469
- (id)photoOptionsAtIndex:(unsigned)index;	// 0x30f40cb1
- (unsigned)photoOptionsCount;	// 0x30f40c91
- (BOOL)readFrom:(id)from;	// 0x30f41179
// declared property setter: - (void)setAttributeKeys:(id)keys;	// 0x30ea93f1
// declared property setter: - (void)setHasIncludeBusinessHours:(BOOL)hours;	// 0x30f40d31
// declared property setter: - (void)setHasIncludeCenter:(BOOL)center;	// 0x30f40e11
// declared property setter: - (void)setHasMaxBusinessResults:(BOOL)results;	// 0x30f40db9
// declared property setter: - (void)setIncludeBusinessHours:(BOOL)hours;	// 0x30ea9061
// declared property setter: - (void)setIncludeCenter:(BOOL)center;	// 0x30f40de9
// declared property setter: - (void)setMaxBusinessResults:(int)results;	// 0x30f40d91
// declared property setter: - (void)setPhotoOptions:(id)options;	// 0x30ea93a1
- (void)writeTo:(id)to;	// 0x30eaab65
@end
