/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedController.h"


__attribute__((visibility("hidden")))
@interface ATVFeedItemDetailController : ATVFeedController {
}
- (id)initWithDictionary:(id)dictionary;	// 0x14cccd
- (id)initWithFeedElement:(id)feedElement;	// 0x14cc81
- (void)_handleUpdateWithFeedElement:(id)feedElement loadType:(int)type;	// 0x14db31
- (BOOL)_hasHeader:(id)header;	// 0x14e62d
- (id)_initWithData:(id)data;	// 0x14def5
- (int)_mainImageStyleForData:(id)data;	// 0x14e921
- (BOOL)_relatedShelfIsFocused;	// 0x14eb75
- (id)_tableData;	// 0x14eb21
- (id)_tableElement;	// 0x14eae5
- (float)_widthOfColumn:(long)column tableView:(id)view;	// 0x14e7f1
- (BOOL)brEventAction:(id)action;	// 0x14cdad
- (void)dealloc;	// 0x14cd19
- (float)headerHeightForTableView:(id)tableView;	// 0x14db05
- (long)numberOfColumnsInTableView:(id)tableView;	// 0x14cfad
- (long)numberOfHeaderColumnsInTableView:(id)tableView;	// 0x14d031
- (long)numberOfRowsInTableView:(id)tableView;	// 0x14cf29
- (id)tableView:(id)view headerForColumn:(long)column;	// 0x14d909
- (float)tableView:(id)view heightForRow:(long)row;	// 0x14daf9
- (id)tableView:(id)view itemForRow:(long)row inColumn:(long)column;	// 0x14d041
- (float)tableView:(id)view widthForColumn:(long)column;	// 0x14dad1
- (float)tableView:(id)view widthForHeaderColumn:(long)headerColumn;	// 0x14dae9
- (void)transitionToMoreInfo;	// 0x14ce61
- (id)transitionType;	// 0x14cd9d
@end

