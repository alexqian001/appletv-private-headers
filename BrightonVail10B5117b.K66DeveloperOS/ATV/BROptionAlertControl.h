/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVAutoDismissable.h"
#import "BROptionDialog.h"


__attribute__((visibility("hidden")))
@interface BROptionAlertControl : BROptionDialog <ATVAutoDismissable> {
	long _cancelIdx;	// 168 = 0xa8
	BOOL _allowAutoDismiss;	// 172 = 0xac
	long _autoDismissIdx;	// 176 = 0xb0
}
+ (int)postAlertWithTitle:(id)title primaryText:(id)text secondaryText:(id)text3 firstButton:(id)button secondButton:(id)button5 thirdButton:(id)button6 defaultFocus:(int)focus identifier:(id)identifier;	// 0x2c17e1
+ (int)postAlertWithTitleAndCancel:(id)titleAndCancel primaryText:(id)text secondaryText:(id)text3 firstButton:(id)button secondButton:(id)button5 thirdButton:(id)button6 defaultFocus:(int)focus identifier:(id)identifier cancelIndex:(int)index allowAutoDismiss:(BOOL)dismiss autoDismissIndex:(int)index11;	// 0x2c1605
+ (int)postDeleteConfirmationWithName:(id)name;	// 0x2c1a09
+ (int)postDeleteConfirmationWithName:(id)name identifier:(id)identifier;	// 0x2c1a1d
+ (void)postError:(id)error;	// 0x2c1829
+ (void)postError:(id)error identifier:(id)identifier;	// 0x2c1879
- (BOOL)_itemSelected:(id)selected;	// 0x2c1c8d
- (BOOL)autoDismiss;	// 0x2c1c19
- (BOOL)brEventAction:(id)action;	// 0x2c1b31
- (void)setAllowAutoDismiss:(BOOL)dismiss withResult:(int)result;	// 0x2c1bf9
- (void)setCancelIndex:(long)index;	// 0x2c1b21
@end
