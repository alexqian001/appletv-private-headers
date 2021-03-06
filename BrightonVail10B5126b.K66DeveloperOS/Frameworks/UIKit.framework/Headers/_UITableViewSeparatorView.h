/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UITableViewCell, UITableView;

__attribute__((visibility("hidden")))
@interface _UITableViewSeparatorView : UIView {
	UITableViewCell *_tableCell;	// 84 = 0x54
	UITableView *_table;	// 88 = 0x58
}
- (id)initWithFrame:(CGRect)frame withTable:(id)table;	// 0x32bb038d
- (id)initWithTableCell:(id)tableCell;	// 0x32d8a0ed
- (void)drawRect:(CGRect)rect;	// 0x32bb03ed
@end

