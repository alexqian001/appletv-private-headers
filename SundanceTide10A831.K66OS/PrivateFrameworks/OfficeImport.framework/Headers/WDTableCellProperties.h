/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class WDDocument;

@interface WDTableCellProperties : NSObject {
	short mWidth;	// 4 = 0x4
	short mPosition;	// 6 = 0x6
	unsigned mOriginal : 1;	// 8 = 0x8
	unsigned mTracked : 1;	// 8 = 0x8
	unsigned mResolved : 1;	// 8 = 0x8
	XXStruct_a$$qTB mOriginalProperties;	// 12 = 0xc
	XXStruct_a$$qTB mTrackedProperties;	// 132 = 0x84
	WDDocument *mDocument;	// 252 = 0xfc
}
@property(assign) short bottomMargin;	// G=0x36c81c85; S=0x36b8a55d; converted property
@property(assign) int bottomMarginType;	// G=0x36c81db9; S=0x36c81e49; converted property
@property(assign) int deleted;	// G=0x36c82795; S=0x36c82825; converted property
@property(retain) id deletionDate;	// G=0x36c830dd; S=0x36c8316d; converted property
@property(retain) id editDate;	// G=0x36c832a5; S=0x36c83335; converted property
@property(assign) int edited;	// G=0x36c8291d; S=0x36c829ad; converted property
@property(assign) BOOL firstInSetOfVerticallyMergedCells;	// G=0x36c824c1; S=0x36b17c55; converted property
@property(retain) id formattingChangeDate;	// G=0x36c8346d; S=0x36c834fd; converted property
@property(assign) int formattingChanged;	// G=0x36c82aa5; S=0x36c82b35; converted property
@property(assign) unsigned short indexToAuthorIDOfDeletion;	// G=0x36c82c2d; S=0x36c82cc1; converted property
@property(assign) unsigned short indexToAuthorIDOfEdit;	// G=0x36c82dbd; S=0x36c82e51; converted property
@property(assign) unsigned short indexToAuthorIDOfFormattingChange;	// G=0x36c82f4d; S=0x36c82fe1; converted property
@property(assign) short leftMargin;	// G=0x36b8a65d; S=0x36b8a5b1; converted property
@property(assign) int leftMarginType;	// G=0x36c81f41; S=0x36c81fd1; converted property
@property(assign) BOOL noWrap;	// G=0x36c825f9; S=0x36c8268d; converted property
@property(assign) short position;	// G=0x36c812d5; S=0x36b17b31; converted property
@property(assign) int resolveMode;	// G=0x36c812e5; S=0x36b176b9; converted property
@property(assign) short rightMargin;	// G=0x36b8a6ed; S=0x36b8a605; converted property
@property(assign) int rightMarginType;	// G=0x36c820c9; S=0x36c82159; converted property
@property(assign) int textDirection;	// G=0x36c82251; S=0x36b17b95; converted property
@property(assign) short topMargin;	// G=0x36c819c9; S=0x36b8a509; converted property
@property(assign) int topMarginType;	// G=0x36c81afd; S=0x36c81b8d; converted property
@property(assign) int verticalAlignment;	// G=0x36b18fd9; S=0x36b17b41; converted property
@property(assign) BOOL verticallyMergedCell;	// G=0x36c82389; S=0x36b17bed; converted property
@property(assign) short width;	// G=0x36acaccd; S=0x36ab9a35; converted property
@property(assign) int widthType;	// G=0x36acac3d; S=0x36ab9a45; converted property
- (id)init;	// 0x36aac3c5
- (id)initWithDocument:(id)document;	// 0x36ab8ea5
- (id).cxx_construct;	// 0x36aac3c1
- (void)addProperties:(id)properties;	// 0x36b7aab1
- (void)addPropertiesValues:(XXStruct_PkO1_D *)values to:(XXStruct_PkO1_D *)to;	// 0x36b7aaf9
- (id)bottomBorder;	// 0x36acc671
// converted property getter: - (short)bottomMargin;	// 0x36c81c85
// converted property getter: - (int)bottomMarginType;	// 0x36c81db9
- (void)clearShading;	// 0x36c81359
- (id)copyWithZone:(NSZone *)zone;	// 0x36c83635
- (void)dealloc;	// 0x36acf4c9
// converted property getter: - (int)deleted;	// 0x36c82795
// converted property getter: - (id)deletionDate;	// 0x36c830dd
- (id)diagonalDownBorder;	// 0x36c8159d
- (id)diagonalUpBorder;	// 0x36c813d9
- (id)document;	// 0x36c812c5
// converted property getter: - (id)editDate;	// 0x36c832a5
// converted property getter: - (int)edited;	// 0x36c8291d
// converted property getter: - (BOOL)firstInSetOfVerticallyMergedCells;	// 0x36c824c1
// converted property getter: - (id)formattingChangeDate;	// 0x36c8346d
// converted property getter: - (int)formattingChanged;	// 0x36c82aa5
// converted property getter: - (unsigned short)indexToAuthorIDOfDeletion;	// 0x36c82c2d
// converted property getter: - (unsigned short)indexToAuthorIDOfEdit;	// 0x36c82dbd
// converted property getter: - (unsigned short)indexToAuthorIDOfFormattingChange;	// 0x36c82f4d
- (id)insideHorizontalBorder;	// 0x36c81761
- (id)insideVerticalBorder;	// 0x36c81895
- (BOOL)isBottomBorderOverridden;	// 0x36acc5cd
- (BOOL)isBottomMarginOverridden;	// 0x36c81d15
- (BOOL)isBottomMarginTypeOverridden;	// 0x36c81e9d
- (BOOL)isDeletedOverridden;	// 0x36c82879
- (BOOL)isDeletionDateOverridden;	// 0x36c83201
- (BOOL)isDiagonalDownBorderOverridden;	// 0x36c816bd
- (BOOL)isDiagonalUpBorderOverridden;	// 0x36c814f9
- (BOOL)isEditDateOverridden;	// 0x36c833c9
- (BOOL)isEditedOverridden;	// 0x36c82a01
- (BOOL)isFirstInSetOfVerticallyMergedCellsOverridden;	// 0x36c82555
- (BOOL)isFormattingChangeDateOverridden;	// 0x36c83591
- (BOOL)isFormattingChangedOverridden;	// 0x36c82b89
- (BOOL)isIndexToAuthorIDOfDeletionOverridden;	// 0x36c82d19
- (BOOL)isIndexToAuthorIDOfEditOverridden;	// 0x36c82ea9
- (BOOL)isIndexToAuthorIDOfFormattingChangeOverridden;	// 0x36c83039
- (BOOL)isInsideHorizontalBorderOverridden;	// 0x36c817f1
- (BOOL)isInsideVerticalBorderOverridden;	// 0x36c81925
- (BOOL)isLeftBorderOverridden;	// 0x36acc499
- (BOOL)isLeftMarginOverridden;	// 0x36acc8d9
- (BOOL)isLeftMarginTypeOverridden;	// 0x36c82025
- (BOOL)isNoWrapOverridden;	// 0x36c826f1
- (BOOL)isRightBorderOverridden;	// 0x36acc701
- (BOOL)isRightMarginOverridden;	// 0x36acc97d
- (BOOL)isRightMarginTypeOverridden;	// 0x36c821ad
- (BOOL)isShadingOverridden;	// 0x36acca21
- (BOOL)isTextDirectionOverridden;	// 0x36c822e5
- (BOOL)isTopBorderOverridden;	// 0x36acc345
- (BOOL)isTopMarginOverridden;	// 0x36c81a59
- (BOOL)isTopMarginTypeOverridden;	// 0x36c81be1
- (BOOL)isVerticalAlignmentOverridden;	// 0x36acc835
- (BOOL)isVerticallyMergedCellOverridden;	// 0x36c8241d
- (BOOL)isWidthTypeOverridden;	// 0x36acab99
- (id)leftBorder;	// 0x36acc53d
// converted property getter: - (short)leftMargin;	// 0x36b8a65d
// converted property getter: - (int)leftMarginType;	// 0x36c81f41
- (id)mutableBottomBorder;	// 0x36ab9c19
- (id)mutableDiagonalDownBorder;	// 0x36c8162d
- (id)mutableDiagonalUpBorder;	// 0x36c81469
- (id)mutableInsideHorizontalBorder;	// 0x36b5d159
- (id)mutableInsideVerticalBorder;	// 0x36b5d1e9
- (id)mutableLeftBorder;	// 0x36ab9b89
- (id)mutableRightBorder;	// 0x36ab9ca9
- (id)mutableShading;	// 0x36b188dd
- (id)mutableTopBorder;	// 0x36ab9af9
// converted property getter: - (BOOL)noWrap;	// 0x36c825f9
- (void)originalToTracked;	// 0x36c8132d
// converted property getter: - (short)position;	// 0x36c812d5
// converted property getter: - (int)resolveMode;	// 0x36c812e5
- (id)rightBorder;	// 0x36acc7a5
// converted property getter: - (short)rightMargin;	// 0x36b8a6ed
// converted property getter: - (int)rightMarginType;	// 0x36c820c9
// converted property setter: - (void)setBottomMargin:(short)margin;	// 0x36b8a55d
// converted property setter: - (void)setBottomMarginType:(int)type;	// 0x36c81e49
// converted property setter: - (void)setDeleted:(int)deleted;	// 0x36c82825
// converted property setter: - (void)setDeletionDate:(id)date;	// 0x36c8316d
// converted property setter: - (void)setEditDate:(id)date;	// 0x36c83335
// converted property setter: - (void)setEdited:(int)edited;	// 0x36c829ad
// converted property setter: - (void)setFirstInSetOfVerticallyMergedCells:(BOOL)verticallyMergedCells;	// 0x36b17c55
// converted property setter: - (void)setFormattingChangeDate:(id)date;	// 0x36c834fd
// converted property setter: - (void)setFormattingChanged:(int)changed;	// 0x36c82b35
// converted property setter: - (void)setIndexToAuthorIDOfDeletion:(unsigned short)deletion;	// 0x36c82cc1
// converted property setter: - (void)setIndexToAuthorIDOfEdit:(unsigned short)edit;	// 0x36c82e51
// converted property setter: - (void)setIndexToAuthorIDOfFormattingChange:(unsigned short)formattingChange;	// 0x36c82fe1
// converted property setter: - (void)setLeftMargin:(short)margin;	// 0x36b8a5b1
// converted property setter: - (void)setLeftMarginType:(int)type;	// 0x36c81fd1
// converted property setter: - (void)setNoWrap:(BOOL)wrap;	// 0x36c8268d
// converted property setter: - (void)setPosition:(short)position;	// 0x36b17b31
// converted property setter: - (void)setResolveMode:(int)mode;	// 0x36b176b9
// converted property setter: - (void)setRightMargin:(short)margin;	// 0x36b8a605
// converted property setter: - (void)setRightMarginType:(int)type;	// 0x36c82159
// converted property setter: - (void)setTextDirection:(int)direction;	// 0x36b17b95
// converted property setter: - (void)setTopMargin:(short)margin;	// 0x36b8a509
// converted property setter: - (void)setTopMarginType:(int)type;	// 0x36c81b8d
// converted property setter: - (void)setVerticalAlignment:(int)alignment;	// 0x36b17b41
// converted property setter: - (void)setVerticallyMergedCell:(BOOL)cell;	// 0x36b17bed
// converted property setter: - (void)setWidth:(short)width;	// 0x36ab9a35
// converted property setter: - (void)setWidthType:(int)type;	// 0x36ab9a45
- (id)shading;	// 0x36b19265
// converted property getter: - (int)textDirection;	// 0x36c82251
- (id)topBorder;	// 0x36acc3e9
// converted property getter: - (short)topMargin;	// 0x36c819c9
// converted property getter: - (int)topMarginType;	// 0x36c81afd
// converted property getter: - (int)verticalAlignment;	// 0x36b18fd9
// converted property getter: - (BOOL)verticallyMergedCell;	// 0x36c82389
// converted property getter: - (short)width;	// 0x36acaccd
// converted property getter: - (int)widthType;	// 0x36acac3d
@end

