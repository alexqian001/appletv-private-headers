/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRKeyboard.h"

@class BRWaitSpinnerControl, BRKeyboardHistoryControl, BRScrollControl, BRListView, BRContextMenuControl, BRBlueGlowSelectionLozengeLayer, NSArray;

__attribute__((visibility("hidden")))
@interface BRKeyboardHistory : BRKeyboard {
	BRKeyboardHistoryControl *_keyboardHistoryControl;	// 48 = 0x30
	BRListView *_recentItemsList;	// 52 = 0x34
	BRBlueGlowSelectionLozengeLayer *_cursor;	// 56 = 0x38
	BRScrollControl *_scroller;	// 60 = 0x3c
	BRWaitSpinnerControl *_spinner;	// 64 = 0x40
	BRContextMenuControl *_contextMenu;	// 68 = 0x44
	NSArray *_textEntryHistoryClientsForDisplay;	// 72 = 0x48
	NSArray *_textEntryHistoryBehaviorsForDisplay;	// 76 = 0x4c
	int _textEntryStyle;	// 80 = 0x50
	float _preferredTextEntryWidth;	// 84 = 0x54
	float _preferredTextEntryHeight;	// 88 = 0x58
	CGRect _keyboardControlFrame;	// 92 = 0x5c
	float _textFieldBackgroundWidth;	// 108 = 0x6c
	float _textFieldBackgroundHeight;	// 112 = 0x70
	CGRect _textFieldBackgroundFrame;	// 116 = 0x74
	CGRect _textFieldFrame;	// 132 = 0x84
	CGRect _spinnerFrame;	// 148 = 0x94
	CGRect _textFieldLabelFrame;	// 164 = 0xa4
	CGRect _tabControlFrame;	// 180 = 0xb4
}
@property(readonly, assign) CGRect keyboardControlFrame;	// G=0x311a01; converted property
@property(readonly, assign) CGRect spinnerFrame;	// G=0x311a91; converted property
@property(readonly, assign) CGRect tabControlFrame;	// G=0x311ab5; converted property
@property(readonly, assign) CGRect textFieldBackgroundFrame;	// G=0x311a49; converted property
@property(readonly, assign) CGRect textFieldFrame;	// G=0x311a6d; converted property
@property(readonly, assign) CGRect textFieldLabelFrame;	// G=0x311a25; converted property
- (id)initWithTextEntryStyle:(int)textEntryStyle;	// 0x310b3d
- (void)_contextMenuCancelItemSelected:(id)selected;	// 0x3123ad
- (int)_contextMenuDimOption;	// 0x312275
- (id)_controlForContextMenuPositioning;	// 0x312215
- (id)_controlForContextMenuStart;	// 0x312205
- (id)_controlForData:(id)data;	// 0x3119e5
- (id)_controlToDim;	// 0x312265
- (void)_dismissContextMenu;	// 0x3121c1
- (id)_filterRawKeyboardData:(id)data;	// 0x3119d1
- (id)_glyphDataForImage:(id)image;	// 0x3119e1
- (id)_glyphDataForStrings:(id)strings attributes:(id)attributes;	// 0x3119dd
- (id)_glyphDataForTextString:(id)textString attributes:(id)attributes;	// 0x3119d9
- (void)_handleContextMenuSelection:(id)selection;	// 0x312279
- (id)_keyboardDataFileName;	// 0x3119cd
- (void)_listViewFocusChanged:(id)changed;	// 0x311f5d
- (id)_mainKeyRowPlane;	// 0x3119ed
- (int)_numberOfMainKeyRows;	// 0x3119e9
- (float)_preferredTextEntryControlWidth;	// 0x3119f1
- (id)_processGlyphDataChunk:(id)chunk;	// 0x3119d5
- (id)_providersForContextMenu;	// 0x311fb9
- (void)_textEntryHistoryChanged:(id)changed;	// 0x311f3d
- (id)customizeTextEntryControls:(id)controls;	// 0x311251
- (id)customizedTextEntryFieldControls;	// 0x311151
- (void)customizedTextFieldControlsWereRemoved;	// 0x311225
- (void)dealloc;	// 0x310f0d
- (void)displayTextEntryHistoryForClients:(id)clients textEntryBehaviors:(id)behaviors;	// 0x311015
- (BOOL)handleEvent:(id)event;	// 0x31164d
- (id)keyboardControl;	// 0x311389
// converted property getter: - (CGRect)keyboardControlFrame;	// 0x311a01
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x311c7d
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x311c81
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x311c71
- (float)list:(id)list heightForSectionHeader:(long)sectionHeader;	// 0x311c6d
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x311b45
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x311add
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x311b41
- (id)name;	// 0x31137d
- (long)numberOfSectionsInList:(id)list;	// 0x311ad9
- (id)popupKeyboardForKeyControl:(id)keyControl textEntryControl:(id)control;	// 0x311631
- (void)removeCustomizedTextEntryControls:(id)controls;	// 0x3112e9
- (BOOL)requiresTextFieldLabel;	// 0x311635
// converted property getter: - (CGRect)spinnerFrame;	// 0x311a91
- (void)startSpinning;	// 0x3110d1
- (void)stopSpinning;	// 0x311111
- (id)switchToThisKeyboardIdentifier;	// 0x311355
// converted property getter: - (CGRect)tabControlFrame;	// 0x311ab5
- (BOOL)textEntryControlShouldHandleMainKeysEvents;	// 0x31162d
// converted property getter: - (CGRect)textFieldBackgroundFrame;	// 0x311a49
// converted property getter: - (CGRect)textFieldFrame;	// 0x311a6d
// converted property getter: - (CGRect)textFieldLabelFrame;	// 0x311a25
@end

