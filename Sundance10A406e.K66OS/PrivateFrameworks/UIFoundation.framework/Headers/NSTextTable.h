/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import "UIFoundation-Structs.h"
#import "NSTextBlock.h"


__attribute__((visibility("hidden")))
@interface NSTextTable : NSTextBlock {
	unsigned _numCols;	// 32 = 0x20
	unsigned _tableFlags;	// 36 = 0x24
	id _lcache;	// 40 = 0x28
	void *_tablePrimary;	// 44 = 0x2c
	void *_tableSecondary;	// 48 = 0x30
}
@property(assign) BOOL collapsesBorders;	// G=0x346811a5; S=0x346811b9; converted property
@property(assign) BOOL hidesEmptyCells;	// G=0x346811dd; S=0x346811f1; converted property
@property(assign) unsigned layoutAlgorithm;	// G=0x34681215; S=0x34681229; converted property
@property(assign) unsigned numberOfColumns;	// G=0x34681195; S=0x34681185; converted property
+ (void)initialize;	// 0x34680e59
- (id)init;	// 0x34680e99
- (id)initWithCoder:(id)coder;	// 0x34680fb9
- (CGRect)_contentRectForCharRange:(NSRange)charRange textContainer:(id)container;	// 0x34682a39
- (id)_descriptionAtIndex:(unsigned)index text:(id)text;	// 0x34681f19
- (BOOL)_missingColumnsForRowRange:(NSRange)rowRange blockIndex:(unsigned)index text:(id)text;	// 0x346834c9
- (id)_rowArrayForBlock:(id)block atIndex:(unsigned)index text:(id)text layoutManager:(id)manager containerWidth:(float)width withRepetitions:(BOOL)repetitions collapseBorders:(BOOL)borders rowCharRange:(NSRange *)range indexInRow:(unsigned *)row startingRow:(int *)row10 startingColumn:(int *)column previousRowBlockHelper:(id *)helper;	// 0x34681269
- (void)_setTableFlags:(unsigned)flags;	// 0x34681259
- (unsigned)_tableFlags;	// 0x34681249
- (void)_takeValuesFromTextBlock:(id)textBlock;	// 0x346810fd
- (CGRect)boundsRectForBlock:(id)block contentRect:(CGRect)rect inRect:(CGRect)rect3 textContainer:(id)container characterRange:(NSRange)range;	// 0x34682d71
// converted property getter: - (BOOL)collapsesBorders;	// 0x346811a5
- (void)dealloc;	// 0x34680ec5
- (void)drawBackgroundForBlock:(id)block withFrame:(CGRect)frame inView:(id)view characterRange:(NSRange)range layoutManager:(id)manager;	// 0x34683595
- (void)encodeWithCoder:(id)coder;	// 0x34680ef1
// converted property getter: - (BOOL)hidesEmptyCells;	// 0x346811dd
// converted property getter: - (unsigned)layoutAlgorithm;	// 0x34681215
// converted property getter: - (unsigned)numberOfColumns;	// 0x34681195
- (CGRect)rectForBlock:(id)block layoutAtPoint:(CGPoint)point inRect:(CGRect)rect textContainer:(id)container characterRange:(NSRange)range;	// 0x346822c1
// converted property setter: - (void)setCollapsesBorders:(BOOL)borders;	// 0x346811b9
// converted property setter: - (void)setHidesEmptyCells:(BOOL)cells;	// 0x346811f1
// converted property setter: - (void)setLayoutAlgorithm:(unsigned)algorithm;	// 0x34681229
// converted property setter: - (void)setNumberOfColumns:(unsigned)columns;	// 0x34681185
@end

