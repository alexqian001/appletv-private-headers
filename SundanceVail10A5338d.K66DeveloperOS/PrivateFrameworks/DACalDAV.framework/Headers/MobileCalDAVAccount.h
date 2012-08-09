/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <DAAccount.h> // Unknown library
#import "DACalDAV-Structs.h"

@class NSSet, NSURL, NSDictionary, NSTimeZone, DACoreDAVTaskManager, NSMutableDictionary, NSMutableSet, CalDAVPrincipalSearchPropertySet, CoreDAVDiscoveryTaskGroup, DACoreDAVLogger, CalDAVServerVersion, NSDate, MobileCalDAVPrincipal, MobileCalDAVAccountRefreshActor, CalDAVRefreshContext, NSString;

@interface MobileCalDAVAccount : DAAccount {
	DACoreDAVTaskManager *_taskManager;	// 60 = 0x3c
	NSMutableDictionary *_principals;	// 64 = 0x40
	MobileCalDAVPrincipal *_mainPrincipal;	// 68 = 0x44
	int _preferredEventDaysToSync;	// 72 = 0x48
	int _preferredToDoDaysToSync;	// 76 = 0x4c
	NSMutableSet *_calendars;	// 80 = 0x50
	BOOL _subscribedCalendarsChanged;	// 84 = 0x54
	NSString *_collectionSetName;	// 88 = 0x58
	CalDAVPrincipalSearchPropertySet *_searchPropertySet;	// 92 = 0x5c
	CoreDAVDiscoveryTaskGroup *_checkValidityTaskGroup;	// 96 = 0x60
	MobileCalDAVAccountRefreshActor *_actor;	// 100 = 0x64
	BOOL _isRefreshing;	// 104 = 0x68
	BOOL _isSpinning;	// 105 = 0x69
	BOOL _needsAccountPropertyRefresh;	// 106 = 0x6a
	CalDAVRefreshContext *_refreshContext;	// 108 = 0x6c
	NSMutableSet *_searchTaskSet;	// 112 = 0x70
	DACoreDAVLogger *_curLogger;	// 116 = 0x74
	CalDAVServerVersion *_serverVersion;	// 120 = 0x78
	NSMutableDictionary *_itemIDsToMoveActions;	// 124 = 0x7c
	NSMutableSet *_movedItemURLStrings;	// 128 = 0x80
	int _wasMigrated;	// 132 = 0x84
	BOOL _searchQueriesShouldCancel;	// 136 = 0x88
}
@property(assign) int calDAVAccountVersion;	// G=0x31daadc9; S=0x31daadfd; 
@property(readonly, assign) NSSet *calendars;	// G=0x31dab69d; 
@property(retain) NSURL *collectionSetURL;	// G=0x31dab2b1; S=0x31dab2f5; 
@property(retain) id host;	// G=0x31daf8b9; S=0x31daf931; converted property
@property(assign) BOOL isRefreshing;	// G=0x31dafcb1; S=0x31dafcc9; @synthesize=_isRefreshing
@property(assign) BOOL isWritable;	// G=0x31dab385; S=0x31dab3f1; 
@property(readonly, assign) NSMutableDictionary *itemIDsToMoveActions;	// G=0x31dafd35; @synthesize=_itemIDsToMoveActions
@property(retain) MobileCalDAVPrincipal *mainPrincipal;	// G=0x31dafd5d; S=0x31dafd71; @synthesize=_mainPrincipal
@property(readonly, assign) NSSet *movedItemURLStrings;	// G=0x31dafd49; @synthesize=_movedItemURLStrings
@property(assign) BOOL needsAccountPropertyRefresh;	// G=0x31dafd05; S=0x31dafd1d; @synthesize=_needsAccountPropertyRefresh
@property(readonly, assign) NSDate *ocurrenceCacheEndDate;	// G=0x31dac091; 
@property(readonly, assign) NSDate *ocurrenceCacheStartDate;	// G=0x31dac059; 
@property(assign) int overriddenPort;	// G=0x31daaf1d; S=0x31daaebd; 
@property(retain) NSString *overriddenScheme;	// G=0x31daafb1; S=0x31daaf51; 
@property(retain) NSString *overriddenServer;	// G=0x31daaea1; S=0x31daae41; 
@property(assign) int port;	// G=0x31dafbc1; S=0x31dafb39; converted property
@property(assign) int preferredEventDaysToSync;	// G=0x31dafd95; S=0x31dafda9; @synthesize=_preferredEventDaysToSync
@property(assign) int preferredToDoDaysToSync;	// G=0x31dafdc1; S=0x31dafdd5; @synthesize=_preferredToDoDaysToSync
@property(retain) id principalURL;	// G=0x31daafcd; S=0x31daafed; converted property
@property(readonly, assign) NSDictionary *principals;	// G=0x31dafd81; @synthesize=_principals
@property(retain) CalDAVRefreshContext *refreshContext;	// G=0x31dafce1; S=0x31dafcf5; @synthesize=_refreshContext
@property(retain) id scheme;	// G=0x31daf9f9; S=0x31dafa71; converted property
@property(retain) id searchPropertySet;	// G=0x31dab331; S=0x31dab341; 
@property(assign) BOOL searchQueriesShouldCancel;	// G=0x31dafded; S=0x31dafe05; @synthesize=_searchQueriesShouldCancel
@property(assign) CalDAVServerVersion *serverVersion;	// G=0x31dabe75; S=0x31dabeed; 
@property(readonly, assign) BOOL shouldFilterEventSyncTimeRange;	// G=0x31dac0c9; 
@property(readonly, assign) BOOL shouldFilterSyncTimeRangeForInbox;	// G=0x31dac161; 
@property(readonly, assign) BOOL shouldFilterTodoSyncTimeRange;	// G=0x31dac115; 
@property(retain, nonatomic) NSDictionary *subscribedCalendars;	// G=0x31daada9; S=0x31daad0d; 
@property(readonly, assign) BOOL supportsEvents;	// G=0x31dac28d; 
@property(readonly, assign) BOOL supportsReminders;	// G=0x31dac1c9; 
@property(readonly, retain) DACoreDAVTaskManager *taskManager;	// G=0x31dac2e1; converted property
@property(assign) BOOL useSSL;	// G=0x31dafc7d; S=0x31dafc4d; converted property
@property(retain) id username;	// G=0x31daf785; S=0x31daf7ed; converted property
@property(readonly, assign) NSTimeZone *viewedTimeZone;	// G=0x31dac03d; 
@property(assign) BOOL wasMigrated;	// G=0x31dab435; S=0x31dab505; 
+ (Class)accountClass;	// 0x31da9f89
+ (Class)clientClass;	// 0x31da9fa5
+ (id)defaultProperties;	// 0x31da96ed
+ (id)supportedDataclasses;	// 0x31da9fc1
- (id)init;	// 0x31da9831
- (id)initWithBackingAccountInfo:(id)backingAccountInfo;	// 0x31da96a9
- (id)initWithProperties:(id)properties;	// 0x31da9665
- (id)_calendarConstraintsPath;	// 0x31dac435
- (id)_calendarConstraintsResource;	// 0x31dac331
- (void)_clearOrphanedChangesOfType:(int)type withContext:(id)context;	// 0x31dacc0d
- (id)_collectActionsFromMoveDictionary:(CFDictionaryRef)moveDictionary forDataclass:(id)dataclass outShouldSave:(BOOL *)anOut;	// 0x31dad6d5
- (void)_collectMoveActions;	// 0x31dadbdd
- (BOOL)_needsNewAccountIDForOldVersion:(int)oldVersion;	// 0x31daa7ad
- (id)_oldURLsForKeychain;	// 0x31daa555
- (id)_powerAssertionContext;	// 0x31daf1e1
- (id)_powerAssertionGroupIdentifier;	// 0x31daf1e5
- (void)_setSpinning:(BOOL)spinning;	// 0x31dacad1
- (void)_updateCalendarStore:(BOOL)store;	// 0x31dac901
- (BOOL)_updateCalendarStoreNoDBOpen:(BOOL)open;	// 0x31dac7fd
- (BOOL)_updateCalendarStoreProperties:(void *)properties;	// 0x31dac501
- (void)_upgradeAccountToTelluride;	// 0x31daa059
- (BOOL)_upgradeSelfFromVersion:(int)version superClassUpgraded:(BOOL)upgraded;	// 0x31daa7b9
- (BOOL)accountNeedsUpgrade;	// 0x31daac11
- (void)addCalendar:(id)calendar;	// 0x31dab5d9
- (void)addPrincipal:(id)principal;	// 0x31dabde1
// declared property getter: - (int)calDAVAccountVersion;	// 0x31daadc9
// declared property getter: - (id)calendars;	// 0x31dab69d
- (void)cancelAllSearchQueries;	// 0x31daea95
- (void)cancelRefresh;	// 0x31dacb35
- (void)cancelSearchQuery:(id)query;	// 0x31dae931
- (void)checkValidityWithConsumer:(id)consumer;	// 0x31daef99
// declared property getter: - (id)collectionSetURL;	// 0x31dab2b1
- (void)configureAccount;	// 0x31da91ad
- (void *)copyCalStore;	// 0x31dac4ad
- (void)coreDAVLogDiagnosticMessage:(id)message atLevel:(int)level;	// 0x31daf6f9
- (int)coreDAVLogLevel;	// 0x31daf6d9
- (void)coreDAVLogTransmittedDataPartial:(id)partial;	// 0x31daf761
- (int)coreDAVOutputLevel;	// 0x31daf6f1
- (void)coreDAVTransmittedDataFinished;	// 0x31daf781
- (void)dealloc;	// 0x31da9871
- (void)discoveryTask:(id)task gotAccountInfo:(id)info error:(id)error;	// 0x31daebf5
- (void)dropPowerAssertions;	// 0x31daf301
// converted property getter: - (id)host;	// 0x31daf8b9
- (BOOL)isCalDAVAccount;	// 0x31daf3a1
- (BOOL)isEqualToAccount:(id)account;	// 0x31daf3a5
// declared property getter: - (BOOL)isRefreshing;	// 0x31dafcb1
// declared property getter: - (BOOL)isWritable;	// 0x31dab385
- (BOOL)isYahoo;	// 0x31dafcad
// declared property getter: - (id)itemIDsToMoveActions;	// 0x31dafd35
- (id)localizedIdenticalAccountFailureMessage;	// 0x31daf5b1
- (id)localizedInvalidPasswordMessage;	// 0x31daf629
// declared property getter: - (id)mainPrincipal;	// 0x31dafd5d
// declared property getter: - (id)movedItemURLStrings;	// 0x31dafd49
// declared property getter: - (BOOL)needsAccountPropertyRefresh;	// 0x31dafd05
// declared property getter: - (id)ocurrenceCacheEndDate;	// 0x31dac091
// declared property getter: - (id)ocurrenceCacheStartDate;	// 0x31dac059
// declared property getter: - (int)overriddenPort;	// 0x31daaf1d
// declared property getter: - (id)overriddenScheme;	// 0x31daafb1
// declared property getter: - (id)overriddenServer;	// 0x31daaea1
- (void)performSearchQuery:(id)query;	// 0x31dae5a5
// converted property getter: - (int)port;	// 0x31dafbc1
// declared property getter: - (int)preferredEventDaysToSync;	// 0x31dafd95
// declared property getter: - (int)preferredToDoDaysToSync;	// 0x31dafdc1
- (void)prepareForAccountSave;	// 0x31da9ac5
// converted property getter: - (id)principalURL;	// 0x31daafcd
// declared property getter: - (id)principals;	// 0x31dafd81
- (id)properties;	// 0x31da9f49
- (void)reattainPowerAssertions;	// 0x31daf351
- (void)refreshActor:(id)actor didCompleteWithError:(id)error;	// 0x31dacf3d
// declared property getter: - (id)refreshContext;	// 0x31dafce1
- (void)refreshWithContext:(id)context;	// 0x31dadeb5
- (void)releasePowerAssertion;	// 0x31daf259
- (void)reloadCalendars;	// 0x31dabd11
- (void)removeCalendar:(id)calendar;	// 0x31dab631
- (void)removePrincipal:(id)principal;	// 0x31dabe39
- (void)retainPowerAssertion;	// 0x31daf1f5
// converted property getter: - (id)scheme;	// 0x31daf9f9
// declared property getter: - (id)searchPropertySet;	// 0x31dab331
- (BOOL)searchQueriesRunning;	// 0x31daebc5
// declared property getter: - (BOOL)searchQueriesShouldCancel;	// 0x31dafded
- (id)serverBaseURL;	// 0x31dab1c9
// declared property getter: - (id)serverVersion;	// 0x31dabe75
- (void)setAccountDescription:(id)description;	// 0x31dab26d
// declared property setter: - (void)setCalDAVAccountVersion:(int)version;	// 0x31daadfd
// declared property setter: - (void)setCollectionSetURL:(id)url;	// 0x31dab2f5
// converted property setter: - (void)setHost:(id)host;	// 0x31daf931
// declared property setter: - (void)setIsRefreshing:(BOOL)refreshing;	// 0x31dafcc9
// declared property setter: - (void)setIsWritable:(BOOL)writable;	// 0x31dab3f1
// declared property setter: - (void)setMainPrincipal:(id)principal;	// 0x31dafd71
// declared property setter: - (void)setNeedsAccountPropertyRefresh:(BOOL)refresh;	// 0x31dafd1d
// declared property setter: - (void)setOverriddenPort:(int)port;	// 0x31daaebd
// declared property setter: - (void)setOverriddenScheme:(id)scheme;	// 0x31daaf51
// declared property setter: - (void)setOverriddenServer:(id)server;	// 0x31daae41
// converted property setter: - (void)setPort:(int)port;	// 0x31dafb39
// declared property setter: - (void)setPreferredEventDaysToSync:(int)sync;	// 0x31dafda9
// declared property setter: - (void)setPreferredToDoDaysToSync:(int)sync;	// 0x31dafdd5
// converted property setter: - (void)setPrincipalURL:(id)url;	// 0x31daafed
// declared property setter: - (void)setRefreshContext:(id)context;	// 0x31dafcf5
// converted property setter: - (void)setScheme:(id)scheme;	// 0x31dafa71
// declared property setter: - (void)setSearchPropertySet:(id)set;	// 0x31dab341
// declared property setter: - (void)setSearchQueriesShouldCancel:(BOOL)cancel;	// 0x31dafe05
// declared property setter: - (void)setServerVersion:(id)version;	// 0x31dabeed
// declared property setter: - (void)setSubscribedCalendars:(id)calendars;	// 0x31daad0d
// converted property setter: - (void)setUseSSL:(BOOL)ssl;	// 0x31dafc4d
// converted property setter: - (void)setUsername:(id)username;	// 0x31daf7ed
// declared property setter: - (void)setWasMigrated:(BOOL)migrated;	// 0x31dab505
// declared property getter: - (BOOL)shouldFilterEventSyncTimeRange;	// 0x31dac0c9
// declared property getter: - (BOOL)shouldFilterSyncTimeRangeForInbox;	// 0x31dac161
// declared property getter: - (BOOL)shouldFilterTodoSyncTimeRange;	// 0x31dac115
- (BOOL)shouldLogTransmittedData;	// 0x31daf73d
- (void)shutdown;	// 0x31daebf1
- (id)spinnerIdentifiers;	// 0x31daca71
- (id)stateString;	// 0x31da9ff1
// declared property getter: - (id)subscribedCalendars;	// 0x31daada9
- (BOOL)supportsDADataclass:(int)dataclass;	// 0x31da9fe1
// declared property getter: - (BOOL)supportsEvents;	// 0x31dac28d
// declared property getter: - (BOOL)supportsReminders;	// 0x31dac1c9
- (void)task:(id)task didFinishWithError:(id)error;	// 0x31dae26d
// converted property getter: - (id)taskManager;	// 0x31dac2e1
- (BOOL)upgradeAccount;	// 0x31daab89
// converted property getter: - (BOOL)useSSL;	// 0x31dafc7d
// converted property getter: - (id)username;	// 0x31daf785
- (BOOL)usesTokenAuth;	// 0x31dac2dd
// declared property getter: - (id)viewedTimeZone;	// 0x31dac03d
// declared property getter: - (BOOL)wasMigrated;	// 0x31dab435
- (id)wellKnownPaths;	// 0x31daee01
@end
