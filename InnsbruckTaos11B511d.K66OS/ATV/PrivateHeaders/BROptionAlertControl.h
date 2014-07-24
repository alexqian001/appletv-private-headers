/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BROptionDialog.h"
#import "ATVAutoDismissable.h"


__attribute__((visibility("hidden")))
@interface BROptionAlertControl : BROptionDialog <ATVAutoDismissable> {
	long _cancelIdx;	// 168 = 0xa8
	BOOL _allowAutoDismiss;	// 172 = 0xac
	long _autoDismissIdx;	// 176 = 0xb0
}
+ (int)postAlertWithTitle:(id)title primaryText:(id)text secondaryText:(id)text3 firstButton:(id)button secondButton:(id)button5 thirdButton:(id)button6 defaultFocus:(int)focus identifier:(id)identifier;	// 0x34ea39
+ (int)postAlertWithTitleAndCancel:(id)titleAndCancel primaryText:(id)text secondaryText:(id)text3 firstButton:(id)button secondButton:(id)button5 thirdButton:(id)button6 defaultFocus:(int)focus identifier:(id)identifier cancelIndex:(int)index allowAutoDismiss:(BOOL)dismiss autoDismissIndex:(int)index11;	// 0x34e85d
+ (int)postDeleteConfirmationWithName:(id)name;	// 0x34ec39
+ (int)postDeleteConfirmationWithName:(id)name identifier:(id)identifier;	// 0x34ec4d
+ (void)postError:(id)error;	// 0x34ea8d
+ (void)postError:(id)error identifier:(id)identifier;	// 0x34eadd
- (BOOL)_itemSelected:(id)selected;	// 0x34ee79
- (BOOL)autoDismiss;	// 0x34ee05
- (BOOL)brEventAction:(id)action;	// 0x34ed1d
- (void)setAllowAutoDismiss:(BOOL)dismiss withResult:(int)result;	// 0x34ede5
- (void)setCancelIndex:(long)index;	// 0x34ed0d
@end
