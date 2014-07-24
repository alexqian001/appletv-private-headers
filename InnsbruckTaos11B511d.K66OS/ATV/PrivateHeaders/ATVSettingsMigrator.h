/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ATVSettingsMigrator : BRSingleton {
	NSMutableArray *_clients;	// 4 = 0x4
	BOOL _remoteMigrationComplete;	// 8 = 0x8
}
+ (void)migrate;	// 0x25c99d
+ (void)registerClient:(id)client;	// 0x25c9e1
+ (void)setSingleton:(id)singleton;	// 0x25c979
+ (id)singleton;	// 0x25c969
- (id)init;	// 0x25ca45
- (void).cxx_destruct;	// 0x25cab1
- (void)_migrate;	// 0x25cac5
- (void)_migrationDone:(id)done;	// 0x25cff1
- (void)_migrationDoneNoChanges:(id)changes;	// 0x25d149
@end
