/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRMenuListItemProvider.h"
#import "BRMenuController.h"

@class NSDictionary, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface BROptionDialog : BRMenuController <BRMenuListItemProvider> {
	NSString *_tagString;	// 144 = 0x90
	int _currentSelection;	// 148 = 0x94
	NSDictionary *_userInfo;	// 152 = 0x98
	NSMutableArray *_options;	// 156 = 0x9c
	id _delegate;	// 160 = 0xa0
	SEL _actionSelector;	// 164 = 0xa4
}
@property(readonly, retain) NSString *tagString;	// G=0x360c3d; converted property
@property(retain) NSDictionary *userInfo;	// G=0x360c89; S=0x360c4d; converted property
- (id)init;	// 0x3608c9
- (BOOL)_itemSelected:(id)selected;	// 0x360dbd
- (void)_setSelectedIndex:(long)index;	// 0x360e89
- (void)addOptionText:(id)text;	// 0x360add
- (void)addOptionText:(id)text isDefault:(BOOL)aDefault;	// 0x360b29
- (void)dealloc;	// 0x3609f5
- (float)heightForRow:(long)row;	// 0x360cfd
- (long)itemCount;	// 0x360cdd
- (id)itemForRow:(long)row;	// 0x360d4d
- (float)listVerticalOffset;	// 0x360c99
- (BOOL)rowSelectable:(long)selectable;	// 0x360d01
- (long)selectedIndex;	// 0x360bf1
- (id)selectedText;	// 0x360ba1
- (void)setActionSelector:(SEL)selector target:(id)target;	// 0x360a85
- (void)setTag:(id)tag;	// 0x360c01
// converted property setter: - (void)setUserInfo:(id)info;	// 0x360c4d
// converted property getter: - (id)tagString;	// 0x360c3d
- (id)titleForRow:(long)row;	// 0x360d05
// converted property getter: - (id)userInfo;	// 0x360c89
@end
