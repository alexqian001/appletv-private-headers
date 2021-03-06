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
@property(assign) float cellHeight;	// G=0x35d74c8d; S=0x35d74c9d; @synthesize=_cellHeight
@property(retain) NSDictionary *cellTextAttributes;	// G=0x35d74c55; S=0x35d74c69; @synthesize=_cellTextAttributes
@property(assign) float cellWidth;	// G=0x35d74cad; S=0x35d74cbd; @synthesize=_cellWidth
@property(retain, nonatomic) ATVFeedTextTableDataSet *dataSet;	// G=0x35d74849; S=0x35d747f1; @synthesize=_dataSet
@property(assign) float headerHeight;	// G=0x35d74ccd; S=0x35d74cdd; @synthesize=_headerHeight
@property(retain) NSDictionary *headerTextAttributes;	// G=0x35d74c1d; S=0x35d74c31; @synthesize=_headerTextAttributes
@property(assign) float headerWidth;	// G=0x35d74ced; S=0x35d74cfd; @synthesize=_headerWidth
// declared property getter: - (float)cellHeight;	// 0x35d74c8d
// declared property getter: - (id)cellTextAttributes;	// 0x35d74c55
// declared property getter: - (float)cellWidth;	// 0x35d74cad
// declared property getter: - (id)dataSet;	// 0x35d74849
- (void)dealloc;	// 0x35d7477d
// declared property getter: - (float)headerHeight;	// 0x35d74ccd
- (float)headerHeightForTableView:(id)tableView;	// 0x35d74bfd
// declared property getter: - (id)headerTextAttributes;	// 0x35d74c1d
// declared property getter: - (float)headerWidth;	// 0x35d74ced
- (long)numberOfColumnsInTableView:(id)tableView;	// 0x35d74891
- (long)numberOfHeaderColumnsInTableView:(id)tableView;	// 0x35d7495d
- (long)numberOfRowsInTableView:(id)tableView;	// 0x35d74859
// declared property setter: - (void)setCellHeight:(float)height;	// 0x35d74c9d
// declared property setter: - (void)setCellTextAttributes:(id)attributes;	// 0x35d74c69
// declared property setter: - (void)setCellWidth:(float)width;	// 0x35d74cbd
// declared property setter: - (void)setDataSet:(id)set;	// 0x35d747f1
// declared property setter: - (void)setHeaderHeight:(float)height;	// 0x35d74cdd
// declared property setter: - (void)setHeaderTextAttributes:(id)attributes;	// 0x35d74c31
// declared property setter: - (void)setHeaderWidth:(float)width;	// 0x35d74cfd
- (id)tableView:(id)view headerForColumn:(long)column;	// 0x35d74a9d
- (float)tableView:(id)view heightForRow:(long)row;	// 0x35d74bed
- (id)tableView:(id)view itemForRow:(long)row inColumn:(long)column;	// 0x35d74995
- (float)tableView:(id)view widthForColumn:(long)column;	// 0x35d74bdd
- (float)tableView:(id)view widthForHeaderColumn:(long)headerColumn;	// 0x35d74c0d
@end

