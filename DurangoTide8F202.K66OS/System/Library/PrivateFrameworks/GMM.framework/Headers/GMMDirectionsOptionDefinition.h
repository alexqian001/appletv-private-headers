/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface GMMDirectionsOptionDefinition : PBCodable {
@private
	int _iD;	// 4 = 0x4
	NSString *_optionText;	// 8 = 0x8
	int _type;	// 12 = 0xc
	NSMutableArray *_allowableValuess;	// 16 = 0x10
	int _defaultValue;	// 20 = 0x14
}
@property(retain, nonatomic) NSMutableArray *allowableValuess;	// G=0x30a7389d; S=0x30a740a5; @synthesize=_allowableValuess
@property(readonly, assign, nonatomic) int allowableValuessCount;	// G=0x30a73ffd; 
@property(assign, nonatomic) int defaultValue;	// G=0x30a7387d; S=0x30a7388d; @synthesize=_defaultValue
@property(assign, nonatomic) int iD;	// G=0x30a738dd; S=0x30a738ed; @synthesize=_iD
@property(retain, nonatomic) NSString *optionText;	// G=0x30a738cd; S=0x30a7407d; @synthesize=_optionText
@property(assign, nonatomic) int type;	// G=0x30a738ad; S=0x30a738bd; @synthesize=_type
- (id)init;	// 0x30a738fd
- (void)addAllowableValues:(id)values;	// 0x30a73f01
- (id)allowableValuesAtIndex:(unsigned)index;	// 0x30a73f31
// declared property getter: - (id)allowableValuess;	// 0x30a7389d
// declared property getter: - (int)allowableValuessCount;	// 0x30a73ffd
- (void)dealloc;	// 0x30a74021
// declared property getter: - (int)defaultValue;	// 0x30a7387d
- (id)description;	// 0x30a73a25
- (id)dictionaryRepresentation;	// 0x30a73929
// declared property getter: - (int)iD;	// 0x30a738dd
// declared property getter: - (id)optionText;	// 0x30a738cd
- (BOOL)readFrom:(id)from;	// 0x30a73d2d
- (void)setAllowableValues:(id)values atIndex:(unsigned)index;	// 0x30a73f95
// declared property setter: - (void)setAllowableValuess:(id)valuess;	// 0x30a740a5
// declared property setter: - (void)setDefaultValue:(int)value;	// 0x30a7388d
// declared property setter: - (void)setID:(int)anId;	// 0x30a738ed
// declared property setter: - (void)setOptionText:(id)text;	// 0x30a7407d
// declared property setter: - (void)setType:(int)type;	// 0x30a738bd
// declared property getter: - (int)type;	// 0x30a738ad
- (void)writeTo:(id)to;	// 0x30a73ba1
@end
