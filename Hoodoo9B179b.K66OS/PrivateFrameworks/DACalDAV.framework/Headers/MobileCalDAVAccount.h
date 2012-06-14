/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <DAAccount.h> // Unknown library
#import "DACalDAV-Structs.h"

@class NSSet, NSURL, NSDictionary, DACoreDAVTaskManager, NSTimeZone, NSMutableDictionary, NSMutableSet, CalDAVPrincipalSearchPropertySet, CoreDAVDiscoveryTaskGroup, DACoreDAVLogger, CalDAVServerVersion, NSDate, MobileCalDAVPrincipal, MobileCalDAVAccountRefreshActor, CalDAVRefreshContext, NSString;

@interface MobileCalDAVAccount : DAAccount {
	DACoreDAVTaskManager *_taskManager;	// 64 = 0x40
	NSMutableDictionary *_principals;	// 68 = 0x44
	MobileCalDAVPrincipal *_mainPrincipal;	// 72 = 0x48
	int _preferredEventDaysToSync;	// 76 = 0x4c
	int _preferredToDoDaysToSync;	// 80 = 0x50
	NSMutableSet *_calendars;	// 84 = 0x54
	BOOL _subscribedCalendarsChanged;	// 88 = 0x58
	NSString *_collectionSetName;	// 92 = 0x5c
	CalDAVPrincipalSearchPropertySet *_searchPropertySet;	// 96 = 0x60
	CoreDAVDiscoveryTaskGroup *_checkValidityTaskGroup;	// 100 = 0x64
	MobileCalDAVAccountRefreshActor *_actor;	// 104 = 0x68
	BOOL _isRefreshing;	// 108 = 0x6c
	BOOL _isSpinning;	// 109 = 0x6d
	BOOL _needsAccountPropertyRefresh;	// 110 = 0x6e
	CalDAVRefreshContext *_refreshContext;	// 112 = 0x70
	NSMutableSet *_searchTaskSet;	// 116 = 0x74
	DACoreDAVLogger *_curLogger;	// 120 = 0x78
	CalDAVServerVersion *_serverVersion;	// 124 = 0x7c
	NSMutableDictionary *_itemIDsToMoveActions;	// 128 = 0x80
	NSMutableSet *_movedItemURLStrings;	// 132 = 0x84
@private
	BOOL _searchQueriesShouldCancel;	// 136 = 0x88
}
@property(assign) int calDAVAccountVersion;	// G=0x308fe149; S=0x308fe17d; 
@property(readonly, assign) NSSet *calendars;	// G=0x308fec61; 
@property(retain) NSURL *collectionSetURL;	// G=0x308fe89d; S=0x308fe8e1; 
@property(retain) id host;	// G=0x308fe3f1; S=0x308fe42d; converted property
@property(assign) BOOL isRefreshing;	// G=0x309026e5; S=0x309026f5; @synthesize=_isRefreshing
@property(assign) BOOL isWritable;	// G=0x308fe971; S=0x308fe9dd; 
@property(readonly, assign) NSMutableDictionary *itemIDsToMoveActions;	// G=0x3090275d; @synthesize=_itemIDsToMoveActions
@property(retain) MobileCalDAVPrincipal *mainPrincipal;	// G=0x3090277d; S=0x30902791; @synthesize=_mainPrincipal
@property(readonly, assign) NSSet *movedItemURLStrings;	// G=0x3090276d; @synthesize=_movedItemURLStrings
@property(assign) BOOL needsAccountPropertyRefresh;	// G=0x3090273d; S=0x3090274d; @synthesize=_needsAccountPropertyRefresh
@property(readonly, assign) NSDate *ocurrenceCacheEndDate;	// G=0x308ff645; 
@property(readonly, assign) NSDate *ocurrenceCacheStartDate;	// G=0x308ff60d; 
@property(assign) int overriddenPort;	// G=0x308fe345; S=0x308fe2e5; 
@property(retain) NSString *overriddenScheme;	// G=0x308fe3d5; S=0x308fe379; 
@property(retain) NSString *overriddenServer;	// G=0x308fe2c9; S=0x308fe26d; 
@property(assign) int port;	// G=0x308fe5bd; S=0x308fe579; converted property
@property(assign) int preferredEventDaysToSync;	// G=0x309027c5; S=0x309027d5; @synthesize=_preferredEventDaysToSync
@property(assign) int preferredToDoDaysToSync;	// G=0x309027e5; S=0x309027f5; @synthesize=_preferredToDoDaysToSync
@property(retain) id principalURL;	// G=0x308fe66d; S=0x308fe68d; converted property
@property(readonly, assign) NSDictionary *principals;	// G=0x309027b5; @synthesize=_principals
@property(retain) CalDAVRefreshContext *refreshContext;	// G=0x30902705; S=0x30902719; @synthesize=_refreshContext
@property(retain) id scheme;	// G=0x308fe4b5; S=0x308fe4f1; converted property
@property(retain) id searchPropertySet;	// G=0x308fe91d; S=0x308fe92d; 
@property(assign) BOOL searchQueriesShouldCancel;	// G=0x30902805; S=0x30902815; @synthesize=_searchQueriesShouldCancel
@property(assign) CalDAVServerVersion *serverVersion;	// G=0x308ff43d; S=0x308ff4ad; 
@property(readonly, assign) BOOL shouldFilterEventSyncTimeRange;	// G=0x308ff67d; 
@property(readonly, assign) BOOL shouldFilterSyncTimeRangeForInbox;	// G=0x308ff715; 
@property(readonly, assign) BOOL shouldFilterTodoSyncTimeRange;	// G=0x308ff6c9; 
@property(retain, nonatomic) NSDictionary *subscribedCalendars;	// G=0x308fe129; S=0x308fe08d; 
@property(readonly, assign) BOOL supportsEvents;	// G=0x308ff7fd; 
@property(readonly, assign) BOOL supportsReminders;	// G=0x308ff781; 
@property(readonly, retain) DACoreDAVTaskManager *taskManager;	// G=0x308ff805; converted property
@property(assign) BOOL useSSL;	// G=0x308fe63d; S=0x308fe609; converted property
@property(retain) id username;	// G=0x308fe1c1; S=0x308fe1e1; converted property
@property(readonly, assign) NSTimeZone *viewedTimeZone;	// G=0x308ff5f1; 
@property(assign) BOOL wasMigrated;	// G=0x308fea21; S=0x308fead5; 
+ (Class)accountClass;	// 0x308fd301
+ (Class)clientClass;	// 0x308fd31d
+ (id)defaultProperties;	// 0x308fca51
+ (id)supportedDataclasses;	// 0x308fd339
- (id)init;	// 0x308fcb91
- (id)initWithProperties:(id)properties;	// 0x308fc569
- (id)_calendarConstraintsPath;	// 0x308ff95d
- (id)_calendarConstraintsResource;	// 0x308ff859
- (id)_collectActionsFromMoveDictionary:(CFDictionaryRef)moveDictionary forDataclass:(id)dataclass outShouldSave:(BOOL *)anOut;	// 0x309007b9
- (void)_collectMoveActions;	// 0x30900c65
- (BOOL)_needsNewAccountIDForOldVersion:(int)oldVersion;	// 0x308fdb49
- (id)_oldURLsForKeychain;	// 0x308fd8dd
- (id)_powerAssertionContext;	// 0x30902125
- (id)_powerAssertionGroupIdentifier;	// 0x30902129
- (void)_setSpinning:(BOOL)spinning;	// 0x30900019
- (void)_updateCalendarStore:(BOOL)store;	// 0x308ffd09
- (BOOL)_updateCalendarStoreProperties:(void *)properties;	// 0x308ffa29
- (void)_upgradeAccountToTelluride;	// 0x308fd3d1
- (BOOL)_upgradeSelfFromVersion:(int)version superClassUpgraded:(BOOL)upgraded;	// 0x308fdb55
- (BOOL)accountNeedsUpgrade;	// 0x308fdf95
- (void)addCalendar:(id)calendar;	// 0x308feb9d
- (void)addPrincipal:(id)principal;	// 0x308ff3a9
// declared property getter: - (int)calDAVAccountVersion;	// 0x308fe149
// declared property getter: - (id)calendars;	// 0x308fec61
- (void)cancelAllSearchQueries;	// 0x309019f9
- (void)cancelRefresh;	// 0x3090007d
- (void)cancelSearchQuery:(id)query;	// 0x309018b1
- (void)checkValidityWithConsumer:(id)consumer;	// 0x30901ee5
// declared property getter: - (id)collectionSetURL;	// 0x308fe89d
- (void *)copyCalStore;	// 0x308ff9d5
- (void)coreDAVLogDiagnosticMessage:(id)message atLevel:(int)level;	// 0x30902659
- (int)coreDAVLogLevel;	// 0x30902639
- (void)coreDAVLogTransmittedDataPartial:(id)partial;	// 0x309026c1
- (int)coreDAVOutputLevel;	// 0x30902651
- (void)coreDAVTransmittedDataFinished;	// 0x309026e1
- (void)dealloc;	// 0x308fcbd1
- (void)discoveryTask:(id)task gotAccountInfo:(id)info error:(id)error;	// 0x30901b39
- (void)dropPowerAssertions;	// 0x3090223d
// converted property getter: - (id)host;	// 0x308fe3f1
- (BOOL)isCalDAVAccount;	// 0x309022dd
- (BOOL)isEqualToAccount:(id)account;	// 0x309022e1
// declared property getter: - (BOOL)isRefreshing;	// 0x309026e5
// declared property getter: - (BOOL)isWritable;	// 0x308fe971
// declared property getter: - (id)itemIDsToMoveActions;	// 0x3090275d
- (id)localizedIdenticalAccountFailureMessage;	// 0x30902511
- (id)localizedInvalidPasswordMessage;	// 0x30902589
// declared property getter: - (id)mainPrincipal;	// 0x3090277d
// declared property getter: - (id)movedItemURLStrings;	// 0x3090276d
// declared property getter: - (BOOL)needsAccountPropertyRefresh;	// 0x3090273d
// declared property getter: - (id)ocurrenceCacheEndDate;	// 0x308ff645
// declared property getter: - (id)ocurrenceCacheStartDate;	// 0x308ff60d
// declared property getter: - (int)overriddenPort;	// 0x308fe345
// declared property getter: - (id)overriddenScheme;	// 0x308fe3d5
// declared property getter: - (id)overriddenServer;	// 0x308fe2c9
- (void)performSearchQuery:(id)query;	// 0x3090151d
// converted property getter: - (int)port;	// 0x308fe5bd
// declared property getter: - (int)preferredEventDaysToSync;	// 0x309027c5
// declared property getter: - (int)preferredToDoDaysToSync;	// 0x309027e5
// converted property getter: - (id)principalURL;	// 0x308fe66d
// declared property getter: - (id)principals;	// 0x309027b5
- (id)properties;	// 0x308fce51
- (void)reattainPowerAssertions;	// 0x3090228d
- (void)refreshActor:(id)actor didCompleteWithError:(id)error;	// 0x30900155
// declared property getter: - (id)refreshContext;	// 0x30902705
- (void)refreshWithContext:(id)context;	// 0x30900f69
- (void)releasePowerAssertion;	// 0x3090219d
- (void)reloadCalendars;	// 0x308ff2e1
- (void)removeCalendar:(id)calendar;	// 0x308febf5
- (void)removePrincipal:(id)principal;	// 0x308ff401
- (void)retainPowerAssertion;	// 0x30902139
// converted property getter: - (id)scheme;	// 0x308fe4b5
// declared property getter: - (id)searchPropertySet;	// 0x308fe91d
- (BOOL)searchQueriesRunning;	// 0x30901b05
// declared property getter: - (BOOL)searchQueriesShouldCancel;	// 0x30902805
- (id)serverBaseURL;	// 0x308fe7b5
// declared property getter: - (id)serverVersion;	// 0x308ff43d
- (void)setAccountDescription:(id)description;	// 0x308fe859
// declared property setter: - (void)setCalDAVAccountVersion:(int)version;	// 0x308fe17d
// declared property setter: - (void)setCollectionSetURL:(id)url;	// 0x308fe8e1
// converted property setter: - (void)setHost:(id)host;	// 0x308fe42d
// declared property setter: - (void)setIsRefreshing:(BOOL)refreshing;	// 0x309026f5
// declared property setter: - (void)setIsWritable:(BOOL)writable;	// 0x308fe9dd
// declared property setter: - (void)setMainPrincipal:(id)principal;	// 0x30902791
// declared property setter: - (void)setNeedsAccountPropertyRefresh:(BOOL)refresh;	// 0x3090274d
// declared property setter: - (void)setOverriddenPort:(int)port;	// 0x308fe2e5
// declared property setter: - (void)setOverriddenScheme:(id)scheme;	// 0x308fe379
// declared property setter: - (void)setOverriddenServer:(id)server;	// 0x308fe26d
// converted property setter: - (void)setPort:(int)port;	// 0x308fe579
// declared property setter: - (void)setPreferredEventDaysToSync:(int)sync;	// 0x309027d5
// declared property setter: - (void)setPreferredToDoDaysToSync:(int)sync;	// 0x309027f5
// converted property setter: - (void)setPrincipalURL:(id)url;	// 0x308fe68d
// declared property setter: - (void)setRefreshContext:(id)context;	// 0x30902719
// converted property setter: - (void)setScheme:(id)scheme;	// 0x308fe4f1
// declared property setter: - (void)setSearchPropertySet:(id)set;	// 0x308fe92d
// declared property setter: - (void)setSearchQueriesShouldCancel:(BOOL)cancel;	// 0x30902815
// declared property setter: - (void)setServerVersion:(id)version;	// 0x308ff4ad
// declared property setter: - (void)setSubscribedCalendars:(id)calendars;	// 0x308fe08d
// converted property setter: - (void)setUseSSL:(BOOL)ssl;	// 0x308fe609
// converted property setter: - (void)setUsername:(id)username;	// 0x308fe1e1
// declared property setter: - (void)setWasMigrated:(BOOL)migrated;	// 0x308fead5
// declared property getter: - (BOOL)shouldFilterEventSyncTimeRange;	// 0x308ff67d
// declared property getter: - (BOOL)shouldFilterSyncTimeRangeForInbox;	// 0x308ff715
// declared property getter: - (BOOL)shouldFilterTodoSyncTimeRange;	// 0x308ff6c9
- (BOOL)shouldLogTransmittedData;	// 0x3090269d
- (void)shutdown;	// 0x30901b35
- (id)spinnerIdentifiers;	// 0x308fffb9
- (id)stateString;	// 0x308fd369
// declared property getter: - (id)subscribedCalendars;	// 0x308fe129
- (BOOL)supportsDADataclass:(int)dataclass;	// 0x308fd359
// declared property getter: - (BOOL)supportsEvents;	// 0x308ff7fd
// declared property getter: - (BOOL)supportsReminders;	// 0x308ff781
- (void)task:(id)task didFinishWithError:(id)error;	// 0x30901205
// converted property getter: - (id)taskManager;	// 0x308ff805
- (BOOL)upgradeAccount;	// 0x308fdf0d
// converted property getter: - (BOOL)useSSL;	// 0x308fe63d
// converted property getter: - (id)username;	// 0x308fe1c1
- (BOOL)usesTokenAuth;	// 0x308ff801
// declared property getter: - (id)viewedTimeZone;	// 0x308ff5f1
// declared property getter: - (BOOL)wasMigrated;	// 0x308fea21
- (id)wellKnownPaths;	// 0x30901d4d
@end
