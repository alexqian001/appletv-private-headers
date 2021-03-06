/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRTextEntryController.h"
#import "BRTextFieldDelegate.h"

@class BRAirportNetwork;
@protocol ATVAPPasswordEntryDelegate;

__attribute__((visibility("hidden")))
@interface ATVAPPasswordEntryController : BRTextEntryController <BRTextFieldDelegate> {
	BRAirportNetwork *_network;	// 180 = 0xb4
	id<ATVAPPasswordEntryDelegate> _delegate;	// 184 = 0xb8
}
- (id)initForNetwork:(id)network acceptOnlyHex:(BOOL)hex notifying:(id)notifying;	// 0x2068d1
- (void).cxx_destruct;	// 0x206cb1
- (void)setInitialPassword:(id)password;	// 0x206ca1
- (void)textDidChange:(id)text;	// 0x206c35
- (void)textDidEndEditing:(id)text;	// 0x206c39
@end

