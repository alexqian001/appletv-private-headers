/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"

@class ATVFullScreenPhotoBrowserController, ATVDataQuery, ATVDataCollection, ATVDataItem, NSDictionary, NSArray, ATVDataClient, NSTimer;

__attribute__((visibility("hidden")))
@interface ATVCupidPhotoBrowserTemplate : BRViewController {
	BOOL _viewReloadPending;	// 104 = 0x68
	BOOL _dataRequiresUpdate;	// 105 = 0x69
	ATVDataClient *_dataClient;	// 108 = 0x6c
	ATVDataCollection *_collection;	// 112 = 0x70
	ATVDataItem *_initialSelection;	// 116 = 0x74
	NSArray *_resultData;	// 120 = 0x78
	ATVFullScreenPhotoBrowserController *_fullScreenController;	// 124 = 0x7c
	NSTimer *_spinnerTimer;	// 128 = 0x80
	ATVDataQuery *_pendingCollectionMetaDataQuery;	// 132 = 0x84
	NSDictionary *_likeTextAttributes;	// 136 = 0x88
}
@property(retain, nonatomic) ATVDataCollection *collection;	// G=0xadc61; S=0xadc71; @synthesize=_collection
@property(retain, nonatomic) ATVDataClient *dataClient;	// G=0xadc29; S=0xadc39; @synthesize=_dataClient
@property(assign, nonatomic) BOOL dataRequiresUpdate;	// G=0xadd81; S=0xadd91; @synthesize=_dataRequiresUpdate
@property(retain, nonatomic) ATVFullScreenPhotoBrowserController *fullScreenController;	// G=0xadd09; S=0xadd19; @synthesize=_fullScreenController
@property(retain, nonatomic) ATVDataItem *initialSelection;	// G=0xadc99; S=0xadca9; @synthesize=_initialSelection
@property(retain, nonatomic) NSDictionary *likeTextAttributes;	// G=0xaddd9; S=0xadde9; @synthesize=_likeTextAttributes
@property(retain, nonatomic) ATVDataQuery *pendingCollectionMetaDataQuery;	// G=0xadda1; S=0xaddb1; @synthesize=_pendingCollectionMetaDataQuery
@property(retain, nonatomic) NSArray *resultData;	// G=0xadcd1; S=0xadce1; @synthesize=_resultData
@property(assign, nonatomic) __weak NSTimer *spinnerTimer;	// G=0xadd61; S=0xaa045; @synthesize=_spinnerTimer
@property(assign, nonatomic) BOOL viewReloadPending;	// G=0xadd41; S=0xadd51; @synthesize=_viewReloadPending
+ (id)_commentDataWithComment:(id)comment filterLikeAndCaption:(BOOL)caption;	// 0xac199
+ (id)controllerForCollection:(id)collection dataClient:(id)client;	// 0xa9dfd
- (id)initForCollection:(id)collection dataClient:(id)client;	// 0xa9e6d
- (void).cxx_destruct;	// 0xade11
- (void)_dataClientDataUpdated:(id)updated;	// 0xada89
- (void)_dataClientStatusChanged:(id)changed;	// 0xadb91
- (void)_dataQueryComplete;	// 0xac985
- (void)_executeDataQuery;	// 0xac5b1
- (BOOL)_handleContextMenuSelection:(id)selection;	// 0xad811
- (void)_handleItemPlay:(id)play;	// 0xad2ed
- (void)_handleItemSelection:(id)selection;	// 0xad21d
- (void)_handleSlideshowSelection:(id)selection;	// 0xad4f5
- (void)_initiateSlideshowPlaybackAtIndex:(long)index inPhotos:(id)photos withOptions:(id)options;	// 0xace9d
- (void)_playerLastPlayedAsset:(id)asset;	// 0xad9c5
- (void)_playerStateChanged:(id)changed;	// 0xad8d9
- (void)_pushFullScreenControllerWithType:(int)type resultSubset:(id)subset initialIndex:(unsigned)index;	// 0xaa6d5
- (void)_showSpinner:(id)spinner;	// 0xacd81
- (id)_standardProvidersForPhotoContextMenuPhotoAtIndex:(int)index;	// 0xabd61
- (void)_updateFullScreenPhotoMetadataWithProperties:(id)properties;	// 0xabbe5
- (void)_updateItemInResultDataWithItem:(id)item;	// 0xaa55d
// declared property getter: - (id)collection;	// 0xadc61
// declared property getter: - (id)dataClient;	// 0xadc29
// declared property getter: - (BOOL)dataRequiresUpdate;	// 0xadd81
- (void)dealloc;	// 0xa9fd9
// declared property getter: - (id)fullScreenController;	// 0xadd09
// declared property getter: - (id)initialSelection;	// 0xadc99
// declared property getter: - (id)likeTextAttributes;	// 0xaddd9
// declared property getter: - (id)pendingCollectionMetaDataQuery;	// 0xadda1
// declared property getter: - (id)resultData;	// 0xadcd1
// declared property setter: - (void)setCollection:(id)collection;	// 0xadc71
// declared property setter: - (void)setDataClient:(id)client;	// 0xadc39
// declared property setter: - (void)setDataRequiresUpdate:(BOOL)update;	// 0xadd91
// declared property setter: - (void)setFullScreenController:(id)controller;	// 0xadd19
// declared property setter: - (void)setInitialSelection:(id)selection;	// 0xadca9
// declared property setter: - (void)setLikeTextAttributes:(id)attributes;	// 0xadde9
// declared property setter: - (void)setPendingCollectionMetaDataQuery:(id)query;	// 0xaddb1
// declared property setter: - (void)setResultData:(id)data;	// 0xadce1
// declared property setter: - (void)setSpinnerTimer:(id)timer;	// 0xaa045
// declared property setter: - (void)setViewReloadPending:(BOOL)pending;	// 0xadd51
// declared property getter: - (id)spinnerTimer;	// 0xadd61
// declared property getter: - (BOOL)viewReloadPending;	// 0xadd41
- (void)wasExhumed;	// 0xaa3f1
- (void)wasPopped;	// 0xaa169
- (void)wasPushed;	// 0xaa0c9
@end
