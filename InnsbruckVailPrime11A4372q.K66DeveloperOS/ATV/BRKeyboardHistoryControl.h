/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRKeyboardControl.h"

@class BRListView, NSArray;

__attribute__((visibility("hidden")))
@interface BRKeyboardHistoryControl : BRKeyboardControl {
	NSArray *_textEntryHistoryClients;	// 96 = 0x60
	NSArray *_textEntryHistoryBehaviors;	// 100 = 0x64
	BRListView *_list;	// 104 = 0x68
	CGSize _preferredSize;	// 108 = 0x6c
	float _listOriginXOffset;	// 116 = 0x74
	float _listWidth;	// 120 = 0x78
}
@property(retain) id focusedKeyControl;	// G=0x3863dd; S=0x3863e1; converted property
- (id)initWithPreferredSize:(CGSize)preferredSize;	// 0x38614d
- (void)dealloc;	// 0x386199
- (BOOL)focusIsAtRightEdge;	// 0x3863d9
// converted property getter: - (id)focusedKeyControl;	// 0x3863dd
- (BOOL)keyboardFocusIsAtEdge:(int)edge;	// 0x3863e9
- (void)layoutSubcontrols;	// 0x386211
- (void)setFocusToGlyphNamed:(id)glyphNamed;	// 0x3863e5
// converted property setter: - (void)setFocusedKeyControl:(id)control;	// 0x3863e1
- (void)setListOriginXOffset:(float)offset listWidth:(float)width;	// 0x3863a9
- (void)setTextEntryHistoryClients:(id)clients textEntryBehaviors:(id)behaviors list:(id)list;	// 0x386315
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3862fd
@end
