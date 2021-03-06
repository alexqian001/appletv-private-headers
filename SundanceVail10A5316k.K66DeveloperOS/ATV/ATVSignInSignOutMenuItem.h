/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRMenuItem.h"

@class ATVMerchant, NSString;

__attribute__((visibility("hidden")))
@interface ATVSignInSignOutMenuItem : BRMenuItem {
	ATVMerchant *_merchant;	// 176 = 0xb0
	BOOL _signOutExitsApp;	// 180 = 0xb4
	NSString *_confirmationTitle;	// 184 = 0xb8
	NSString *_confirmationDescription;	// 188 = 0xbc
	NSString *_signInPageURL;	// 192 = 0xc0
}
@property(copy, nonatomic) NSString *confirmationDescription;	// G=0x10f6cd; S=0x10f6e1; @synthesize=_confirmationDescription
@property(copy, nonatomic) NSString *confirmationTitle;	// G=0x10f6a9; S=0x10f6bd; @synthesize=_confirmationTitle
@property(retain, nonatomic) ATVMerchant *merchant;	// G=0x10f669; S=0x10f679; @synthesize=_merchant
@property(copy, nonatomic) NSString *signInPageURL;	// G=0x10f6f1; S=0x10f705; @synthesize=_signInPageURL
@property(assign, nonatomic) BOOL signOutExitsApp;	// G=0x10f689; S=0x10f699; @synthesize=_signOutExitsApp
- (void)_update;	// 0x10f121
- (BOOL)brEventAction:(id)action;	// 0x10f259
// declared property getter: - (id)confirmationDescription;	// 0x10f6cd
// declared property getter: - (id)confirmationTitle;	// 0x10f6a9
- (void)controlWasActivated;	// 0x10f219
- (void)dealloc;	// 0x10f095
// declared property getter: - (id)merchant;	// 0x10f669
// declared property setter: - (void)setConfirmationDescription:(id)description;	// 0x10f6e1
// declared property setter: - (void)setConfirmationTitle:(id)title;	// 0x10f6bd
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x10f679
// declared property setter: - (void)setSignInPageURL:(id)pageURL;	// 0x10f705
// declared property setter: - (void)setSignOutExitsApp:(BOOL)app;	// 0x10f699
// declared property getter: - (id)signInPageURL;	// 0x10f6f1
// declared property getter: - (BOOL)signOutExitsApp;	// 0x10f689
@end

