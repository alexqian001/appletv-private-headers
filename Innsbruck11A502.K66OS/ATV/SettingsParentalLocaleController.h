/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRMenuController.h"

@class SettingsParentalLocaleProvider;

__attribute__((visibility("hidden")))
@interface SettingsParentalLocaleController : BRMenuController {
	SettingsParentalLocaleProvider *_localeProvider;	// 144 = 0x90
}
@property(retain, nonatomic) SettingsParentalLocaleProvider *localeProvider;	// G=0x2dff7d; S=0x2dff8d; @synthesize=_localeProvider
- (id)init;	// 0x2df8f1
- (void).cxx_destruct;	// 0x2dffb5
- (void)_updateMenuWidth;	// 0x2dfd09
- (void)controlWasActivated;	// 0x2dfa6d
- (void)itemSelected:(long)selected;	// 0x2dfbe9
// declared property getter: - (id)localeProvider;	// 0x2dff7d
// declared property setter: - (void)setLocaleProvider:(id)provider;	// 0x2dff8d
@end

