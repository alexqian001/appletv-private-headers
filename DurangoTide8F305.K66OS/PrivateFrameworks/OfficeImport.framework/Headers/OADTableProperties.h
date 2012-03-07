/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADDrawableProperties.h"
#import "OADEffectsParent.h"

@class NSString, OADTableStyle, NSArray;

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
@property(assign) BOOL bandColumn;	// G=0x3458fcf5; S=0x3454ee29; converted property
@property(assign) BOOL bandRow;	// G=0x3454fb71; S=0x3454ee39; converted property
@property(retain) id effects;	// G=0x3458fe11; S=0x3454ee59; converted property
@property(assign) BOOL firstColumn;	// G=0x3458fcc5; S=0x3454ede9; converted property
@property(assign) BOOL firstRow;	// G=0x344ce171; S=0x3454edf9; converted property
@property(assign) BOOL lastColumn;	// G=0x3458fce5; S=0x3454ee09; converted property
@property(assign) BOOL lastRow;	// G=0x3458fcd5; S=0x3454ee19; converted property
@property(assign) BOOL rightToLeft;	// G=0x3458fcb5; S=0x3454ee49; converted property
@property(retain) id style;	// G=0x344cdd01; S=0x3454ee91; converted property
@property(retain) id styleId;	// G=0x3458fca5; S=0x344cc031; converted property
+ (id)defaultProperties;	// 0x344cbe45
- (id)initWithDefaults;	// 0x344cbe89
// converted property getter: - (BOOL)bandColumn;	// 0x3458fcf5
// converted property getter: - (BOOL)bandRow;	// 0x3454fb71
- (void)dealloc;	// 0x344cf7d5
// converted property getter: - (id)effects;	// 0x3458fe11
// converted property getter: - (BOOL)firstColumn;	// 0x3458fcc5
// converted property getter: - (BOOL)firstRow;	// 0x344ce171
- (BOOL)hasBandsNormalToDir:(int)dir;	// 0x3458fe79
- (BOOL)hasEffects;	// 0x3458fddd
- (BOOL)hasVectorNormalToDir:(int)dir atExtremePos:(int)extremePos;	// 0x3458fe3d
// converted property getter: - (BOOL)lastColumn;	// 0x3458fce5
// converted property getter: - (BOOL)lastRow;	// 0x3458fcd5
// converted property getter: - (BOOL)rightToLeft;	// 0x3458fcb5
// converted property setter: - (void)setBandColumn:(BOOL)column;	// 0x3454ee29
// converted property setter: - (void)setBandRow:(BOOL)row;	// 0x3454ee39
// converted property setter: - (void)setEffects:(id)effects;	// 0x3454ee59
// converted property setter: - (void)setFirstColumn:(BOOL)column;	// 0x3454ede9
// converted property setter: - (void)setFirstRow:(BOOL)row;	// 0x3454edf9
// converted property setter: - (void)setLastColumn:(BOOL)column;	// 0x3454ee09
// converted property setter: - (void)setLastRow:(BOOL)row;	// 0x3454ee19
// converted property setter: - (void)setRightToLeft:(BOOL)left;	// 0x3454ee49
// converted property setter: - (void)setStyle:(id)style;	// 0x3454ee91
// converted property setter: - (void)setStyleId:(id)anId;	// 0x344cc031
// converted property getter: - (id)style;	// 0x344cdd01
// converted property getter: - (id)styleId;	// 0x3458fca5
@end
