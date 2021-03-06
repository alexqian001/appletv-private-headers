/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"

@class NSArray, NSMutableDictionary, SettingsChooseAlbumArtworkController, BRControl, ATVDataQuery;

__attribute__((visibility("hidden")))
@interface SettingsChoosePhotosController : BRViewController {
	NSArray *_servers;	// 100 = 0x64
	BRControl *_cupidPreview;	// 104 = 0x68
	ATVDataQuery *_cupidPreviewQuery;	// 108 = 0x6c
	SettingsChooseAlbumArtworkController *_albumArtworkController;	// 112 = 0x70
	NSArray *_sections;	// 116 = 0x74
	NSMutableDictionary *_itmsCollectionPreviewResults;	// 120 = 0x78
	id _ntITMSConnection;	// 124 = 0x7c
	NSMutableDictionary *_itmsCollectionPreviewQueries;	// 128 = 0x80
}
@property(retain, nonatomic) NSMutableDictionary *itmsCollectionPreviewQueries;	// G=0xa0455; S=0xa0465; @synthesize=_itmsCollectionPreviewQueries
@property(retain, nonatomic) NSMutableDictionary *itmsCollectionPreviewResults;	// G=0xa040d; S=0xa041d; @synthesize=_itmsCollectionPreviewResults
@property(retain, nonatomic) id ntITMSConnection;	// G=0xa0445; S=0x9eac9; @synthesize=_ntITMSConnection
@property(copy, nonatomic) NSArray *sections;	// G=0xa03e9; S=0xa03fd; @synthesize=_sections
- (id)init;	// 0x9e831
- (void).cxx_destruct;	// 0xa048d
- (void)_configureSections;	// 0xa12f5
- (id)_cupidPreview;	// 0xa258d
- (void)_dataServersChanged:(id)changed;	// 0xa2509
- (void)_getPreviewForITMSCollectionID:(id)itmscollectionID completionHandler:(id)handler;	// 0xa29e1
- (void)_handleAlbumArtworkSelection;	// 0xa0b09
- (void)_handleAppleDefaultPhotosSelection;	// 0xa0539
- (void)_handleComputersPhotosSelectionForServer:(id)server;	// 0xa09dd
- (void)_handleCupidSelection;	// 0xa0c8d
- (void)_handleDotMacSelection;	// 0xa0e51
- (void)_handleFeedMerchantSelectionForMerchant:(id)merchant;	// 0xa1259
- (void)_handleFlickrSelection;	// 0xa1055
- (void)_handleITMSMerchantSelectionWithCollectionID:(id)collectionID name:(id)name;	// 0xa05fd
- (int)_indexOfServerWithID:(id)anId;	// 0xa3275
- (BOOL)_isComputersSection:(id)section;	// 0xa2249
- (BOOL)_isCupidSelected;	// 0xa22c1
- (id)_screensaverDictionaries;	// 0xa17f1
- (id)_screensaverDictionariesFromResource;	// 0xa1ce9
- (id)_screensaverDictionariesFromVendorBags;	// 0xa1d7d
- (id)_servers;	// 0xa2491
- (id)_titleForDictionary:(id)dictionary merchant:(id)merchant;	// 0xa3359
- (id)_titleForServerAtIndex:(int)index;	// 0xa31f1
- (void)dealloc;	// 0x9ea5d
// declared property getter: - (id)itmsCollectionPreviewQueries;	// 0xa0455
// declared property getter: - (id)itmsCollectionPreviewResults;	// 0xa040d
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x9f729
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0xa0005
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x9ee91
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x9eddd
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x9eca9
// declared property getter: - (id)ntITMSConnection;	// 0xa0445
- (long)numberOfSectionsInList:(id)list;	// 0x9ec6d
// declared property getter: - (id)sections;	// 0xa03e9
// declared property setter: - (void)setItmsCollectionPreviewQueries:(id)queries;	// 0xa0465
// declared property setter: - (void)setItmsCollectionPreviewResults:(id)results;	// 0xa041d
// declared property setter: - (void)setNtITMSConnection:(id)connection;	// 0x9eac9
// declared property setter: - (void)setSections:(id)sections;	// 0xa03fd
- (void)wasPopped;	// 0x9eb41
@end

