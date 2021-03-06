/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "MusicController.h"
#import "AppleTV-Structs.h"

@class NSString, BRControl, NSArray;

@interface MusicMainController : MusicController {
@private
	BRControl *_allSongsPreview;	// 124 = 0x7c
	BOOL _displayNowPlaying;	// 128 = 0x80
	NSArray *_controllerMenuItems;	// 132 = 0x84
	NSString *_textEntryClient;	// 136 = 0x88
}
@property(retain, nonatomic) NSArray *controllerMenuItems;	// G=0x303ab1fd; S=0x303ab20d; @synthesize=_controllerMenuItems
@property(retain, nonatomic) NSString *textEntryClient;	// G=0x303ab231; S=0x303ab241; @synthesize=_textEntryClient
+ (void)initialize;	// 0x303aa215
- (id)_indexPathForTitleKey:(id)titleKey;	// 0x303ab309
- (unsigned)_menuItemForRow:(unsigned)row;	// 0x303ab265
- (id)_menuItemTitleKeyForIndexPath:(id)indexPath;	// 0x303ab29d
- (void)_networkStateChanged:(id)changed;	// 0x303ab5b9
- (void)_playerStateChanged:(id)changed;	// 0x303ab571
- (void)_updateNowPlaying;	// 0x303ab3f5
- (void)controlWasActivated;	// 0x303aa3f9
// declared property getter: - (id)controllerMenuItems;	// 0x303ab1fd
- (ATVMediaQueryRef)createPlayQueryForIndexPath:(id)indexPath;	// 0x303ab08d
- (ATVMediaQueryRef)createPreviewQueryForIndexPath:(id)indexPath;	// 0x303aafe1
- (void)dealloc;	// 0x303aa355
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x303aa76d
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x303aa9a1
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x303aa761
- (float)list:(id)list heightForSectionHeader:(long)sectionHeader;	// 0x303aa709
- (id)list:(id)list indexPathForItemID:(id)itemID;	// 0x303aafcd
- (id)list:(id)list itemIDForIndexPath:(id)indexPath;	// 0x303aafb9
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x303aa5a5
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x303aa685
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x303aa6cd
- (long)numberOfSectionsInList:(id)list;	// 0x303aa681
- (void)playQueryComplete:(ATVMediaQueryRef)complete;	// 0x303ab10d
// declared property setter: - (void)setControllerMenuItems:(id)items;	// 0x303ab20d
// declared property setter: - (void)setTextEntryClient:(id)client;	// 0x303ab241
// declared property getter: - (id)textEntryClient;	// 0x303ab231
- (void)wasPopped;	// 0x303aa539
- (void)wasPushed;	// 0x303aa439
@end

