/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <BRMediaMenuController.h> // Unknown library
#import "BRTextFieldDelegate.h"


@interface ATVDotMacMainMenuController : BRMediaMenuController <BRTextFieldDelegate> {
@private
	BOOL _isScreenSaverMenu;	// 136 = 0x88
}
+ (void)initialize;	// 0x30653545
+ (id)menuController;	// 0x30653509
+ (id)screenSaverMenuController;	// 0x306534cd
- (id)init;	// 0x306534b5
- (id)initForScreenSaver:(BOOL)screenSaver;	// 0x30653c45
- (void)_accountLoaded:(id)loaded;	// 0x30653691
- (void)_handleAccountSelection:(id)selection;	// 0x30653379
- (void)_handleAddSelection:(id)selection;	// 0x306538e1
- (void)dealloc;	// 0x3065363d
- (long)defaultIndex;	// 0x30653481
- (BOOL)isNetworkDependent;	// 0x30653375
- (float)listVerticalOffset;	// 0x30653fad
- (void)textDidChange:(id)text;	// 0x30653371
- (void)textDidEndEditing:(id)text;	// 0x30653a61
@end

