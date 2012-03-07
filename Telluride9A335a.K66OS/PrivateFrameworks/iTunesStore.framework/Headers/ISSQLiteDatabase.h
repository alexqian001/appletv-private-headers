/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "iTunesStore-Structs.h"
#import <NSObject.h> // Unknown library


@interface ISSQLiteDatabase : NSObject {
	sqlite3 *_db;	// 4 = 0x4
	BOOL _isInTransaction;	// 8 = 0x8
	dispatch_queue_s *_dispatchQueue;	// 12 = 0xc
	CFDictionaryRef _statementCache;	// 16 = 0x10
}
+ (void)_stepStatement:(sqlite3_stmt *)statement hasRow:(BOOL *)row didFinish:(BOOL *)finish;	// 0x30f28e45
+ (BOOL)statementDidFinishAfterStepping:(sqlite3_stmt *)statement;	// 0x30f28709
+ (BOOL)statementHasRowAfterStepping:(sqlite3_stmt *)stepping;	// 0x30f28735
- (id)initWithDatabaseURL:(id)databaseURL;	// 0x30f2846d
- (void)_accessDatabaseUsingBlock:(id)block;	// 0x30f28edd
- (int)_resetAndReopenDatabaseWithPath:(id)path;	// 0x30f28f0d
- (sqlite3_stmt *)_statementForSQL:(id)sql cache:(BOOL)cache;	// 0x30f28fc5
- (void)accessDatabaseUsingBlock:(id)block;	// 0x30f2875d
- (void)dealloc;	// 0x30f2868d
- (BOOL)executeSQL:(id)sql;	// 0x30f28809
- (void)performTransactionWithBlock:(id)block;	// 0x30f28a05
- (void)prepareStatementForSQL:(id)sql cache:(BOOL)cache usingBlock:(id)block;	// 0x30f28c55
@end
