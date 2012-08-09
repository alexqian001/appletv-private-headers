/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSString, NSMutableString, BRKeyboard, BRKeyboardCandidates;

__attribute__((visibility("hidden")))
@interface BRInputMethod : XXUnknownSuperclass {
	int _textEntryStyle;	// 4 = 0x4
	NSArray *_keyboards;	// 8 = 0x8
	BOOL _includeHistoryKeyboard;	// 12 = 0xc
	NSString *_mostRecentCandidateCharacter;	// 16 = 0x10
	NSMutableString *_candidatesBuffer;	// 20 = 0x14
	BRKeyboard *_activeKeyboard;	// 24 = 0x18
	BRKeyboardCandidates *_candidatesKeyboard;	// 28 = 0x1c
}
@property(readonly, retain) BRKeyboardCandidates *candidatesKeyboard;	// G=0x2e5c51; converted property
@property(assign) BOOL includeHistoryKeyboard;	// G=0x2e5f35; S=0x2e5b9d; converted property
@property(readonly, retain) NSArray *keyboards;	// G=0x2e5c11; converted property
@property(readonly, assign) int textEntryStyle;	// G=0x2e5b8d; converted property
- (id)init;	// 0x2e59f5
- (id)_addHistoryKeyboard:(id)keyboard;	// 0x2e5f49
- (id)_keyboardsForTextEntryStyle:(int)textEntryStyle;	// 0x2e5f45
- (id)_removeHistoryKeyboard:(id)keyboard;	// 0x2e6005
- (id)candidates;	// 0x2e5f31
// converted property getter: - (id)candidatesKeyboard;	// 0x2e5c51
- (void)dealloc;	// 0x2e5a59
- (BOOL)deleteText;	// 0x2e5dfd
- (void)flushText;	// 0x2e5ebd
// converted property getter: - (BOOL)includeHistoryKeyboard;	// 0x2e5f35
- (BOOL)inputText:(id)text;	// 0x2e5cdd
- (id)isoLanguageCode;	// 0x2e5af1
// converted property getter: - (id)keyboards;	// 0x2e5c11
- (id)mostRecentCharacter;	// 0x2e5ded
- (id)name;	// 0x2e5ae5
- (void)removeCandidatesKeyboard;	// 0x2e5ca1
- (void)setActiveKeyboard:(id)keyboard;	// 0x2e5c3d
// converted property setter: - (void)setIncludeHistoryKeyboard:(BOOL)keyboard;	// 0x2e5b9d
- (BOOL)setTextEntryStyle:(int)style displayTextEntryHistory:(BOOL)history;	// 0x2e5af5
// converted property getter: - (int)textEntryStyle;	// 0x2e5b8d
- (BOOL)usesCandidateDisplayForKeyboard:(id)keyboard;	// 0x2e5c4d
@end
