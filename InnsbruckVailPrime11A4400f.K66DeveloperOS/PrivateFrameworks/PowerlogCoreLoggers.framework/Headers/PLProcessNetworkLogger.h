/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PowerlogCoreLoggers.framework/PowerlogCoreLoggers
 */

#import "PowerlogCoreLoggers-Structs.h"
#import <PowerlogLoggerSupport/PLLogger.h>

@class NSTimer, NSArray, UsageFeed, NSMutableDictionary;

@interface PLProcessNetworkLogger : PLLogger {
	NStatManager *statManagerRef;	// 28 = 0x1c
	NSMutableDictionary *coalescedDictionary;	// 32 = 0x20
	NSMutableDictionary *processDictionary;	// 36 = 0x24
	NSMutableDictionary *interfaceNameDictionary;	// 40 = 0x28
	NSTimer *queryTimer;	// 44 = 0x2c
	BOOL DEBUG_NSTAT;	// 48 = 0x30
	BOOL enableNetConnLogging;	// 49 = 0x31
	NSArray *netConnectProcesses;	// 52 = 0x34
	UsageFeed *feed;	// 56 = 0x38
}
- (id)init;	// 0x32408c81
- (void)_setupAppUsage;	// 0x3240b695
- (void)coalesceSource:(id)source;	// 0x3240a4a9
- (void)dealloc;	// 0x324090e1
- (void)handleFlushSymptomsNotificationNotification:(id)notification;	// 0x3240b761
- (void)insertSourceForProcess:(id)process withSource:(id)source;	// 0x3240a2b5
- (id)interfaceNameForIndex:(id)index;	// 0x324091e5
- (void)log;	// 0x32409479
- (void)logAppUsage;	// 0x3240b771
- (BOOL)processIsWhitelisted:(id)whitelisted;	// 0x32408b7d
- (void)queryNetworkInfo:(id)info;	// 0x32409051
- (void)queryTriggerNotification:(id)notification;	// 0x3240b5ad
- (void)removeSource:(id)source;	// 0x3240a439
- (void)setupSource:(NStatSource *)source;	// 0x3240a70d
- (id)sockaddrToNSString:(const sockaddr *)nsstring;	// 0x324092e5
- (id)stringFromTrafficClass:(unsigned)trafficClass;	// 0x3240939d
@end
