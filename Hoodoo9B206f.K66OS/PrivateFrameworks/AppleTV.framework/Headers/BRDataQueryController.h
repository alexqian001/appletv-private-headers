/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRViewController.h"

@class NSArray, BRMediaMenuView, NSTimer, NSString;

@interface BRDataQueryController : BRViewController {
@private
	id _serverID;	// 88 = 0x58
	unsigned long _dataClientType;	// 92 = 0x5c
	ATVDataClientRef _dataClient;	// 96 = 0x60
	BRMediaMenuView *_mediaMenuView;	// 100 = 0x64
	NSArray *_data;	// 104 = 0x68
	ATVMediaQueryRef _preDataQuery;	// 108 = 0x6c
	ATVMediaQueryRef _dataQuery;	// 112 = 0x70
	ATVMediaQueryRef _previewQuery;	// 116 = 0x74
	NSTimer *_spinnerTimer;	// 120 = 0x78
	BOOL _showingSpinner;	// 124 = 0x7c
	void *_dataItemToSelect;	// 128 = 0x80
	ATVMediaQueryRef _playQuery;	// 132 = 0x84
	BOOL _handlingDataClientUpdate;	// 136 = 0x88
	BOOL _refreshNeeded;	// 137 = 0x89
	BOOL _reloadListViewNeeded;	// 138 = 0x8a
	NSTimer *_serverFoundWaitTimer;	// 140 = 0x8c
	BOOL attemptConnectionOnServerRemove;	// 144 = 0x90
	NSString *_spinnerLoadingText;	// 148 = 0x94
}
@property(assign, nonatomic) BOOL attemptConnectionOnServerRemove;	// G=0x3664c509; S=0x3664c519; @synthesize
@property(readonly, retain) NSArray *data;	// G=0x3664c129; converted property
@property(readonly, assign, nonatomic) ATVDataClientRef dataClient;	// G=0x3664c159; @synthesize=_dataClient
@property(readonly, assign) unsigned long dataClientType;	// G=0x3664c149; converted property
@property(assign) void *dataItemToSelect;	// G=0x3664c1d9; S=0x3664c1ad; converted property
@property(readonly, retain) BRMediaMenuView *mediaMenuView;	// G=0x3664c0ed; converted property
@property(readonly, retain) id serverID;	// G=0x3664c139; converted property
@property(retain, nonatomic) NSString *spinnerLoadingText;	// G=0x3664c529; S=0x3664c539; @synthesize=_spinnerLoadingText
+ (id)controllerForATVMediaType:(ATVMediaTypeRef)atvmediaType collection:(ATVMediaCollectionRef)collection dataClient:(ATVDataClientRef)client dataClientType:(unsigned long)type playAllItems:(BOOL)items;	// 0x3664b715
- (id)initWithDataClient:(ATVDataClientRef)dataClient dataClientType:(unsigned long)type;	// 0x3664b755
- (id)initWithServerID:(id)serverID dataClientType:(unsigned long)type;	// 0x3664b719
- (void)_dataClientConnectionHandler:(id)handler;	// 0x3664d8e9
- (void)_dataClientConnectionHandlerWithObject:(id)object;	// 0x3664d779
- (void)_dataClientDataUpdated:(id)updated;	// 0x3664dc8d
- (void)_dataClientStatusChanged:(id)changed;	// 0x3664dc31
- (void)_dataQueryComplete;	// 0x3664d221
- (void)_dataServerConnectionHandler:(id)handler;	// 0x3664db0d
- (void)_dataServerFailedToConnect:(id)connect;	// 0x3664db7d
- (void)_dataServersChangedHandler:(id)handler;	// 0x3664de31
- (void)_displayErrorForQuery:(ATVMediaQueryRef)query;	// 0x3664ce1d
- (void)_displayFailedToConnect;	// 0x3664cfb5
- (void)_executeDataQuery;	// 0x3664d45d
- (void)_executePreDataQuery;	// 0x3664d35d
- (void)_handleDataQueryCompletion;	// 0x3664c65d
- (BOOL)_isDataServerEqual:(ATVDataServerRef)equal;	// 0x3664e1e9
- (void)_mediaItemPropertySetNotification:(id)notification;	// 0x3664dd99
- (void)_playQueryComplete;	// 0x3664d2b5
- (void)_preDataQueryComplete;	// 0x3664d0fd
- (void)_previewQueryComplete;	// 0x3664d265
- (void)_serverFoundWaitHandler:(id)handler;	// 0x3664e2cd
- (void)_setDataClient:(ATVDataClientRef)client;	// 0x3664cd09
- (void)_setDataQuery:(ATVMediaQueryRef)query;	// 0x3664d651
- (void)_setPlayQuery:(ATVMediaQueryRef)query;	// 0x3664d6b9
- (void)_setPreDataQuery:(ATVMediaQueryRef)query;	// 0x3664d61d
- (void)_setPreviewQuery:(ATVMediaQueryRef)query;	// 0x3664d685
- (void)_setServerID:(id)anId dataClientType:(unsigned long)type;	// 0x3664cc45
- (void)_showMediaView;	// 0x3664d30d
- (void)_showSpinner:(BOOL)spinner;	// 0x3664ca7d
- (void)_showSpinner:(BOOL)spinner delay:(BOOL)delay displayLoadingText:(BOOL)text;	// 0x3664c55d
- (void)_showSpinnerTimer:(id)timer;	// 0x3664ca3d
- (void)_updateDisabledStateForMenusInList:(id)list;	// 0x3664c819
- (id)accessibilityScreenContent;	// 0x3664c4d1
// declared property getter: - (BOOL)attemptConnectionOnServerRemove;	// 0x3664c509
- (id)controllerIdentifier;	// 0x3664d711
- (ATVMediaQueryRef)createDataQuery;	// 0x3664d6f5
- (ATVMediaQueryRef)createPlayQueryForIndexPath:(id)indexPath;	// 0x3664d741
- (ATVMediaQueryRef)createPreDataQuery;	// 0x3664d6ed
- (ATVMediaQueryRef)createPreviewQueryForIndexPath:(id)indexPath;	// 0x3664d701
// converted property getter: - (id)data;	// 0x3664c129
// declared property getter: - (ATVDataClientRef)dataClient;	// 0x3664c159
- (id)dataClientName;	// 0x3664c169
// converted property getter: - (unsigned long)dataClientType;	// 0x3664c149
- (BOOL)dataClientUpdated:(id)updated;	// 0x3664d771
- (void *)dataItemAtIndexPath:(id)indexPath;	// 0x3664d70d
// converted property getter: - (void *)dataItemToSelect;	// 0x3664c1d9
- (BOOL)dataQueryComplete:(ATVMediaQueryRef)complete;	// 0x3664d6f9
- (ATVDataServerRef)dataServer;	// 0x3664c18d
- (BOOL)dataServerConnectionChanged:(ATVDataServerRef)changed;	// 0x3664d775
- (void)dealloc;	// 0x3664b8a5
- (id)defaultIndexPathToSelect;	// 0x3664d6fd
- (id)errorControlForQuery:(ATVMediaQueryRef)query;	// 0x3664d769
- (id)errorForNoContent;	// 0x3664d749
- (id)identifier;	// 0x3664ba35
- (id)indexPathForDataItem:(void *)dataItem;	// 0x3664d709
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x3664c1f1
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0x3664c2f1
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x3664c1ed
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x3664c1e9
// converted property getter: - (id)mediaMenuView;	// 0x3664c0ed
- (void)playQueryComplete:(ATVMediaQueryRef)complete;	// 0x3664d745
- (BOOL)preDataQueryComplete:(id)complete;	// 0x3664d6f1
- (id)previewForItems:(id)items;	// 0x3664c401
- (BOOL)previewQueryComplete:(ATVMediaQueryRef)complete;	// 0x3664d705
- (void)restartDataQueryProcess;	// 0x3664c3d1
// converted property getter: - (id)serverID;	// 0x3664c139
// declared property setter: - (void)setAttemptConnectionOnServerRemove:(BOOL)remove;	// 0x3664c519
// converted property setter: - (void)setDataItemToSelect:(void *)select;	// 0x3664c1ad
// declared property setter: - (void)setSpinnerLoadingText:(id)text;	// 0x3664c539
- (void)setTitle:(id)title;	// 0x3664c0fd
// declared property getter: - (id)spinnerLoadingText;	// 0x3664c529
- (id)waitControl;	// 0x3664d76d
- (void)wasExhumed;	// 0x3664c031
- (void)wasPopped;	// 0x3664bf19
- (void)wasPushed;	// 0x3664ba55
@end
