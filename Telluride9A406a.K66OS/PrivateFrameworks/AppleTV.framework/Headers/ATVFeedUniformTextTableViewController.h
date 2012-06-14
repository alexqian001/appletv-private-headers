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
@property(assign) float cellHeight;	// G=0x32feeb0d; S=0x32feeb1d; @synthesize=_cellHeight
@property(retain) NSDictionary *cellTextAttributes;	// G=0x32feead5; S=0x32feeae9; @synthesize=_cellTextAttributes
@property(assign) float cellWidth;	// G=0x32feeb2d; S=0x32feeb3d; @synthesize=_cellWidth
@property(retain, nonatomic) ATVFeedTextTableDataSet *dataSet;	// G=0x32fee6c9; S=0x32fee671; @synthesize=_dataSet
@property(assign) float headerHeight;	// G=0x32feeb4d; S=0x32feeb5d; @synthesize=_headerHeight
@property(retain) NSDictionary *headerTextAttributes;	// G=0x32feea9d; S=0x32feeab1; @synthesize=_headerTextAttributes
@property(assign) float headerWidth;	// G=0x32feeb6d; S=0x32feeb7d; @synthesize=_headerWidth
// declared property getter: - (float)cellHeight;	// 0x32feeb0d
// declared property getter: - (id)cellTextAttributes;	// 0x32feead5
// declared property getter: - (float)cellWidth;	// 0x32feeb2d
// declared property getter: - (id)dataSet;	// 0x32fee6c9
- (void)dealloc;	// 0x32fee5fd
// declared property getter: - (float)headerHeight;	// 0x32feeb4d
- (float)headerHeightForTableView:(id)tableView;	// 0x32feea7d
// declared property getter: - (id)headerTextAttributes;	// 0x32feea9d
// declared property getter: - (float)headerWidth;	// 0x32feeb6d
- (long)numberOfColumnsInTableView:(id)tableView;	// 0x32fee711
- (long)numberOfHeaderColumnsInTableView:(id)tableView;	// 0x32fee7dd
- (long)numberOfRowsInTableView:(id)tableView;	// 0x32fee6d9
// declared property setter: - (void)setCellHeight:(float)height;	// 0x32feeb1d
// declared property setter: - (void)setCellTextAttributes:(id)attributes;	// 0x32feeae9
// declared property setter: - (void)setCellWidth:(float)width;	// 0x32feeb3d
// declared property setter: - (void)setDataSet:(id)set;	// 0x32fee671
// declared property setter: - (void)setHeaderHeight:(float)height;	// 0x32feeb5d
// declared property setter: - (void)setHeaderTextAttributes:(id)attributes;	// 0x32feeab1
// declared property setter: - (void)setHeaderWidth:(float)width;	// 0x32feeb7d
- (id)tableView:(id)view headerForColumn:(long)column;	// 0x32fee91d
- (float)tableView:(id)view heightForRow:(long)row;	// 0x32feea6d
- (id)tableView:(id)view itemForRow:(long)row inColumn:(long)column;	// 0x32fee815
- (float)tableView:(id)view widthForColumn:(long)column;	// 0x32feea5d
- (float)tableView:(id)view widthForHeaderColumn:(long)headerColumn;	// 0x32feea8d
@end
