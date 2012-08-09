/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDSheet.h"

@class EDWarnings, TSUPointerKeyDictionary, EDRowBlocks, EDCollection, EDMergedCellCollection, EDPane, EDColumnInfoCollection, EDReference;

@interface EDWorksheet : EDSheet {
	EDRowBlocks *mRowBlocks;	// 60 = 0x3c
	EDColumnInfoCollection *mColumnInfos;	// 64 = 0x40
	EDCollection *mConditionalFormattings;	// 68 = 0x44
	EDCollection *mHyperlinks;	// 72 = 0x48
	EDCollection *mTables;	// 76 = 0x4c
	EDCollection *mPivotTables;	// 80 = 0x50
	EDMergedCellCollection *mMergedCells;	// 84 = 0x54
	EDPane *mPane;	// 88 = 0x58
	EDWarnings *mWorksheetWarnings;	// 92 = 0x5c
	double mDefaultColumnWidth;	// 96 = 0x60
	unsigned short mDefaultRowHeight;	// 104 = 0x68
	unsigned mMaxRowOutlineLevel;	// 108 = 0x6c
	unsigned mMaxColumnOutlineLevel;	// 112 = 0x70
	bool mFitToPage;	// 116 = 0x74
	EDReference *mMaxCellReferencedInFormulas;	// 120 = 0x78
	TSUPointerKeyDictionary *mMergedRows;	// 124 = 0x7c
	TSUPointerKeyDictionary *mMergedCols;	// 128 = 0x80
	EDReference *mImplicitCellArea;	// 132 = 0x84
}
@property(assign) double defaultColumnWidth;	// G=0x36fb5499; S=0x36fa3b79; converted property
@property(assign) unsigned short defaultRowHeight;	// G=0x36fcb069; S=0x36fa3b8d; converted property
@property(assign) bool fitToPage;	// G=0x3712ad4d; S=0x36fa3b9d; converted property
@property(retain) id implicitCellArea;	// G=0x3712b01d; S=0x3712b02d; converted property
@property(assign) unsigned maxColumnOutlineLevel;	// G=0x3712ae8d; S=0x36fa3bbd; converted property
@property(assign) unsigned maxRowOutlineLevel;	// G=0x3712ae65; S=0x36fa3bad; converted property
@property(retain) id pane;	// G=0x3712ae01; S=0x3707893d; converted property
- (id)columnInfos;	// 0x36fa506d
- (id)conditionalFormattings;	// 0x3712ad61
// converted property getter: - (double)defaultColumnWidth;	// 0x36fb5499
// converted property getter: - (unsigned short)defaultRowHeight;	// 0x36fcb069
// converted property getter: - (bool)fitToPage;	// 0x3712ad4d
- (bool)hasMergedCells;	// 0x3712ae11
- (BOOL)hasMergedCol;	// 0x3712afa5
- (BOOL)hasMergedRow;	// 0x3712af2d
- (id)hyperlinks;	// 0x3712adb1
// converted property getter: - (id)implicitCellArea;	// 0x3712b01d
- (BOOL)isColMerged:(unsigned)merged;	// 0x3712afd1
- (BOOL)isRowMerged:(unsigned)merged;	// 0x3712af59
- (id)maxCellReferencedInFormulas;	// 0x36fb39ed
// converted property getter: - (unsigned)maxColumnOutlineLevel;	// 0x3712ae8d
// converted property getter: - (unsigned)maxRowOutlineLevel;	// 0x3712ae65
- (id)mergedCells;	// 0x36fb017d
- (id)mergedColRef:(unsigned)ref;	// 0x3712affd
- (id)mergedRowRef:(unsigned)ref;	// 0x3712af85
// converted property getter: - (id)pane;	// 0x3712ae01
- (id)pivotTables;	// 0x3700a375
- (void)reduceMemoryIfPossible;	// 0x3712ae45
- (id)rowBlocks;	// 0x36fa59ad
// converted property setter: - (void)setDefaultColumnWidth:(double)width;	// 0x36fa3b79
// converted property setter: - (void)setDefaultRowHeight:(unsigned short)height;	// 0x36fa3b8d
// converted property setter: - (void)setFitToPage:(bool)page;	// 0x36fa3b9d
// converted property setter: - (void)setImplicitCellArea:(id)area;	// 0x3712b02d
// converted property setter: - (void)setMaxColumnOutlineLevel:(unsigned)level;	// 0x36fa3bbd
// converted property setter: - (void)setMaxRowOutlineLevel:(unsigned)level;	// 0x36fa3bad
- (void)setMergedColsRef:(id)ref from:(unsigned)from to:(unsigned)to;	// 0x3712aee5
- (void)setMergedRowsRef:(id)ref from:(unsigned)from to:(unsigned)to;	// 0x3712ae9d
// converted property setter: - (void)setPane:(id)pane;	// 0x3707893d
- (void)setup;	// 0x36f9f249
- (id)tables;	// 0x37009121
- (void)teardown;	// 0x36fbd1cd
- (void)updateMaxColumnOutlineLevelIfNeeded:(unsigned)needed;	// 0x370be6cd
- (void)updateMaxRowOutlineLevelIfNeeded:(unsigned)needed;	// 0x3712ae75
- (id)worksheetWarnings;	// 0x370b07bd
@end
