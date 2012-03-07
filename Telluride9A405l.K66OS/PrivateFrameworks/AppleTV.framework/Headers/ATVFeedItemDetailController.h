/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedController.h"


__attribute__((visibility("hidden")))
@interface ATVFeedItemDetailController : ATVFeedController {
}
- (id)initWithDictionary:(id)dictionary;	// 0x35eebb1d
- (id)initWithFeedElement:(id)feedElement;	// 0x35eebad1
- (void)_handleUpdateWithFeedElement:(id)feedElement loadType:(int)type;	// 0x35eec859
- (BOOL)_hasHeader:(id)header;	// 0x35eed305
- (id)_initWithData:(id)data;	// 0x35eecc31
- (int)_mainImageStyleForData:(id)data;	// 0x35eed5e1
- (BOOL)_relatedShelfIsFocused;	// 0x35eed835
- (id)_tableData;	// 0x35eed7e1
- (id)_tableElement;	// 0x35eed7a5
- (float)_widthOfColumn:(long)column tableView:(id)view;	// 0x35eed4b9
- (BOOL)brEventAction:(id)action;	// 0x35eebbf9
- (void)dealloc;	// 0x35eebb69
- (float)headerHeightForTableView:(id)tableView;	// 0x35eec82d
- (long)numberOfColumnsInTableView:(id)tableView;	// 0x35eebdfd
- (long)numberOfHeaderColumnsInTableView:(id)tableView;	// 0x35eebe89
- (long)numberOfRowsInTableView:(id)tableView;	// 0x35eebd71
- (id)tableView:(id)view headerForColumn:(long)column;	// 0x35eec635
- (float)tableView:(id)view heightForRow:(long)row;	// 0x35eec825
- (id)tableView:(id)view itemForRow:(long)row inColumn:(long)column;	// 0x35eebe99
- (float)tableView:(id)view widthForColumn:(long)column;	// 0x35eec7fd
- (float)tableView:(id)view widthForHeaderColumn:(long)headerColumn;	// 0x35eec815
- (void)transitionToMoreInfo;	// 0x35eebcad
- (id)transitionType;	// 0x35eebbe9
@end
