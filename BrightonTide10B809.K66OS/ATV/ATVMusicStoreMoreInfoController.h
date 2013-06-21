/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVCatalogApplianceController.h"

@class BRMediaShelfView, BRListControl, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreMoreInfoController : ATVCatalogApplianceController {
	NSDictionary *_catalogItem;	// 140 = 0x8c
	BRListControl *_list;	// 144 = 0x90
	BOOL _localListContentSelected;	// 148 = 0x94
	BRMediaShelfView *_actionShelfControl;	// 152 = 0x98
	long _lastSelectedIndex;	// 156 = 0x9c
}
- (id)initWithCatalogItem:(id)catalogItem;	// 0x2003a9
- (id)_coverArtControl;	// 0x2015f1
- (void)_focusedActionChanged:(id)changed;	// 0x200f31
- (id)_grid;	// 0x2017dd
- (void)_handleWindowMaxBoundsChanged;	// 0x20084d
- (void)_listSelectionChanged:(id)changed;	// 0x200ca5
- (void)_loadList;	// 0x20088d
- (void)_loadMoreInfoItemContentFromURL:(id)url;	// 0x201911
- (void)_loadMoreInfoItemContentFromURLString:(id)urlstring;	// 0x2018d1
- (void)_moreInfoItemContentFeedReceived:(id)received;	// 0x201a91
- (BOOL)_selectionIsTopmostSelectable;	// 0x200b6d
- (id)_summaryControl;	// 0x20101d
- (id)_summaryControlForItem:(id)item;	// 0x201031
- (id)accessibilityScreenContent;	// 0x200821
- (void)addControls;	// 0x201dc9
- (BOOL)brEventAction:(id)action;	// 0x200611
- (void)controlWasActivated;	// 0x2004b9
- (void)controlWasDeactivated;	// 0x200575
- (void)dealloc;	// 0x200415
- (void)layoutSubcontrols;	// 0x20072d
- (void)refreshDirtyPage;	// 0x201eb1
- (BOOL)shouldAllowControllerContent;	// 0x201dc5
- (id)transitionType;	// 0x20071d
- (void)updateContent:(id)content;	// 0x201e6d
- (void)willEnterCompleteState;	// 0x201d99
@end
