/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"

@class SettingsChooseAlbumArtworkController, BRControl, ATVDataQuery, NSArray;

__attribute__((visibility("hidden")))
@interface SettingsChoosePhotosController : BRViewController {
	NSArray *_servers;	// 100 = 0x64
	NSArray *_feedPhotoSourceMerchants;	// 104 = 0x68
	BRControl *_cupidPreview;	// 108 = 0x6c
	ATVDataQuery *_cupidPreviewQuery;	// 112 = 0x70
	SettingsChooseAlbumArtworkController *_albumArtworkController;	// 116 = 0x74
}
- (id)init;	// 0x9df11
- (void).cxx_destruct;	// 0x9f505
- (id)_cupidPreview;	// 0xa0365
- (void)_cupidPreviewQueryComplete:(id)complete;	// 0xa04e1
- (void)_dataServersChanged:(id)changed;	// 0xa02f1
- (id)_feedPhotoSourceMerchants;	// 0xa00d9
- (void)_handleAlbumArtworkSelection;	// 0x9f8ed
- (void)_handleAppleDefaultAnimalPhotosSelection;	// 0x9f639
- (void)_handleAppleDefaultFlowerPhotosSelection;	// 0x9f6fd
- (void)_handleAppleDefaultNaturePhotosSelection;	// 0x9f575
- (void)_handleComputersPhotosSelectionForServer:(id)server;	// 0x9f7c1
- (void)_handleCupidSelection;	// 0x9fa71
- (void)_handleDotMacSelection;	// 0x9fc35
- (void)_handleFeedMerchantSelectionForMerchant:(id)merchant;	// 0xa003d
- (void)_handleFlickrSelection;	// 0x9fe39
- (int)_indexOfServerWithID:(id)anId;	// 0xa0885
- (id)_servers;	// 0xa0279
- (id)_titleForServerAtIndex:(int)index;	// 0xa0801
- (void)dealloc;	// 0x9e0c1
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x9ebf1
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x9f2d5
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x9e14d
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x9e8f5
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x9e855
- (long)numberOfSectionsInList:(id)list;	// 0x9e851
@end

