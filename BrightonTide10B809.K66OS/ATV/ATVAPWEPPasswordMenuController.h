/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVAPPasswordEntryDelegate.h"
#import "BRMenuListItemProvider.h"
#import "BRMenuController.h"

@class BRAirportNetwork;

__attribute__((visibility("hidden")))
@interface ATVAPWEPPasswordMenuController : BRMenuController <BRMenuListItemProvider, ATVAPPasswordEntryDelegate> {
	BRAirportNetwork *_network;	// 144 = 0x90
	long _passwordType;	// 148 = 0x94
	id<ATVAPPasswordEntryDelegate> _delegate;	// 152 = 0x98
}
- (id)initForNetwork:(id)network notifying:(id)notifying;	// 0x21b245
- (void)dealloc;	// 0x21b3f9
- (float)heightForRow:(long)row;	// 0x21b58d
- (long)itemCount;	// 0x21b585
- (id)itemForRow:(long)row;	// 0x21b4e1
- (void)itemSelected:(long)selected;	// 0x21b445
- (void)passwordEntered:(id)entered forNetwork:(id)network;	// 0x21b595
- (BOOL)rowSelectable:(long)selectable;	// 0x21b591
- (id)titleForRow:(long)row;	// 0x21b589
@end
