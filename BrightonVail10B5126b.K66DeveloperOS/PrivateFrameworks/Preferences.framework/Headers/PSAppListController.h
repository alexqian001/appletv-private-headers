/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "Preferences-Structs.h"
#import "PSListController.h"


@interface PSAppListController : PSListController {
}
- (id)_localizedTitlesFromUnlocalizedTitles:(id)unlocalizedTitles stringsTable:(id)table;	// 0x352f609d
- (id)_readToggleSwitchSpecifierValue:(id)value;	// 0x352f5e25
- (void)_setToggleSwitchSpecifierValue:(id)value specifier:(id)specifier;	// 0x352f5fb9
- (id)_uiValueFromValue:(id)value specifier:(id)specifier;	// 0x352f5d3d
- (id)_valueFromUIValue:(id)uivalue specifier:(id)specifier;	// 0x352f5da1
- (id)bundle;	// 0x352f7d95
- (id)childPaneSpecifierFromDictionary:(id)dictionary stringsTable:(id)table;	// 0x352f7609
- (id)groupSpecifierFromDictionary:(id)dictionary stringsTable:(id)table;	// 0x352f6215
- (id)multiValueSpecifierFromDictionary:(id)dictionary stringsTable:(id)table;	// 0x352f7345
- (void)postThirdPartySettingDidChangeNotificationForSpecifier:(id)postThirdPartySetting;	// 0x352f6171
- (id)radioGroupSpecifiersFromDictionary:(id)dictionary stringsTable:(id)table;	// 0x352f63fd
- (void)setPreferenceValue:(id)value specifier:(id)specifier;	// 0x352f61d1
- (id)sliderSpecifierFromDictionary:(id)dictionary stringsTable:(id)table;	// 0x352f6e35
- (id)specifiers;	// 0x352f7a49
- (id)specifiersFromDictionary:(id)dictionary stringsTable:(id)table;	// 0x352f7739
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x352f7cb1
- (id)textFieldSpecifierFromDictionary:(id)dictionary stringsTable:(id)table;	// 0x352f67c9
- (id)titleValueSpecifierFromDictionary:(id)dictionary stringsTable:(id)table;	// 0x352f7121
- (id)toggleSwitchSpecifierFromDictionary:(id)dictionary stringsTable:(id)table;	// 0x352f6c2d
@end

