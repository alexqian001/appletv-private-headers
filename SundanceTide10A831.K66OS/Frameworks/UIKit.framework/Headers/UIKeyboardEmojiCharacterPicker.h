/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKeyboardEmojiPicker.h"
#import "UIKeyboardEmojiInput.h"

@class UIKeyboardEmojiInputController, UIKeyboardEmojiCategory;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiCharacterPicker : UIKeyboardEmojiPicker <UIKeyboardEmojiInput> {
	UIKeyboardEmojiCategory *_category;	// 124 = 0x7c
	UIKeyboardEmojiInputController *_inputController;	// 128 = 0x80
}
@property(assign) UIKeyboardEmojiCategory *category;	// G=0x320183b9; S=0x320183cd; @synthesize=_category
- (id)initWithFrame:(CGRect)frame keyboard:(id)keyboard key:(id)key state:(int)state;	// 0x32017d79
// declared property getter: - (id)category;	// 0x320183b9
- (id)charactersForRow:(int)row;	// 0x320180e1
- (void)dealloc;	// 0x32017f89
- (void)reloadForCategory:(id)category;	// 0x32017fd5
- (void)scrollViewWillEndDragging:(id)scrollView withVelocity:(CGPoint)velocity targetContentOffset:(inout CGPoint *)offset;	// 0x32018295
// declared property setter: - (void)setCategory:(id)category;	// 0x320183cd
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x320181d5
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x3201819d
@end
