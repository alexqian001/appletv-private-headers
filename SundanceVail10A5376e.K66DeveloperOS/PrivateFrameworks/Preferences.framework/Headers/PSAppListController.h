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
- (id)_localizedTitlesFromUnlocalizedTitles:(id)unlocalizedTitles stringsTable:(id)table;	// 0x35e1c10d
- (id)_readToggleSwitchSpecifierValue:(id)value;	// 0x35e1be95
- (void)_setToggleSwitchSpecifierValue:(id)value specifier:(id)specifier;	// 0x35e1c029
- (id)_uiValueFromValue:(id)value specifier:(id)specifier;	// 0x35e1bdad
- (id)_valueFromUIValue:(id)uivalue specifier:(id)specifier;	// 0x35e1be11
- (id)bundle;	// 0x35e1de05
- (id)childPaneSpecifierFromDictionary:(id)dictionary stringsTable:(id)table;	// 0x35e1d679
- (id)groupSpecifierFromDictionary:(id)dictionary stringsTable:(id)table;	// 0x35e1c285
- (id)multiValueSpecifierFromDictionary:(id)dictionary stringsTable:(id)table;	// 0x35e1d3b5
- (void)postThirdPartySettingDidChangeNotificationForSpecifier:(id)postThirdPartySetting;	// 0x35e1c1e1
- (id)radioGroupSpecifiersFromDictionary:(id)dictionary stringsTable:(id)table;	// 0x35e1c46d
- (void)setPreferenceValue:(id)value specifier:(id)specifier;	// 0x35e1c241
- (id)sliderSpecifierFromDictionary:(id)dictionary stringsTable:(id)table;	// 0x35e1cea5
- (id)specifiers;	// 0x35e1dab9
- (id)specifiersFromDictionary:(id)dictionary stringsTable:(id)table;	// 0x35e1d7a9
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x35e1dd21
- (id)textFieldSpecifierFromDictionary:(id)dictionary stringsTable:(id)table;	// 0x35e1c839
- (id)titleValueSpecifierFromDictionary:(id)dictionary stringsTable:(id)table;	// 0x35e1d191
- (id)toggleSwitchSpecifierFromDictionary:(id)dictionary stringsTable:(id)table;	// 0x35e1cc9d
@end

