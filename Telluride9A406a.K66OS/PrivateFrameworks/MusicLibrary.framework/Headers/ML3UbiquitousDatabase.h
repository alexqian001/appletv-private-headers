/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "ML3SqliteDatabase.h"
#import "MusicLibrary-Structs.h"
#import "ML3SqliteDatabaseSubclass.h"


__attribute__((visibility("hidden")))
@interface ML3UbiquitousDatabase : ML3SqliteDatabase <ML3SqliteDatabaseSubclass> {
}
+ (id)allSchemaSQL;	// 0x364f37b5
+ (id)databasePath;	// 0x364b3891
+ (BOOL)migrateFromVersion:(int)version outUserVersion:(int *)version2 usingHandle:(sqlite3 *)handle;	// 0x364f383d
+ (int)userVersionCurrent;	// 0x364b4061
@end
