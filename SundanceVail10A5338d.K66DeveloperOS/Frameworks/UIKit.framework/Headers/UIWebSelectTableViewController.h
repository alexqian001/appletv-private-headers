/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UITableViewController.h"
#import "UIKeyInput.h"

@class NSArray, DOMHTMLSelectElement, UIWebSelectPopover;

__attribute__((visibility("hidden")))
@interface UIWebSelectTableViewController : UITableViewController <UIKeyInput> {
	DOMHTMLSelectElement *_selectionNode;	// 200 = 0xc8
	NSArray *_cachedItems;	// 204 = 0xcc
	NSArray *_groupsAndOptions;	// 208 = 0xd0
	unsigned _singleSelectionIndex;	// 212 = 0xd4
	unsigned _singleSelectionSection;	// 216 = 0xd8
	BOOL _allowsMultipleSelection;	// 220 = 0xdc
	float _fontSize;	// 224 = 0xe0
	float _maximumTextWidth;	// 228 = 0xe4
	int _textAlignment;	// 232 = 0xe8
	UIWebSelectPopover *_popover;	// 236 = 0xec
}
@property(retain, nonatomic) NSArray *_cachedItems;	// G=0x30e1e2d1; S=0x30e1e2e1; @synthesize
@property(retain, nonatomic) NSArray *_groupsAndOptions;	// G=0x30e1e2b1; S=0x30e1e2c1; @synthesize
@property(assign, nonatomic) UIWebSelectPopover *_popover;	// G=0x30e1e2f1; S=0x30e1e301; @synthesize
@property(retain, nonatomic) DOMHTMLSelectElement *_selectionNode;	// G=0x30e1e291; S=0x30e1e2a1; @synthesize
@property(assign, nonatomic) int autocapitalizationType;
@property(assign, nonatomic) int autocorrectionType;
@property(assign, nonatomic) BOOL enablesReturnKeyAutomatically;
@property(assign, nonatomic) int keyboardAppearance;
@property(assign, nonatomic) int keyboardType;
@property(assign, nonatomic) int returnKeyType;
@property(assign, nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property(assign, nonatomic) int spellCheckingType;
- (id)initWithDOMHTMLSelectNode:(id)domhtmlselectNode cachedItems:(id)items singleSelectionIndex:(unsigned)index multipleSelection:(BOOL)selection;	// 0x30e1d6c5
// declared property getter: - (id)_cachedItems;	// 0x30e1e2d1
// declared property getter: - (id)_groupsAndOptions;	// 0x30e1e2b1
- (BOOL)_isEmpty;	// 0x30e1d321
- (id)_optionsForSection:(int)section;	// 0x30e1db29
// declared property getter: - (id)_popover;	// 0x30e1e2f1
// declared property getter: - (id)_selectionNode;	// 0x30e1e291
- (void)_setupGroupsAndOptions;	// 0x30e1d351
- (void)dealloc;	// 0x30e1d7e5
- (void)deleteBackward;	// 0x30e1e28d
- (BOOL)hasText;	// 0x30e1e285
- (float)heightForItems;	// 0x30e1d8ed
- (void)insertText:(id)text;	// 0x30e1e289
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x30e1da15
// declared property setter: - (void)set_cachedItems:(id)items;	// 0x30e1e2e1
// declared property setter: - (void)set_groupsAndOptions:(id)options;	// 0x30e1e2c1
// declared property setter: - (void)set_popover:(id)popover;	// 0x30e1e301
// declared property setter: - (void)set_selectionNode:(id)node;	// 0x30e1e2a1
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x30e1db61
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x30e1de8d
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x30e1da59
- (id)tableView:(id)view titleForHeaderInSection:(int)section;	// 0x30e1dac1
- (void)viewWillAppear:(BOOL)view;	// 0x30e1d851
@end
