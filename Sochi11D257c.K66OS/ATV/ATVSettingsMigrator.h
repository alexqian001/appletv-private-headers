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
+ (void)migrate;	// 0x275359
+ (void)registerClient:(id)client;	// 0x27539d
+ (void)setSingleton:(id)singleton;	// 0x275335
+ (id)singleton;	// 0x275325
- (id)init;	// 0x275401
- (void).cxx_destruct;	// 0x27546d
- (void)_migrate;	// 0x275481
- (void)_migrationDone:(id)done;	// 0x2759ad
- (void)_migrationDoneNoChanges:(id)changes;	// 0x275b05
@end
