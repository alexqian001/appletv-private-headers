/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"

@class NSTimer, BRMediaMenuView, ATVDataQuery, ATVDataClient, NSArray;

__attribute__((visibility("hidden")))
@interface ATVRadioStoreController : BRViewController {
	ATVDataClient *_dataClient;	// 104 = 0x68
	ATVDataQuery *_pendingQuery;	// 108 = 0x6c
	NSTimer *_spinnerTimer;	// 112 = 0x70
	NSArray *_genres;	// 116 = 0x74
	BRMediaMenuView *_mediaMenuView;	// 120 = 0x78
}
@property(retain, nonatomic) ATVDataClient *dataClient;	// G=0x8231d; S=0x8232d; @synthesize=_dataClient
@property(copy, nonatomic) NSArray *genres;	// G=0x823c1; S=0x823d5; @synthesize=_genres
@property(assign, nonatomic) __weak BRMediaMenuView *mediaMenuView;	// G=0x823e5; S=0x82405; @synthesize=_mediaMenuView
@property(retain, nonatomic) ATVDataQuery *pendingQuery;	// G=0x82355; S=0x82365; @synthesize=_pendingQuery
@property(assign, nonatomic) __weak NSTimer *spinnerTimer;	// G=0x8238d; S=0x823ad; @synthesize=_spinnerTimer
- (id)init;	// 0x80eed
- (void).cxx_destruct;	// 0x82419
- (void)_executeDataQuery;	// 0x813a9
- (void)_setupStoreView;	// 0x8178d
- (void)_showSpinner;	// 0x8128d
- (void)_startQueryThenShowSpinnerIfNeeded;	// 0x80fdd
- (id)_stationForRowAtIndexPath:(id)indexPath;	// 0x81655
- (id)_titleForRowAtIndexPath:(id)indexPath;	// 0x816f5
- (id)_titleForSectionAtIndex:(unsigned)index;	// 0x816d1
- (void)controlWasDeactivated;	// 0x81121
// declared property getter: - (id)dataClient;	// 0x8231d
// declared property getter: - (id)genres;	// 0x823c1
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x81f49
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0x822ed
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x82171
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x81f3d
- (float)list:(id)list heightForSectionHeader:(long)sectionHeader;	// 0x81ef5
- (id)list:(id)list indexPathForItemID:(id)itemID;	// 0x81b8d
- (id)list:(id)list itemIDForIndexPath:(id)indexPath;	// 0x81afd
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x819a9
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x81a51
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x81a91
- (void)listWasActivated:(id)activated;	// 0x81e99
// declared property getter: - (id)mediaMenuView;	// 0x823e5
- (long)numberOfSectionsInList:(id)list;	// 0x81a4d
// declared property getter: - (id)pendingQuery;	// 0x82355
// declared property setter: - (void)setDataClient:(id)client;	// 0x8232d
// declared property setter: - (void)setGenres:(id)genres;	// 0x823d5
// declared property setter: - (void)setMediaMenuView:(id)view;	// 0x82405
// declared property setter: - (void)setPendingQuery:(id)query;	// 0x82365
// declared property setter: - (void)setSpinnerTimer:(id)timer;	// 0x823ad
// declared property getter: - (id)spinnerTimer;	// 0x8238d
- (void)wasPushed;	// 0x81091
- (void)windowMaxBoundsChanged;	// 0x8120d
@end
