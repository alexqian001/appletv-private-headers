/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRKeyboard.h"
#import "AppleTV-Structs.h"

@class BRControl;

__attribute__((visibility("hidden")))
@interface BRKeyboardRomanLogIn : BRKeyboard {
	BRControl *_sixthRow;	// 48 = 0x30
}
- (id)init;	// 0x315dc5
- (float)_actionKeysContainerSpacing;	// 0x315f21
- (float)_actionKeysContainerWidth;	// 0x315f19
- (id)_keyboardDataFileName;	// 0x315ed9
- (float)_mainKeysHorizontalSpacing;	// 0x315f05
- (float)_mainKeysVerticalSpacing;	// 0x315efd
- (int)_numberOfMainKeyColumns;	// 0x315ef9
- (int)_numberOfMainKeyRows;	// 0x315ef5
- (id)_popupKeyboardDataFileName;	// 0x315ecd
- (float)_preferredTextEntryControlWidth;	// 0x315f0d
- (float)_verticalGapBetweenMainAndActionKeys;	// 0x315f29
- (id)accessibilityLabel;	// 0x315ea5
- (void)dealloc;	// 0x315e21
- (CGRect)keyboardControlFrame;	// 0x315f41
- (float)layoutGapBelowKeyboardControl;	// 0x315f31
- (float)layoutGapBelowTabControl;	// 0x315f39
- (id)name;	// 0x315e99
- (int)numberOfKeyboardsForCurrentKeyboardType;	// 0x315e95
- (id)switchToThisKeyboardIdentifier;	// 0x315e6d
- (CGRect)tabControlFrame;	// 0x315f69
@end
