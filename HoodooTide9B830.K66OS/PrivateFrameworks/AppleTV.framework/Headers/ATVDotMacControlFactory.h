/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRPhotoControlFactory.h"


__attribute__((visibility("hidden")))
@interface ATVDotMacControlFactory : BRPhotoControlFactory {
}
+ (id)mainMenuFactory;	// 0x328a3b61
+ (id)standardFactory;	// 0x328a3b15
- (id)initForMainMenu:(BOOL)mainMenu;	// 0x328a3bad
- (id)_dividerForData:(id)data;	// 0x328a4475
- (id)_durationStringFromLong:(long)aLong;	// 0x328a4815
- (id)_menuItemForDotMacData:(id)dotMacData currentControl:(id)control;	// 0x328a3e2d
- (id)_posterControlForDotMacData:(id)dotMacData currentControl:(id)control requestedBy:(id)by;	// 0x328a45c1
- (id)_previewControlForDotMacData:(id)dotMacData;	// 0x328a4525
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x328a3c39
- (float)heightForControlForData:(id)data requestedBy:(id)by;	// 0x328a3d61
@end
