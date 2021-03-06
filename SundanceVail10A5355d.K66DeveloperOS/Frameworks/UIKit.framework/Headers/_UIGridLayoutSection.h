/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@class NSDictionary, _UIGridLayoutInfo, NSMutableArray;

__attribute__((visibility("hidden")))
@interface _UIGridLayoutSection : NSObject {
	NSMutableArray *_items;	// 4 = 0x4
	NSMutableArray *_rows;	// 8 = 0x8
	UIEdgeInsets _sectionMagins;	// 12 = 0xc
	float _verticalInterstice;	// 28 = 0x1c
	float _horizontalInterstice;	// 32 = 0x20
	CGRect _headerFrame;	// 36 = 0x24
	CGRect _footerFrame;	// 52 = 0x34
	float _headerDimension;	// 68 = 0x44
	float _footerDimension;	// 72 = 0x48
	_UIGridLayoutInfo *_layoutInfo;	// 76 = 0x4c
	BOOL _isValid;	// 80 = 0x50
	CGRect _frame;	// 84 = 0x54
	NSDictionary *_rowAlignmentOptions;	// 100 = 0x64
	BOOL _fixedItemSize;	// 104 = 0x68
	CGSize _itemSize;	// 108 = 0x6c
	float _otherMargin;	// 116 = 0x74
	float _beginMargin;	// 120 = 0x78
	float _endMargin;	// 124 = 0x7c
	float _actualGap;	// 128 = 0x80
	float _lastRowBeginMargin;	// 132 = 0x84
	float _lastRowEndMargin;	// 136 = 0x88
	float _lastRowActualGap;	// 140 = 0x8c
	BOOL _lastRowIncomplete;	// 144 = 0x90
	int _itemsCount;	// 148 = 0x94
	int _itemsByRowCount;	// 152 = 0x98
	int _indexOfImcompleteRow;	// 156 = 0x9c
	UIEdgeInsets _sectionMargins;	// 160 = 0xa0
}
@property(readonly, assign, nonatomic) float actualGap;	// G=0x33e1e2d9; @synthesize=_actualGap
@property(readonly, assign, nonatomic) float beginMargin;	// G=0x33e1e2b9; @synthesize=_beginMargin
@property(readonly, assign, nonatomic) float endMargin;	// G=0x33e1e2c9; @synthesize=_endMargin
@property(assign, nonatomic) BOOL fixedItemSize;	// G=0x33e1e289; S=0x33e1e299; @synthesize=_fixedItemSize
@property(assign, nonatomic) float footerDimension;	// G=0x33e1e169; S=0x33e1e179; @synthesize=_footerDimension
@property(assign, nonatomic) CGRect footerFrame;	// G=0x33e1e1c9; S=0x33e1e1ed; @synthesize=_footerFrame
@property(assign, nonatomic) CGRect frame;	// G=0x33e1e229; S=0x33e1e24d; @synthesize=_frame
@property(assign, nonatomic) float headerDimension;	// G=0x33e1e149; S=0x33e1e159; @synthesize=_headerDimension
@property(assign, nonatomic) CGRect headerFrame;	// G=0x33e1e189; S=0x33e1e1ad; @synthesize=_headerFrame
@property(assign, nonatomic) float horizontalInterstice;	// G=0x33e1e0e9; S=0x33e1e0f9; @synthesize=_horizontalInterstice
@property(readonly, assign, nonatomic) int indexOfImcompleteRow;	// G=0x33e1e329; @synthesize=_indexOfImcompleteRow
@property(assign, nonatomic) CGSize itemSize;	// G=0x33e1e369; S=0x33e1e381; @synthesize=_itemSize
@property(readonly, assign, nonatomic) NSMutableArray *items;	// G=0x33e1e0a9; @synthesize=_items
@property(readonly, assign, nonatomic) int itemsByRowCount;	// G=0x33e1e359; @synthesize=_itemsByRowCount
@property(assign, nonatomic) int itemsCount;	// G=0x33e1e339; S=0x33e1e349; @synthesize=_itemsCount
@property(readonly, assign, nonatomic) float lastRowActualGap;	// G=0x33e1e309; @synthesize=_lastRowActualGap
@property(readonly, assign, nonatomic) float lastRowBeginMargin;	// G=0x33e1e2e9; @synthesize=_lastRowBeginMargin
@property(readonly, assign, nonatomic) float lastRowEndMargin;	// G=0x33e1e2f9; @synthesize=_lastRowEndMargin
@property(readonly, assign, nonatomic) BOOL lastRowIncomplete;	// G=0x33e1e319; @synthesize=_lastRowIncomplete
@property(assign, nonatomic) _UIGridLayoutInfo *layoutInfo;	// G=0x33e1e209; S=0x33e1e219; @synthesize=_layoutInfo
@property(readonly, assign, nonatomic) float otherMargin;	// G=0x33e1e2a9; @synthesize=_otherMargin
@property(retain, nonatomic) NSDictionary *rowAlignmentOptions;	// G=0x33e1e269; S=0x33e1e279; @synthesize=_rowAlignmentOptions
@property(readonly, assign, nonatomic) NSMutableArray *rows;	// G=0x33e1e0b9; @synthesize=_rows
@property(assign, nonatomic) UIEdgeInsets sectionMargins;	// G=0x33e1e109; S=0x33e1e12d; @synthesize=_sectionMargins
@property(assign, nonatomic) float verticalInterstice;	// G=0x33e1e0c9; S=0x33e1e0d9; @synthesize=_verticalInterstice
- (id)init;	// 0x33e1c6f1
// declared property getter: - (float)actualGap;	// 0x33e1e2d9
- (id)addItem;	// 0x33e1da45
- (id)addRow;	// 0x33e1dac9
// declared property getter: - (float)beginMargin;	// 0x33e1e2b9
- (void)computeLayout;	// 0x33e1c7e1
- (id)copyFromLayoutInfo:(id)layoutInfo;	// 0x33e1dd11
- (void)dealloc;	// 0x33e1d9b9
// declared property getter: - (float)endMargin;	// 0x33e1e2c9
// declared property getter: - (BOOL)fixedItemSize;	// 0x33e1e289
// declared property getter: - (float)footerDimension;	// 0x33e1e169
// declared property getter: - (CGRect)footerFrame;	// 0x33e1e1c9
// declared property getter: - (CGRect)frame;	// 0x33e1e229
// declared property getter: - (float)headerDimension;	// 0x33e1e149
// declared property getter: - (CGRect)headerFrame;	// 0x33e1e189
// declared property getter: - (float)horizontalInterstice;	// 0x33e1e0e9
// declared property getter: - (int)indexOfImcompleteRow;	// 0x33e1e329
- (void)invalidate;	// 0x33e1c7b1
// declared property getter: - (CGSize)itemSize;	// 0x33e1e369
// declared property getter: - (id)items;	// 0x33e1e0a9
// declared property getter: - (int)itemsByRowCount;	// 0x33e1e359
// declared property getter: - (int)itemsCount;	// 0x33e1e339
// declared property getter: - (float)lastRowActualGap;	// 0x33e1e309
// declared property getter: - (float)lastRowBeginMargin;	// 0x33e1e2e9
// declared property getter: - (float)lastRowEndMargin;	// 0x33e1e2f9
// declared property getter: - (BOOL)lastRowIncomplete;	// 0x33e1e319
// declared property getter: - (id)layoutInfo;	// 0x33e1e209
// declared property getter: - (float)otherMargin;	// 0x33e1e2a9
- (void)recomputeFromIndex:(int)index;	// 0x33e1d9b5
// declared property getter: - (id)rowAlignmentOptions;	// 0x33e1e269
// declared property getter: - (id)rows;	// 0x33e1e0b9
// declared property getter: - (UIEdgeInsets)sectionMargins;	// 0x33e1e109
// declared property setter: - (void)setFixedItemSize:(BOOL)size;	// 0x33e1e299
// declared property setter: - (void)setFooterDimension:(float)dimension;	// 0x33e1e179
// declared property setter: - (void)setFooterFrame:(CGRect)frame;	// 0x33e1e1ed
// declared property setter: - (void)setFrame:(CGRect)frame;	// 0x33e1e24d
// declared property setter: - (void)setHeaderDimension:(float)dimension;	// 0x33e1e159
// declared property setter: - (void)setHeaderFrame:(CGRect)frame;	// 0x33e1e1ad
// declared property setter: - (void)setHorizontalInterstice:(float)interstice;	// 0x33e1e0f9
// declared property setter: - (void)setItemSize:(CGSize)size;	// 0x33e1e381
// declared property setter: - (void)setItemsCount:(int)count;	// 0x33e1e349
// declared property setter: - (void)setLayoutInfo:(id)info;	// 0x33e1e219
// declared property setter: - (void)setRowAlignmentOptions:(id)options;	// 0x33e1e279
// declared property setter: - (void)setSectionMargins:(UIEdgeInsets)margins;	// 0x33e1e12d
// declared property setter: - (void)setVerticalInterstice:(float)interstice;	// 0x33e1e0d9
- (id)snapshot;	// 0x33e1db4d
// declared property getter: - (float)verticalInterstice;	// 0x33e1e0c9
@end

