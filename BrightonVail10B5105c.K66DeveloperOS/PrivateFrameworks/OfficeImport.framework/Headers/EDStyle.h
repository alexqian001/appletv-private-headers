/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "NSCopying.h"
#import "EDImmutableObject.h"
#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class EDResources, EDProtection;

@interface EDStyle : NSObject <NSCopying, EDImmutableObject> {
	EDResources *mResources;	// 4 = 0x4
	unsigned mParentIndex;	// 8 = 0x8
	unsigned mContentFormatId;	// 12 = 0xc
	unsigned mFontIndex;	// 16 = 0x10
	unsigned mFillIndex;	// 20 = 0x14
	unsigned mAlignmentInfoIndex;	// 24 = 0x18
	unsigned mBordersIndex;	// 28 = 0x1c
	EDProtection *mProtection;	// 32 = 0x20
	unsigned mIndex;	// 36 = 0x24
	bool mContentFormatOverridden;	// 40 = 0x28
	bool mFontOverridden;	// 41 = 0x29
	bool mFillOverridden;	// 42 = 0x2a
	bool mAlignmentInfoOverridden;	// 43 = 0x2b
	bool mBordersOverridden;	// 44 = 0x2c
	bool mProtectionOverridden;	// 45 = 0x2d
	bool mDoNotModify;	// 46 = 0x2e
}
@property(retain) id alignmentInfo;	// G=0x379608d1; S=0x3793e14d; converted property
@property(assign) unsigned alignmentInfoIndex;	// G=0x37ad2d15; S=0x37ad2d25; converted property
@property(assign, getter=isAlignmentInfoOverridden) bool alignmentInfoOverridden;	// G=0x379608bd; S=0x3793eea5; converted property
@property(retain) id borders;	// G=0x3796aa89; S=0x3793e98d; converted property
@property(assign) unsigned bordersIndex;	// G=0x37ad2cf5; S=0x379afaad; converted property
@property(assign, getter=isBordersOverridden) bool bordersOverridden;	// G=0x37961845; S=0x3793eecd; converted property
@property(retain) id contentFormat;	// G=0x37963235; S=0x37ad2b45; converted property
@property(assign) unsigned contentFormatId;	// G=0x37963225; S=0x3793ee45; converted property
@property(assign, getter=isContentFormatOverridden) bool contentFormatOverridden;	// G=0x37963211; S=0x3793ef45; converted property
@property(retain) id fill;	// G=0x37961859; S=0x3793ec45; converted property
@property(assign) unsigned fillIndex;	// G=0x37ad2d05; S=0x379afae5; converted property
@property(assign, getter=isFillOverridden) bool fillOverridden;	// G=0x37ad2bf5; S=0x3793eef5; converted property
@property(retain) id font;	// G=0x3795e6d9; S=0x37a5d131; converted property
@property(assign) unsigned fontIndex;	// G=0x37ad2cd5; S=0x3793de25; converted property
@property(assign, getter=isFontOverridden) bool fontOverridden;	// G=0x37963c55; S=0x3793ee7d; converted property
@property(assign) unsigned index;	// G=0x37962e9d; S=0x3793efcd; converted property
@property(retain) id parent;	// G=0x37ad2c2d; S=0x37ad2c75; converted property
@property(assign) unsigned parentIndex;	// G=0x37ad2ce5; S=0x3793ddc9; converted property
@property(retain) id protection;	// G=0x37ad2c1d; S=0x3793eddd; converted property
@property(assign, getter=isProtectionOverridden) bool protectionOverridden;	// G=0x37ad2c09; S=0x3793ef1d; converted property
+ (id)styleWithResources:(id)resources;	// 0x37ad2a8d
- (id)initWithResources:(id)resources;	// 0x3793dbf5
// converted property getter: - (id)alignmentInfo;	// 0x379608d1
// converted property getter: - (unsigned)alignmentInfoIndex;	// 0x37ad2d15
// converted property getter: - (id)borders;	// 0x3796aa89
// converted property getter: - (unsigned)bordersIndex;	// 0x37ad2cf5
// converted property getter: - (id)contentFormat;	// 0x37963235
// converted property getter: - (unsigned)contentFormatId;	// 0x37963225
- (id)copyWithZone:(NSZone *)zone;	// 0x37a5c599
- (void)dealloc;	// 0x37966b5d
// converted property getter: - (id)fill;	// 0x37961859
// converted property getter: - (unsigned)fillIndex;	// 0x37ad2d05
// converted property getter: - (id)font;	// 0x3795e6d9
// converted property getter: - (unsigned)fontIndex;	// 0x37ad2cd5
- (unsigned)hash;	// 0x37ad2ad9
// converted property getter: - (unsigned)index;	// 0x37962e9d
// converted property getter: - (bool)isAlignmentInfoOverridden;	// 0x379608bd
// converted property getter: - (bool)isBordersOverridden;	// 0x37961845
// converted property getter: - (bool)isContentFormatOverridden;	// 0x37963211
- (BOOL)isEqual:(id)equal;	// 0x37a5d1e1
- (BOOL)isEqualToStyle:(id)style;	// 0x37a5d23d
- (BOOL)isEquivalentToStyle:(id)style;	// 0x37a5d311
// converted property getter: - (bool)isFillOverridden;	// 0x37ad2bf5
// converted property getter: - (bool)isFontOverridden;	// 0x37963c55
// converted property getter: - (bool)isProtectionOverridden;	// 0x37ad2c09
// converted property getter: - (id)parent;	// 0x37ad2c2d
// converted property getter: - (unsigned)parentIndex;	// 0x37ad2ce5
// converted property getter: - (id)protection;	// 0x37ad2c1d
// converted property setter: - (void)setAlignmentInfo:(id)info;	// 0x3793e14d
// converted property setter: - (void)setAlignmentInfoIndex:(unsigned)index;	// 0x37ad2d25
// converted property setter: - (void)setAlignmentInfoOverridden:(bool)overridden;	// 0x3793eea5
// converted property setter: - (void)setBorders:(id)borders;	// 0x3793e98d
// converted property setter: - (void)setBordersIndex:(unsigned)index;	// 0x379afaad
// converted property setter: - (void)setBordersOverridden:(bool)overridden;	// 0x3793eecd
// converted property setter: - (void)setContentFormat:(id)format;	// 0x37ad2b45
// converted property setter: - (void)setContentFormatId:(unsigned)anId;	// 0x3793ee45
// converted property setter: - (void)setContentFormatOverridden:(bool)overridden;	// 0x3793ef45
- (void)setDoNotModify:(bool)modify;	// 0x3793efbd
// converted property setter: - (void)setFill:(id)fill;	// 0x3793ec45
// converted property setter: - (void)setFillIndex:(unsigned)index;	// 0x379afae5
// converted property setter: - (void)setFillOverridden:(bool)overridden;	// 0x3793eef5
// converted property setter: - (void)setFont:(id)font;	// 0x37a5d131
// converted property setter: - (void)setFontIndex:(unsigned)index;	// 0x3793de25
// converted property setter: - (void)setFontOverridden:(bool)overridden;	// 0x3793ee7d
// converted property setter: - (void)setIndex:(unsigned)index;	// 0x3793efcd
// converted property setter: - (void)setParent:(id)parent;	// 0x37ad2c75
// converted property setter: - (void)setParentIndex:(unsigned)index;	// 0x3793ddc9
// converted property setter: - (void)setProtection:(id)protection;	// 0x3793eddd
// converted property setter: - (void)setProtectionOverridden:(bool)overridden;	// 0x3793ef1d
@end

