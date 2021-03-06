/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKeyboardMenuView.h"

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface UIInputSwitcherView : UIKeyboardMenuView {
	int m_currentInputModeIndex;	// 180 = 0xb4
	BOOL m_keyboardSettingsFromSwitcher;	// 184 = 0xb8
	NSMutableArray *m_inputModes;	// 188 = 0xbc
}
@property(retain, nonatomic) NSArray *inputModes;	// G=0x33069451; S=0x32dee8bd; @synthesize=m_inputModes
@property(assign, nonatomic) BOOL keyboardSettingsFromSwitcher;	// G=0x32deeaf1; S=0x32dee8a9; @synthesize=m_keyboardSettingsFromSwitcher
+ (id)activeInstance;	// 0x32d92565
+ (id)sharedInstance;	// 0x32dee0b9
- (id)initWithFrame:(CGRect)frame;	// 0x32dee115
- (void)dealloc;	// 0x33068ba5
- (int)defaultSelectedIndex;	// 0x33069279
- (void)didSelectItemAtIndex:(int)index;	// 0x330693e9
// declared property getter: - (id)inputModes;	// 0x33069451
// declared property getter: - (BOOL)keyboardSettingsFromSwitcher;	// 0x32deeaf1
- (id)nextInputMode;	// 0x33068dd1
- (int)numberOfItems;	// 0x33069031
- (CGSize)preferredSize;	// 0x33069059
- (id)previousInputMode;	// 0x33068ebd
- (void)selectInputMode:(id)mode;	// 0x33068d9d
- (void)selectNextInputMode;	// 0x33068e75
- (void)selectPreviousInputMode;	// 0x33068fa1
- (void)selectRowForInputMode:(id)inputMode;	// 0x33068d1d
- (id)selectedInputMode;	// 0x33068bf5
- (void)setInputMode:(id)mode;	// 0x33068d61
// declared property setter: - (void)setInputModes:(id)modes;	// 0x32dee8bd
// declared property setter: - (void)setKeyboardSettingsFromSwitcher:(BOOL)switcher;	// 0x32dee8a9
- (void)show;	// 0x33068fe9
- (id)subtitleForItemAtIndex:(int)index;	// 0x33069331
- (id)titleForItemAtIndex:(int)index;	// 0x330692bd
@end

