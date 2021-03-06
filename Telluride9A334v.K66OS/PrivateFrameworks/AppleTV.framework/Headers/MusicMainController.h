/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "MusicController.h"

@class BRControl, NSArray, NSString;

@interface MusicMainController : MusicController {
@private
	BRControl *_allSongsPreview;	// 124 = 0x7c
	BOOL _displayNowPlaying;	// 128 = 0x80
	NSArray *_controllerMenuItems;	// 132 = 0x84
	NSString *_textEntryClient;	// 136 = 0x88
}
@property(retain, nonatomic) NSArray *controllerMenuItems;	// G=0x3331181d; S=0x3331182d; @synthesize=_controllerMenuItems
@property(retain, nonatomic) NSString *textEntryClient;	// G=0x33311851; S=0x33311861; @synthesize=_textEntryClient
+ (void)initialize;	// 0x3331089d
- (id)_indexPathForTitleKey:(id)titleKey;	// 0x33311929
- (unsigned)_menuItemForRow:(unsigned)row;	// 0x33311885
- (id)_menuItemTitleKeyForIndexPath:(id)indexPath;	// 0x333118bd
- (void)_networkStateChanged:(id)changed;	// 0x33311bd9
- (void)_playerStateChanged:(id)changed;	// 0x33311b91
- (void)_updateNowPlaying;	// 0x33311a15
- (void)controlWasActivated;	// 0x33310a81
// declared property getter: - (id)controllerMenuItems;	// 0x3331181d
- (ATVMediaQueryRef)createPlayQueryForIndexPath:(id)indexPath;	// 0x333116ad
- (ATVMediaQueryRef)createPreviewQueryForIndexPath:(id)indexPath;	// 0x3331161d
- (void)dealloc;	// 0x333109dd
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x33310df5
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x33310ff5
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x33310de9
- (float)list:(id)list heightForSectionHeader:(long)sectionHeader;	// 0x33310d91
- (id)list:(id)list indexPathForItemID:(id)itemID;	// 0x33311609
- (id)list:(id)list itemIDForIndexPath:(id)indexPath;	// 0x333115f5
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x33310c2d
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x33310d0d
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x33310d55
- (long)numberOfSectionsInList:(id)list;	// 0x33310d09
- (void)playQueryComplete:(ATVMediaQueryRef)complete;	// 0x3331172d
// declared property setter: - (void)setControllerMenuItems:(id)items;	// 0x3331182d
// declared property setter: - (void)setTextEntryClient:(id)client;	// 0x33311861
// declared property getter: - (id)textEntryClient;	// 0x33311851
- (void)wasPopped;	// 0x33310bc1
- (void)wasPushed;	// 0x33310ac1
@end

