/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSString, NSMutableArray;

__attribute__((visibility("hidden")))
@interface GMMDirectionsOptionDefinition : PBCodable {
	int _optionID;	// 4 = 0x4
	NSString *_optionText;	// 8 = 0x8
	int _type;	// 12 = 0xc
	NSMutableArray *_allowableValues;	// 16 = 0x10
	int _defaultValue;	// 20 = 0x14
}
@property(retain, nonatomic) NSMutableArray *allowableValues;	// G=0x3384ec0d; S=0x3384ec1d; @synthesize=_allowableValues
@property(assign, nonatomic) int defaultValue;	// G=0x3384ec41; S=0x3384ec51; @synthesize=_defaultValue
@property(assign, nonatomic) int optionID;	// G=0x3384eb99; S=0x3384eba9; @synthesize=_optionID
@property(retain, nonatomic) NSString *optionText;	// G=0x3384ebb9; S=0x3384ebc9; @synthesize=_optionText
@property(assign, nonatomic) int type;	// G=0x3384ebed; S=0x3384ebfd; @synthesize=_type
- (void)addAllowableValues:(id)values;	// 0x3384e669
// declared property getter: - (id)allowableValues;	// 0x3384ec0d
- (id)allowableValuesAtIndex:(unsigned)index;	// 0x3384e6ed
- (unsigned)allowableValuesCount;	// 0x3384e6cd
- (void)dealloc;	// 0x3384e611
// declared property getter: - (int)defaultValue;	// 0x3384ec41
- (id)description;	// 0x3384e70d
- (id)dictionaryRepresentation;	// 0x3384e77d
// declared property getter: - (int)optionID;	// 0x3384eb99
// declared property getter: - (id)optionText;	// 0x3384ebb9
- (BOOL)readFrom:(id)from;	// 0x3384e899
// declared property setter: - (void)setAllowableValues:(id)values;	// 0x3384ec1d
// declared property setter: - (void)setDefaultValue:(int)value;	// 0x3384ec51
// declared property setter: - (void)setOptionID:(int)anId;	// 0x3384eba9
// declared property setter: - (void)setOptionText:(id)text;	// 0x3384ebc9
// declared property setter: - (void)setType:(int)type;	// 0x3384ebfd
// declared property getter: - (int)type;	// 0x3384ebed
- (void)writeTo:(id)to;	// 0x3384ea45
@end

