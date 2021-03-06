/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADDrawableProperties.h"
#import "OADEffectsParent.h"

@class OADTableStyle, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface OADTableProperties : OADDrawableProperties <OADEffectsParent> {
@private
	NSString *mStyleId;	// 28 = 0x1c
	OADTableStyle *mStyle;	// 32 = 0x20
	BOOL mRightToLeft;	// 36 = 0x24
	BOOL mFirstRow;	// 37 = 0x25
	BOOL mFirstColumn;	// 38 = 0x26
	BOOL mLastRow;	// 39 = 0x27
	BOOL mLastColumn;	// 40 = 0x28
	BOOL mBandRow;	// 41 = 0x29
	BOOL mBandColumn;	// 42 = 0x2a
	NSArray *mEffects;	// 44 = 0x2c
}
@property(assign) BOOL bandColumn;	// G=0x31256ad1; S=0x31194961; converted property
@property(assign) BOOL bandRow;	// G=0x311970c9; S=0x31194971; converted property
@property(retain) id effects;	// G=0x31256b45; S=0x31194991; converted property
@property(assign) BOOL firstColumn;	// G=0x31256aa1; S=0x31194921; converted property
@property(assign) BOOL firstRow;	// G=0x3119604d; S=0x31194931; converted property
@property(assign) BOOL lastColumn;	// G=0x31256ac1; S=0x31194941; converted property
@property(assign) BOOL lastRow;	// G=0x31256ab1; S=0x31194951; converted property
@property(assign) BOOL rightToLeft;	// G=0x31256a91; S=0x31194981; converted property
@property(retain) id style;	// G=0x31195b71; S=0x311949cd; converted property
@property(retain) id styleId;	// G=0x31256a81; S=0x31190f95; converted property
+ (id)defaultProperties;	// 0x31190d5d
- (id)initWithDefaults;	// 0x31190da5
// converted property getter: - (BOOL)bandColumn;	// 0x31256ad1
// converted property getter: - (BOOL)bandRow;	// 0x311970c9
- (void)dealloc;	// 0x31191dfd
// converted property getter: - (id)effects;	// 0x31256b45
// converted property getter: - (BOOL)firstColumn;	// 0x31256aa1
// converted property getter: - (BOOL)firstRow;	// 0x3119604d
- (BOOL)hasBandsNormalToDir:(int)dir;	// 0x31256ae1
- (BOOL)hasEffects;	// 0x31256b75
- (BOOL)hasVectorNormalToDir:(int)dir atExtremePos:(int)extremePos;	// 0x31256b05
// converted property getter: - (BOOL)lastColumn;	// 0x31256ac1
// converted property getter: - (BOOL)lastRow;	// 0x31256ab1
// converted property getter: - (BOOL)rightToLeft;	// 0x31256a91
// converted property setter: - (void)setBandColumn:(BOOL)column;	// 0x31194961
// converted property setter: - (void)setBandRow:(BOOL)row;	// 0x31194971
// converted property setter: - (void)setEffects:(id)effects;	// 0x31194991
// converted property setter: - (void)setFirstColumn:(BOOL)column;	// 0x31194921
// converted property setter: - (void)setFirstRow:(BOOL)row;	// 0x31194931
// converted property setter: - (void)setLastColumn:(BOOL)column;	// 0x31194941
// converted property setter: - (void)setLastRow:(BOOL)row;	// 0x31194951
// converted property setter: - (void)setRightToLeft:(BOOL)left;	// 0x31194981
// converted property setter: - (void)setStyle:(id)style;	// 0x311949cd
// converted property setter: - (void)setStyleId:(id)anId;	// 0x31190f95
// converted property getter: - (id)style;	// 0x31195b71
// converted property getter: - (id)styleId;	// 0x31256a81
@end

