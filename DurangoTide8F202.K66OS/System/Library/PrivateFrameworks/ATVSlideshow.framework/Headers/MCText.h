/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCObject.h"

@class NSMutableArray, MCContainerEffect, MCAsset, NSString, NSAttributedString;

@interface MCText : MCObject {
	unsigned mIndex;	// 12 = 0xc
	NSMutableArray *mStringAttributes;	// 16 = 0x10
	MCAsset *mAsset;	// 20 = 0x14
	NSString *mKeyInAsset;	// 24 = 0x18
	MCContainerEffect *mContainer;	// 28 = 0x1c
}
@property(retain, nonatomic) MCAsset *asset;	// G=0x31556695; S=0x3155678d; 
@property(copy) NSAttributedString *attributedString;	// G=0x31556921; S=0x31556935; @dynamic
@property(assign) MCContainerEffect *container;	// G=0x315569d9; S=0x315569e9; @synthesize=mContainer
@property(assign, nonatomic) unsigned index;	// G=0x31556975; S=0x31556985; @synthesize=mIndex
@property(copy) NSString *keyInAsset;	// G=0x31556995; S=0x315569ad; @synthesize=mKeyInAsset
@property(copy) NSMutableArray *stringAttributes;	// G=0x315569f9; S=0x31556a11; @synthesize=mStringAttributes
+ (id)attributedStringWithCTAttributesFromStringAttributes:(id)stringAttributes;	// 0x31557871
+ (id)attributedStringWithNSAttributesFromStringAttributes:(id)stringAttributes;	// 0x31557f89
+ (int)ligatureFromString:(id)string;	// 0x31556cd1
+ (id)stretchForFontDisplayName:(id)fontDisplayName andFamilyName:(id)name;	// 0x31556bbd
+ (id)stringAttributesWithAttributedString:(id)attributedString;	// 0x31557789
+ (id)stringFromLigature:(int)ligature;	// 0x31556d41
+ (id)stringFromTextAlignment:(int)textAlignment;	// 0x31556cad
+ (id)styleForFontDisplayName:(id)fontDisplayName andFamilyName:(id)name;	// 0x31556a3d
+ (int)textAlignmentFromString:(id)string;	// 0x31556c3d
+ (id)textFormatFromUnderlineStyle:(unsigned)underlineStyle;	// 0x31556edd
+ (id)textFormatWithCTAttributesForText:(id)text attributes:(id)attributes;	// 0x31557069
+ (id)textFormatWithNSAttributesForText:(id)text attributes:(id)attributes;	// 0x31557769
+ (unsigned)underlineStyleFromTextFormat:(id)textFormat;	// 0x31556d75
+ (id)weightForFontDisplayName:(id)fontDisplayName andFamilyName:(id)name;	// 0x31556afd
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x3155634d
// declared property getter: - (id)asset;	// 0x31556695
// declared property getter: - (id)attributedString;	// 0x31556921
- (id)attributedStringWithCTAttributes;	// 0x315568f1
// declared property getter: - (id)container;	// 0x315569d9
- (void)demolish;	// 0x31556495
- (id)imprint;	// 0x31556549
// declared property getter: - (unsigned)index;	// 0x31556975
// declared property getter: - (id)keyInAsset;	// 0x31556995
// declared property setter: - (void)setAsset:(id)asset;	// 0x3155678d
// declared property setter: - (void)setAttributedString:(id)string;	// 0x31556935
// declared property setter: - (void)setContainer:(id)container;	// 0x315569e9
// declared property setter: - (void)setIndex:(unsigned)index;	// 0x31556985
// declared property setter: - (void)setKeyInAsset:(id)asset;	// 0x315569ad
// declared property setter: - (void)setStringAttributes:(id)attributes;	// 0x31556a11
// declared property getter: - (id)stringAttributes;	// 0x315569f9
@end

