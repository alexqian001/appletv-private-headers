/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRViewController.h"

@class NSTimer, BRMediaMenuView, NSArray;

@interface BRDataQueryController : BRViewController {
@private
	id _serverID;	// 64 = 0x40
	int _dataClientType;	// 68 = 0x44
	ATVDataClientRef _dataClient;	// 72 = 0x48
	BRMediaMenuView *_mediaMenuView;	// 76 = 0x4c
	NSArray *_data;	// 80 = 0x50
	ATVMediaQueryRef _preDataQuery;	// 84 = 0x54
	ATVMediaQueryRef _dataQuery;	// 88 = 0x58
	ATVMediaQueryRef _previewQuery;	// 92 = 0x5c
	NSTimer *_spinnerTimer;	// 96 = 0x60
	BOOL _showingSpinner;	// 100 = 0x64
	void *_dataItemToSelect;	// 104 = 0x68
	ATVMediaQueryRef _playQuery;	// 108 = 0x6c
	BOOL _handlingDataClientUpdate;	// 112 = 0x70
	BOOL _refreshNeeded;	// 113 = 0x71
	BOOL _reloadListViewNeeded;	// 114 = 0x72
	NSTimer *_serverFoundWaitTimer;	// 116 = 0x74
	BOOL attemptConnectionOnServerRemove;	// 120 = 0x78
}
@property(assign, nonatomic) BOOL attemptConnectionOnServerRemove;	// G=0x33006221; S=0x33006231; @synthesize
@property(readonly, retain) NSArray *data;	// G=0x330061c9; converted property
@property(readonly, assign) ATVDataClientRef dataClient;	// G=0x330061f9; converted property
@property(readonly, assign) int dataClientType;	// G=0x330061e9; converted property
@property(assign) void *dataItemToSelect;	// G=0x33006209; S=0x33007525; converted property
@property(readonly, retain) BRMediaMenuView *mediaMenuView;	// G=0x330061b9; converted property
@property(readonly, retain) id serverID;	// G=0x330061d9; converted property
- (id)init;	// 0x33006869
- (id)initWithServerID:(id)serverID dataClientType:(int)type;	// 0x33006a41
- (void)_dataClientConnectionHandler:(id)handler;	// 0x33007f2d
- (void)_dataClientConnectionHandlerWithObject:(id)object;	// 0x33006d49
- (void)_dataClientDataUpdated:(id)updated;	// 0x3300633d
- (void)_dataClientStatusChanged:(id)changed;	// 0x33006cf9
- (void)_dataQueryComplete;	// 0x330065a1
- (void)_dataServerConnectionHandler:(id)handler;	// 0x33006c95
- (void)_dataServerFailedToConnect:(id)connect;	// 0x330063bd
- (void)_dataServersChangedHandler:(id)handler;	// 0x33008119
- (void)_displayErrorForQuery:(ATVMediaQueryRef)query;	// 0x33007db9
- (void)_displayFailedToConnect;	// 0x33007cf5
- (void)_executeDataQuery;	// 0x33007555
- (void)_executePreDataQuery;	// 0x33007645
- (void)_handleDataQueryCompletion;	// 0x330077ed
- (BOOL)_isDataServerEqual:(ATVDataServerRef)equal;	// 0x3300848d
- (void)_mediaItemPropertySetNotification:(id)notification;	// 0x330062bd
- (void)_playQueryComplete;	// 0x330064c5
- (void)_preDataQueryComplete;	// 0x33007bed
- (void)_previewQueryComplete;	// 0x330077a5
- (void)_serverFoundWaitHandler:(id)handler;	// 0x33006275
- (void)_setDataClient:(ATVDataClientRef)client;	// 0x3300742d
- (void)_setDataQuery:(ATVMediaQueryRef)query;	// 0x330073bd
- (void)_setPlayQuery:(ATVMediaQueryRef)query;	// 0x3300734d
- (void)_setPreDataQuery:(ATVMediaQueryRef)query;	// 0x330073f5
- (void)_setPreviewQuery:(ATVMediaQueryRef)query;	// 0x33007385
- (void)_showSpinner;	// 0x33007ac5
- (void)_showSpinner:(BOOL)spinner delay:(BOOL)delay;	// 0x33006679
- (void)_updateDisabledStateForMenusInList:(id)list;	// 0x3300794d
- (id)accessibilityScreenContent;	// 0x3300673d
// declared property getter: - (BOOL)attemptConnectionOnServerRemove;	// 0x33006221
- (id)controllerIdentifier;	// 0x3300649d
- (ATVMediaQueryRef)createDataQuery;	// 0x33006249
- (ATVMediaQueryRef)createPlayQueryForIndexPath:(id)indexPath;	// 0x33006261
- (ATVMediaQueryRef)createPreDataQuery;	// 0x33006241
- (ATVMediaQueryRef)createPreviewQueryForIndexPath:(id)indexPath;	// 0x33006251
// converted property getter: - (id)data;	// 0x330061c9
// converted property getter: - (ATVDataClientRef)dataClient;	// 0x330061f9
- (id)dataClientName;	// 0x33007311
// converted property getter: - (int)dataClientType;	// 0x330061e9
- (BOOL)dataClientUpdated:(ATVDataClientRef)updated;	// 0x3300626d
- (void *)dataItemAtIndexPath:(id)indexPath;	// 0x3300625d
// converted property getter: - (void *)dataItemToSelect;	// 0x33006209
- (BOOL)dataQueryComplete:(ATVMediaQueryRef)complete;	// 0x3300624d
- (ATVDataServerRef)dataServer;	// 0x3300732d
- (BOOL)dataServerConnectionChanged:(ATVDataServerRef)changed;	// 0x33006271
- (void)dealloc;	// 0x33006b3d
- (id)errorControlForQuery:(ATVMediaQueryRef)query;	// 0x33006269
- (id)errorForNoContent;	// 0x33006479
- (id)identifier;	// 0x33006849
- (id)indexPathForDataItem:(void *)dataItem;	// 0x33006259
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x3300772d
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0x330076d1
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x3300621d
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x33006219
// converted property getter: - (id)mediaMenuView;	// 0x330061b9
- (void)playQueryComplete:(ATVMediaQueryRef)complete;	// 0x33006265
- (BOOL)preDataQueryComplete:(id)complete;	// 0x33006245
- (id)previewForItems:(id)items;	// 0x3300676d
- (BOOL)previewQueryComplete:(ATVMediaQueryRef)complete;	// 0x33006255
- (void)restartDataQueryProcess;	// 0x3300681d
// converted property getter: - (id)serverID;	// 0x330061d9
// declared property setter: - (void)setAttemptConnectionOnServerRemove:(BOOL)remove;	// 0x33006231
// converted property setter: - (void)setDataItemToSelect:(void *)select;	// 0x33007525
- (void)setServerID:(id)anId dataClientType:(int)type;	// 0x33006eb1
- (void)wasExhumed;	// 0x33006891
- (void)wasPopped;	// 0x33006939
- (void)wasPushed;	// 0x33006f65
@end
