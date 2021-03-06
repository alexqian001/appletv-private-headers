/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRMenuController.h"
#import "BRTextFieldDelegate.h"

@class NSString, BRImageControl, ATVSearchAgent, BRTextEntryControl, BRControl, BRMediatorProvider;

__attribute__((visibility("hidden")))
@interface ATVSearchController : BRMenuController <BRTextFieldDelegate> {
	BRTextEntryControl *_editor;	// 140 = 0x8c
	BRImageControl *_verticalDividerImage;	// 144 = 0x90
	ATVSearchAgent *_agent;	// 148 = 0x94
	BRMediatorProvider *_recentSearchesProvider;	// 152 = 0x98
	NSString *_activeSearchRequest;	// 156 = 0x9c
	NSString *_textEntryHistoryClient;	// 160 = 0xa0
	NSString *_textEntryHistoryBehavior;	// 164 = 0xa4
	BRControl *_alertControl;	// 168 = 0xa8
}
@property(retain, nonatomic) BRControl *alertControl;	// G=0x223549; S=0x223559; @synthesize=_alertControl
- (id)initWithSearchAgent:(id)searchAgent;	// 0x222359
- (void)_handleContextMenuSelection:(id)selection;	// 0x223999
- (void)_networkStateChanged;	// 0x223569
- (void)_performSearchWithString:(id)string;	// 0x22380d
- (void)_recentSearchTermSelected:(id)selected;	// 0x223d8d
- (void)_searchComplete:(id)complete;	// 0x223a55
// declared property getter: - (id)alertControl;	// 0x223549
- (BOOL)brEventAction:(id)action;	// 0x222d85
- (id)controlToDim;	// 0x223545
- (void)dealloc;	// 0x222825
- (long)defaultIndex;	// 0x22329d
- (void)displayTextEntryHistoryForClients:(id)clients textEntryBehaviors:(id)behaviors;	// 0x222cd1
- (BOOL)isNetworkDependent;	// 0x222c39
- (BOOL)isValidAfterDataUpdate;	// 0x222c5d
- (void)layoutSubcontrols;	// 0x222909
- (id)providersForContextMenu;	// 0x223455
- (id)searchAgent;	// 0x222c61
- (void)searchWithString:(id)string;	// 0x222c71
// declared property setter: - (void)setAlertControl:(id)control;	// 0x223559
- (void)setHeaderTitle:(id)title;	// 0x223225
- (void)setKeyboardTextEntryStyle:(int)style;	// 0x222cb1
- (void)setSearchFieldLabel:(id)label;	// 0x223205
- (void)setTextEntryHistoryClient:(id)client textEntryBehavior:(id)behavior;	// 0x222cf1
- (void)textDidChange:(id)text;	// 0x2232f9
- (void)textDidEndEditing:(id)text;	// 0x223329
@end

