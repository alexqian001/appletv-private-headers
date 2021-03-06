/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKeyboardEmojiPicker.h"
#import "UIKeyboardEmojiCategoryControl.h"

@class UIKeyboardEmojiCategoryController;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiCategoryPicker : UIKeyboardEmojiPicker <UIKeyboardEmojiCategoryControl> {
	UIKeyboardEmojiCategoryController *_categoryController;	// 124 = 0x7c
}
- (id)initWithFrame:(CGRect)frame keyboard:(id)keyboard key:(id)key state:(int)state;	// 0x3201843d
- (id)categoryForCurrentRow;	// 0x320183e5
- (void)dealloc;	// 0x32018709
- (void)scrollViewDidScroll:(id)scrollView;	// 0x32018b19
- (void)scrollViewWillEndDragging:(id)scrollView withVelocity:(CGPoint)velocity targetContentOffset:(inout CGPoint *)offset;	// 0x32018d41
- (void)setCategory:(id)category;	// 0x32018755
- (id)symbolForRow:(int)row;	// 0x320188d1
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x320189e1
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x32018aa9
- (id)titleForRow:(int)row;	// 0x320187c1
@end

