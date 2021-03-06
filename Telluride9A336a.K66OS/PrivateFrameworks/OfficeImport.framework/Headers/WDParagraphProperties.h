/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class WDDocument, WDCharacterProperties;

__attribute__((visibility("hidden")))
@interface WDParagraphProperties : NSObject <NSCopying> {
@private
	WDDocument *mDocument;	// 4 = 0x4
	WDCharacterProperties *mCharacterProperties;	// 8 = 0x8
	unsigned mCharacterPropertiesOverridden : 1;	// 12 = 0xc
	unsigned mOriginal : 1;	// 12 = 0xc
	unsigned mTracked : 1;	// 12 = 0xc
	unsigned mResolved : 1;	// 12 = 0xc
	XXStruct_oPtw4B *mOriginalProperties;	// 16 = 0x10
	XXStruct_oPtw4B *mTrackedProperties;	// 20 = 0x14
}
@property(assign) BOOL anchorLock;	// G=0x34e0cc89; S=0x34c9dc55; converted property
@property(retain) id baseStyle;	// G=0x34c11025; S=0x34caa315; converted property
@property(retain) id characterProperties;	// G=0x34c126e9; S=0x34cb243d; converted property
@property(assign) XXStruct_BOQfuC dropCap;	// G=0x34e0c2e9; S=0x34c9cd15; converted property
@property(assign) short firstLineIndent;	// G=0x34c1e641; S=0x34c9f65d; converted property
@property(assign) int formattingChanged;	// G=0x34e0e12d; S=0x34d67fb9; converted property
@property(assign) long height;	// G=0x34e0c455; S=0x34c9cff5; converted property
@property(assign) int heightRule;	// G=0x34e0c5ad; S=0x34c9d15d; converted property
@property(assign) int horizontalAnchor;	// G=0x34cc1621; S=0x34c9d6dd; converted property
@property(assign) long horizontalPosition;	// G=0x34d30879; S=0x34c9d99d; converted property
@property(assign) long horizontalSpace;	// G=0x34e0c869; S=0x34c9d419; converted property
@property(assign) int justification;	// G=0x34cb5099; S=0x34c9f7bd; converted property
@property(assign) BOOL keepLinesTogether;	// G=0x34e0da3d; S=0x34cce59d; converted property
@property(assign) BOOL keepNextParagraphTogether;	// G=0x34e0d8d9; S=0x34cab015; converted property
@property(assign) short leftIndent;	// G=0x34c1e5a5; S=0x34c9f39d; converted property
@property(assign) short lineSpacing;	// G=0x34cc14c9; S=0x34c9f0dd; converted property
@property(assign) int lineSpacingRule;	// G=0x34d0c541; S=0x34c9f23d; converted property
@property(retain) id list;	// G=0x34c1ee61; S=0x34e0ec2d; converted property
@property(assign) int listIndex;	// G=0x34c1ec2d; S=0x34c9cbb1; converted property
@property(assign) unsigned char listLevel;	// G=0x34c1ed05; S=0x34c9ca49; converted property
@property(assign) unsigned short outlineLevel;	// G=0x34e0d779; S=0x34caaeb5; converted property
@property(assign, getter=isPageBreakBefore) BOOL pageBreakBefore;	// G=0x34e0c181; S=0x34c9c8c1; converted property
@property(assign) int resolveMode;	// G=0x34d0c63d; S=0x34c9c829; converted property
@property(assign) short rightIndent;	// G=0x34cc1d21; S=0x34c9f4fd; converted property
@property(assign) unsigned short spaceAfter;	// G=0x34c1e6dd; S=0x34c9ee15; converted property
@property(assign) BOOL spaceAfterAuto;	// G=0x34e0d615; S=0x34c9ef75; converted property
@property(assign) unsigned short spaceBefore;	// G=0x34c1e779; S=0x34c9eb4d; converted property
@property(assign) BOOL spaceBeforeAuto;	// G=0x34e0d4b1; S=0x34c9ecad; converted property
@property(assign) BOOL suppressAutoHyphens;	// G=0x34e0dba1; S=0x34c9fa95; converted property
@property(assign) BOOL suppressLineNumbers;	// G=0x34e0dd05; S=0x34c9f91d; converted property
@property(assign) int tabStopAddedCount;	// G=0x34e0eb5d; S=0x34cab339; converted property
@property(assign) int tabStopDeletedPositionCount;	// G=0x34e0e8b1; S=0x34cab49d; converted property
@property(assign) unsigned short tablePart;	// G=0x34e0dfcd; S=0x34d7a6d5; converted property
@property(retain) id tableStyle;	// G=0x34e0c025; S=0x34d17649; converted property
@property(assign) int verticalAnchor;	// G=0x34d307dd; S=0x34c9d83d; converted property
@property(assign) long verticalPosition;	// G=0x34d40b9d; S=0x34c9daf9; converted property
@property(assign) long verticalSpace;	// G=0x34e0c70d; S=0x34c9d2bd; converted property
@property(assign) BOOL widowControl;	// G=0x34e0de65; S=0x34c9fbfd; converted property
@property(assign) long width;	// G=0x34d30911; S=0x34c9ce91; converted property
@property(assign) BOOL wrap;	// G=0x34e0c9c5; S=0x34c9d575; converted property
@property(assign) BOOL wrapCode;	// G=0x34e0cb29; S=0x34cf9af5; converted property
- (id)initWithDocument:(id)document;	// 0x34c9c781
- (void)addTabStopAdded:(XXStruct_M9LKhA *)added;	// 0x34cab199
- (void)addTabStopDeletedPosition:(short)position;	// 0x34cb9ef5
// converted property getter: - (BOOL)anchorLock;	// 0x34e0cc89
- (id)barBorder;	// 0x34e0d355
// converted property getter: - (id)baseStyle;	// 0x34c11025
- (id)betweenBorder;	// 0x34e0d1f9
- (id)bottomBorder;	// 0x34cc0835
// converted property getter: - (id)characterProperties;	// 0x34c126e9
- (void)clearBaseStyle;	// 0x34caacc1
- (void)clearChararacterProperties;	// 0x34e10599
- (void)copyPropertiesInto:(id)into;	// 0x34e0e2d5
- (id)copyWithZone:(NSZone *)zone;	// 0x34e0e605
- (void)dealloc;	// 0x34c205cd
- (id)document;	// 0x34c1ee21
// converted property getter: - (XXStruct_BOQfuC)dropCap;	// 0x34e0c2e9
// converted property getter: - (short)firstLineIndent;	// 0x34c1e641
// converted property getter: - (int)formattingChanged;	// 0x34e0e12d
// converted property getter: - (long)height;	// 0x34e0c455
// converted property getter: - (int)heightRule;	// 0x34e0c5ad
// converted property getter: - (int)horizontalAnchor;	// 0x34cc1621
// converted property getter: - (long)horizontalPosition;	// 0x34d30879
// converted property getter: - (long)horizontalSpace;	// 0x34e0c869
- (BOOL)isAnchorLockOverridden;	// 0x34e0cd29
- (BOOL)isAnythingOverridden;	// 0x34e1049d
- (BOOL)isAnythingOverriddenIn:(XXStruct_M0DnwB *)anIn;	// 0x34e0e28d
- (BOOL)isBarBorderOverridden;	// 0x34e0d3ed
- (BOOL)isBaseStyleOverridden;	// 0x34c10f61
- (BOOL)isBetweenBorderOverridden;	// 0x34e0d291
- (BOOL)isBottomBorderOverridden;	// 0x34c11ff9
- (BOOL)isCharacterPropertiesOverridden;	// 0x34c1ff09
- (BOOL)isDropCapOverridden;	// 0x34e0c391
- (BOOL)isFirstLineIndentOverridden;	// 0x34c11cd5
- (BOOL)isFormattingChangedOverridden;	// 0x34e0e1c9
- (BOOL)isHeightOverridden;	// 0x34e0c4ed
- (BOOL)isHeightRuleOverridden;	// 0x34e0c649
- (BOOL)isHorizontalAnchorOverridden;	// 0x34c10671
- (BOOL)isHorizontalPositionOverridden;	// 0x34c107f9
- (BOOL)isHorizontalSpaceOverridden;	// 0x34e0c901
- (BOOL)isJustificationOverridden;	// 0x34c11a89
- (BOOL)isKeepLinesTogetherOverridden;	// 0x34e0dadd
- (BOOL)isKeepNextParagraphTogetherOverridden;	// 0x34e0d979
- (BOOL)isLeftBorderOverridden;	// 0x34e0cfdd
- (BOOL)isLeftIndentOverridden;	// 0x34c11b4d
- (BOOL)isLineSpacingOverridden;	// 0x34c119c5
- (BOOL)isLineSpacingRuleOverridden;	// 0x34d0c47d
- (BOOL)isListIndexOverridden;	// 0x34c11d99
- (BOOL)isListLevelOverridden;	// 0x34c11e5d
- (BOOL)isListOverridden;	// 0x34e0ec15
- (BOOL)isOutlineLevelOverridden;	// 0x34e0d815
// converted property getter: - (BOOL)isPageBreakBefore;	// 0x34e0c181
- (BOOL)isPageBreakBeforeOverridden;	// 0x34e0c225
- (BOOL)isRightBorderOverridden;	// 0x34e0d135
- (BOOL)isRightIndentOverridden;	// 0x34c11c11
- (BOOL)isShadingOverridden;	// 0x34c120bd
- (BOOL)isSpaceAfterAutoOverridden;	// 0x34e0d6b5
- (BOOL)isSpaceAfterOverridden;	// 0x34c1183d
- (BOOL)isSpaceBeforeAutoOverridden;	// 0x34e0d551
- (BOOL)isSpaceBeforeOverridden;	// 0x34c11901
- (BOOL)isSuppressAutoHyphensOverridden;	// 0x34e0dc41
- (BOOL)isSuppressLineNumbersOverridden;	// 0x34e0dda1
- (BOOL)isTablePartOverridden;	// 0x34e0e069
- (BOOL)isTableStyleOverridden;	// 0x34e0c0bd
- (BOOL)isTopBorderOverridden;	// 0x34e0ce85
- (BOOL)isVerticalAnchorOverridden;	// 0x34c10735
- (BOOL)isVerticalPositionOverridden;	// 0x34c108bd
- (BOOL)isVerticalSpaceOverridden;	// 0x34e0c7a5
- (BOOL)isWidowControlOverridden;	// 0x34e0df09
- (BOOL)isWidthOverridden;	// 0x34cc1b79
- (BOOL)isWrapCodeOverridden;	// 0x34e0cbc5
- (BOOL)isWrapOverridden;	// 0x34e0ca65
// converted property getter: - (int)justification;	// 0x34cb5099
// converted property getter: - (BOOL)keepLinesTogether;	// 0x34e0da3d
// converted property getter: - (BOOL)keepNextParagraphTogether;	// 0x34e0d8d9
- (id)leftBorder;	// 0x34e0cf49
// converted property getter: - (short)leftIndent;	// 0x34c1e5a5
// converted property getter: - (short)lineSpacing;	// 0x34cc14c9
// converted property getter: - (int)lineSpacingRule;	// 0x34d0c541
// converted property getter: - (id)list;	// 0x34c1ee61
// converted property getter: - (int)listIndex;	// 0x34c1ec2d
// converted property getter: - (unsigned char)listLevel;	// 0x34c1ed05
- (id)mutableBarBorder;	// 0x34c9e76d
- (id)mutableBetweenBorder;	// 0x34c9e57d
- (id)mutableBottomBorder;	// 0x34c9e19d
- (id)mutableCharacterProperties;	// 0x34d14c19
- (id)mutableLeftBorder;	// 0x34c9dfad
- (id)mutableRightBorder;	// 0x34c9e38d
- (id)mutableShading;	// 0x34c9e95d
- (id)mutableTopBorder;	// 0x34c9ddbd
- (void)negateFormattingChangesWithDefaults:(id)defaults;	// 0x34e0ec69
// converted property getter: - (unsigned short)outlineLevel;	// 0x34e0d779
- (void)removeTabStopAddedWithPosition:(short)position;	// 0x34e0e969
// converted property getter: - (int)resolveMode;	// 0x34d0c63d
- (id)rightBorder;	// 0x34e0d09d
// converted property getter: - (short)rightIndent;	// 0x34cc1d21
// converted property setter: - (void)setAnchorLock:(BOOL)lock;	// 0x34c9dc55
// converted property setter: - (void)setBaseStyle:(id)style;	// 0x34caa315
// converted property setter: - (void)setCharacterProperties:(id)properties;	// 0x34cb243d
// converted property setter: - (void)setDropCap:(XXStruct_BOQfuC)cap;	// 0x34c9cd15
// converted property setter: - (void)setFirstLineIndent:(short)indent;	// 0x34c9f65d
// converted property setter: - (void)setFormattingChanged:(int)changed;	// 0x34d67fb9
// converted property setter: - (void)setHeight:(long)height;	// 0x34c9cff5
// converted property setter: - (void)setHeightRule:(int)rule;	// 0x34c9d15d
// converted property setter: - (void)setHorizontalAnchor:(int)anchor;	// 0x34c9d6dd
// converted property setter: - (void)setHorizontalPosition:(long)position;	// 0x34c9d99d
// converted property setter: - (void)setHorizontalSpace:(long)space;	// 0x34c9d419
// converted property setter: - (void)setJustification:(int)justification;	// 0x34c9f7bd
// converted property setter: - (void)setKeepLinesTogether:(BOOL)together;	// 0x34cce59d
// converted property setter: - (void)setKeepNextParagraphTogether:(BOOL)together;	// 0x34cab015
// converted property setter: - (void)setLeftIndent:(short)indent;	// 0x34c9f39d
// converted property setter: - (void)setLineSpacing:(short)spacing;	// 0x34c9f0dd
// converted property setter: - (void)setLineSpacingRule:(int)rule;	// 0x34c9f23d
// converted property setter: - (void)setList:(id)list;	// 0x34e0ec2d
// converted property setter: - (void)setListIndex:(int)index;	// 0x34c9cbb1
// converted property setter: - (void)setListLevel:(unsigned char)level;	// 0x34c9ca49
// converted property setter: - (void)setOutlineLevel:(unsigned short)level;	// 0x34caaeb5
// converted property setter: - (void)setPageBreakBefore:(BOOL)before;	// 0x34c9c8c1
// converted property setter: - (void)setResolveMode:(int)mode;	// 0x34c9c829
// converted property setter: - (void)setRightIndent:(short)indent;	// 0x34c9f4fd
// converted property setter: - (void)setSpaceAfter:(unsigned short)after;	// 0x34c9ee15
// converted property setter: - (void)setSpaceAfterAuto:(BOOL)auto;	// 0x34c9ef75
// converted property setter: - (void)setSpaceBefore:(unsigned short)before;	// 0x34c9eb4d
// converted property setter: - (void)setSpaceBeforeAuto:(BOOL)auto;	// 0x34c9ecad
// converted property setter: - (void)setSuppressAutoHyphens:(BOOL)hyphens;	// 0x34c9fa95
// converted property setter: - (void)setSuppressLineNumbers:(BOOL)numbers;	// 0x34c9f91d
// converted property setter: - (void)setTabStopAddedCount:(int)count;	// 0x34cab339
// converted property setter: - (void)setTabStopDeletedPositionCount:(int)count;	// 0x34cab49d
// converted property setter: - (void)setTablePart:(unsigned short)part;	// 0x34d7a6d5
// converted property setter: - (void)setTableStyle:(id)style;	// 0x34d17649
// converted property setter: - (void)setVerticalAnchor:(int)anchor;	// 0x34c9d83d
// converted property setter: - (void)setVerticalPosition:(long)position;	// 0x34c9daf9
// converted property setter: - (void)setVerticalSpace:(long)space;	// 0x34c9d2bd
// converted property setter: - (void)setWidowControl:(BOOL)control;	// 0x34c9fbfd
// converted property setter: - (void)setWidth:(long)width;	// 0x34c9ce91
// converted property setter: - (void)setWrap:(BOOL)wrap;	// 0x34c9d575
// converted property setter: - (void)setWrapCode:(BOOL)code;	// 0x34cf9af5
- (id)shading;	// 0x34cc0bd9
// converted property getter: - (unsigned short)spaceAfter;	// 0x34c1e6dd
// converted property getter: - (BOOL)spaceAfterAuto;	// 0x34e0d615
// converted property getter: - (unsigned short)spaceBefore;	// 0x34c1e779
// converted property getter: - (BOOL)spaceBeforeAuto;	// 0x34e0d4b1
// converted property getter: - (BOOL)suppressAutoHyphens;	// 0x34e0dba1
// converted property getter: - (BOOL)suppressLineNumbers;	// 0x34e0dd05
- (XXStruct_M9LKhA *)tabStopAddedAt:(int)at;	// 0x34e0ea8d
// converted property getter: - (int)tabStopAddedCount;	// 0x34e0eb5d
- (short)tabStopDeletedPositionAt:(int)at;	// 0x34e0e7f1
// converted property getter: - (int)tabStopDeletedPositionCount;	// 0x34e0e8b1
// converted property getter: - (unsigned short)tablePart;	// 0x34e0dfcd
// converted property getter: - (id)tableStyle;	// 0x34e0c025
- (id)topBorder;	// 0x34e0cded
// converted property getter: - (int)verticalAnchor;	// 0x34d307dd
// converted property getter: - (long)verticalPosition;	// 0x34d40b9d
// converted property getter: - (long)verticalSpace;	// 0x34e0c70d
// converted property getter: - (BOOL)widowControl;	// 0x34e0de65
// converted property getter: - (long)width;	// 0x34d30911
// converted property getter: - (BOOL)wrap;	// 0x34e0c9c5
// converted property getter: - (BOOL)wrapCode;	// 0x34e0cb29
@end

