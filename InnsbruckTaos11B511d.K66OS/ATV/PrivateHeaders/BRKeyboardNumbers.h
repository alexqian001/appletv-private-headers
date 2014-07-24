/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRKeyboard.h"

@class BRControl;

__attribute__((visibility("hidden")))
@interface BRKeyboardNumbers : BRKeyboard {
	BRControl *_thirdRow;	// 48 = 0x30
}
- (id)init;	// 0x39fc99
- (float)_actionKeysContainerSpacing;	// 0x39febd
- (id)_keyboardDataFileName;	// 0x39fe79
- (float)_mainKeysHorizontalSpacing;	// 0x39fea9
- (float)_mainKeysVerticalSpacing;	// 0x39fea1
- (int)_numberOfMainKeyColumns;	// 0x39fe9d
- (int)_numberOfMainKeyRows;	// 0x39fe99
- (id)_optionCharactersForKeyboardInput;	// 0x39fe95
- (id)_popupKeyboardDataFileName;	// 0x39fe6d
- (float)_preferredTextEntryControlWidth;	// 0x39feb1
- (float)_verticalGapBetweenMainAndActionKeys;	// 0x39fec5
- (void)dealloc;	// 0x39fcf5
- (id)keyboardControl;	// 0x39fd5d
- (CGRect)keyboardControlFrame;	// 0x39fecd
- (int)mapVisualIndex:(int)index toRow:(id)row;	// 0x39fe69
- (id)name;	// 0x39fd51
- (id)switchToThisKeyboardIdentifier;	// 0x39fd41
@end
