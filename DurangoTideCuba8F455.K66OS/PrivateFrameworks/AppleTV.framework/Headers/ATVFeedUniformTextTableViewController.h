/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class ATVFeedTextTableDataSet, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVFeedUniformTextTableViewController : NSObject {
@private
	int _cachedColumnCount;	// 4 = 0x4
	ATVFeedTextTableDataSet *_dataSet;	// 8 = 0x8
	NSDictionary *_headerTextAttributes;	// 12 = 0xc
	NSDictionary *_cellTextAttributes;	// 16 = 0x10
	float _cellHeight;	// 20 = 0x14
	float _cellWidth;	// 24 = 0x18
	float _headerHeight;	// 28 = 0x1c
	float _headerWidth;	// 32 = 0x20
}
@property(assign) float cellHeight;	// G=0x306f30b5; S=0x306f30c5; @synthesize=_cellHeight
@property(retain) NSDictionary *cellTextAttributes;	// G=0x306f34e1; S=0x306f3551; @synthesize=_cellTextAttributes
@property(assign) float cellWidth;	// G=0x306f3095; S=0x306f30a5; @synthesize=_cellWidth
@property(retain) ATVFeedTextTableDataSet *dataSet;	// G=0x306f34b1; S=0x306f31ed; @synthesize=_dataSet
@property(assign) float headerHeight;	// G=0x306f3075; S=0x306f3085; @synthesize=_headerHeight
@property(retain) NSDictionary *headerTextAttributes;	// G=0x306f34c9; S=0x306f3525; @synthesize=_headerTextAttributes
@property(assign) float headerWidth;	// G=0x306f3055; S=0x306f3065; @synthesize=_headerWidth
// declared property getter: - (float)cellHeight;	// 0x306f30b5
// declared property getter: - (id)cellTextAttributes;	// 0x306f34e1
// declared property getter: - (float)cellWidth;	// 0x306f3095
// declared property getter: - (id)dataSet;	// 0x306f34b1
- (void)dealloc;	// 0x306f32ed
// declared property getter: - (float)headerHeight;	// 0x306f3075
- (float)headerHeightForTableView:(id)tableView;	// 0x306f3035
// declared property getter: - (id)headerTextAttributes;	// 0x306f34c9
// declared property getter: - (float)headerWidth;	// 0x306f3055
- (long)numberOfColumnsInTableView:(id)tableView;	// 0x306f3115
- (long)numberOfHeaderColumnsInTableView:(id)tableView;	// 0x306f30e5
- (long)numberOfRowsInTableView:(id)tableView;	// 0x306f31bd
// declared property setter: - (void)setCellHeight:(float)height;	// 0x306f30c5
// declared property setter: - (void)setCellTextAttributes:(id)attributes;	// 0x306f3551
// declared property setter: - (void)setCellWidth:(float)width;	// 0x306f30a5
// declared property setter: - (void)setDataSet:(id)set;	// 0x306f31ed
// declared property setter: - (void)setHeaderHeight:(float)height;	// 0x306f3085
// declared property setter: - (void)setHeaderTextAttributes:(id)attributes;	// 0x306f3525
// declared property setter: - (void)setHeaderWidth:(float)width;	// 0x306f3065
- (id)tableView:(id)view headerForColumn:(long)column;	// 0x306f3379
- (float)tableView:(id)view heightForRow:(long)row;	// 0x306f3025
- (id)tableView:(id)view itemForRow:(long)row inColumn:(long)column;	// 0x306f35e5
- (float)tableView:(id)view widthForColumn:(long)column;	// 0x306f3015
- (float)tableView:(id)view widthForHeaderColumn:(long)headerColumn;	// 0x306f3045
@end

