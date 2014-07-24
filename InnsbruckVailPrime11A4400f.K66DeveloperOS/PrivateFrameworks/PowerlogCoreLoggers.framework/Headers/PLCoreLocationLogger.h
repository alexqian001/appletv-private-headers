/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PowerlogCoreLoggers.framework/PowerlogCoreLoggers
 */

#import <PowerlogLoggerSupport/PLLogger.h>

@class NSArray, NSDictionary, NSMutableDictionary;

@interface PLCoreLocationLogger : PLLogger {
	NSArray *technologyCodes;	// 28 = 0x1c
	NSArray *lastTechnologiesInUse;	// 32 = 0x20
	NSDictionary *lastClients;	// 36 = 0x24
	NSMutableDictionary *stopNotificationsFilter;	// 40 = 0x28
}
@property(retain, nonatomic) NSDictionary *lastClients;	// G=0x324175b9; S=0x324175c9; @synthesize
@property(retain, nonatomic) NSArray *lastTechnologiesInUse;	// G=0x32417599; S=0x324175a9; @synthesize
@property(retain, nonatomic) NSMutableDictionary *stopNotificationsFilter;	// G=0x324175d9; S=0x324175e9; @synthesize
- (id)init;	// 0x32415661
- (void)dealloc;	// 0x32415965
- (long)filteredCountForEntry:(id)entry forFilter:(id)filter;	// 0x3241610d
- (id)humanReadableNameForActivityStartKey:(id)activityStartKey stopKey:(id)key inDetails:(id)details;	// 0x324174e1
- (id)humanReadableNameForFencingActiveInDetails:(id)details;	// 0x324174a9
- (id)humanReadableNameForLocationActiveInDetails:(id)details;	// 0x32417475
- (id)humanReadableNameForTechnology:(int)technology;	// 0x324173e9
- (void)incrementFilterCounterForEntry:(id)entry forFilter:(id)filter;	// 0x32415de5
- (BOOL)isCurrentlyFilteringEntry:(id)entry withFilter:(id)filter;	// 0x32415ff9
// declared property getter: - (id)lastClients;	// 0x324175b9
// declared property getter: - (id)lastTechnologiesInUse;	// 0x32417599
- (void)log;	// 0x324159d9
- (void)logClient:(id)client withProperties:(id)properties deltaString:(id)string;	// 0x32416169
- (void)logClients;	// 0x32416c0d
- (void)logFilteredEntries;	// 0x32417015
- (void)logTechnologies;	// 0x32415aa5
// declared property setter: - (void)setLastClients:(id)clients;	// 0x324175c9
// declared property setter: - (void)setLastTechnologiesInUse:(id)use;	// 0x324175a9
// declared property setter: - (void)setStopNotificationsFilter:(id)filter;	// 0x324175e9
- (BOOL)shouldFilterEntry:(id)entry withFilter:(id)filter;	// 0x324160b5
- (BOOL)startTimeChanged:(id)changed comparedTo:(id)to;	// 0x32417209
// declared property getter: - (id)stopNotificationsFilter;	// 0x324175d9
- (BOOL)stopTimeChanged:(id)changed comparedTo:(id)to;	// 0x324172f9
@end
