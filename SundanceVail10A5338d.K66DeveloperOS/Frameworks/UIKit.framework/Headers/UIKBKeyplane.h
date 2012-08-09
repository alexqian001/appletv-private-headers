/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCoding.h"
#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"
#import "NSCopying.h"

@class NSString, NSMutableArray, UIKBIdentifierList, UIKBAttributeList, NSArray;

@interface UIKBKeyplane : NSObject <NSCoding, NSCopying> {
	NSString *m_name;	// 4 = 0x4
	NSMutableArray *m_keylayouts;	// 8 = 0x8
	UIKBAttributeList *m_attributes;	// 12 = 0xc
	UIKBIdentifierList *m_supportedTypes;	// 16 = 0x10
	NSArray *m_keys;	// 20 = 0x14
}
@property(copy, nonatomic) UIKBAttributeList *attributes;	// G=0x30f09c21; S=0x30f09c35; @synthesize=m_attributes
@property(retain, nonatomic) NSArray *keylayouts;	// G=0x30f09c01; S=0x30f09c11; @synthesize=m_keylayouts
@property(readonly, assign, nonatomic) NSArray *keys;	// G=0x30f0927d; 
@property(readonly, assign, nonatomic) NSArray *keysOrderedByPosition;	// G=0x30f09455; 
@property(retain, nonatomic) NSString *name;	// G=0x30f09be1; S=0x30f09bf1; @synthesize=m_name
@property(copy, nonatomic) UIKBIdentifierList *supportedTypes;	// G=0x30f09c45; S=0x30f09c59; @synthesize=m_supportedTypes
+ (id)keyplane;	// 0x30f08b05
- (id)init;	// 0x30f08b4d
- (id)initWithCoder:(id)coder;	// 0x30f08cf9
- (id)initWithName:(id)name keylayouts:(id)keylayouts attributes:(id)attributes supportedTypes:(id)types;	// 0x30f08bb5
- (id)alternateKeyplaneName;	// 0x30f09825
// declared property getter: - (id)attributes;	// 0x30f09c21
- (id)copyWithZone:(NSZone *)zone;	// 0x30f08e55
- (void)dealloc;	// 0x30f08c59
- (id)description;	// 0x30f09745
- (void)encodeWithCoder:(id)coder;	// 0x30f08dbd
- (BOOL)isShiftKeyPlaneChooser;	// 0x30f09969
- (BOOL)isShiftKeyplane;	// 0x30f098cd
- (id)keylayoutWithName:(id)name;	// 0x30f09035
// declared property getter: - (id)keylayouts;	// 0x30f09c01
// declared property getter: - (id)keys;	// 0x30f0927d
- (id)keysByKeyName:(id)name;	// 0x30f09629
// declared property getter: - (id)keysOrderedByPosition;	// 0x30f09455
- (void)layoutInRect:(CGRect)rect;	// 0x30f09119
- (BOOL)looksLike:(id)like;	// 0x30f091e9
- (BOOL)looksLikeShiftAlternate;	// 0x30f09249
// declared property getter: - (id)name;	// 0x30f09be1
- (BOOL)notUseCandidateSelection;	// 0x30f09935
// declared property setter: - (void)setAttributes:(id)attributes;	// 0x30f09c35
// declared property setter: - (void)setKeylayouts:(id)keylayouts;	// 0x30f09c11
// declared property setter: - (void)setName:(id)name;	// 0x30f09bf1
// declared property setter: - (void)setSupportedTypes:(id)types;	// 0x30f09c59
- (id)shiftAlternateKeyplaneName;	// 0x30f09879
- (BOOL)shouldSkipCandidateSelection;	// 0x30f09901
// declared property getter: - (id)supportedTypes;	// 0x30f09c45
- (BOOL)supportsType:(int)type;	// 0x30f09a05
- (BOOL)usesAdaptiveKeys;	// 0x30f0999d
- (BOOL)usesAutoShift;	// 0x30f097f1
- (BOOL)usesKeyCharging;	// 0x30f099d1
@end
