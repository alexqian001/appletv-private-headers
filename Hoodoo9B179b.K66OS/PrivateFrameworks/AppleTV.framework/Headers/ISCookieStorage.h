/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "AppleTV-Structs.h"

@class NSURL, ISSQLiteDatabase;

__attribute__((visibility("hidden")))
@interface ISCookieStorage : NSObject {
@private
	ISSQLiteDatabase *_db;	// 4 = 0x4
	dispatch_queue_s *_dispatchQueue;	// 8 = 0x8
	void *_processAssertion;	// 12 = 0xc
	int _processAssertionCount;	// 16 = 0x10
	NSURL *_storageLocation;	// 20 = 0x14
}
@property(readonly, assign) NSURL *storageLocation;	// G=0x30415211; 
+ (id)sharedInstance;	// 0x304160c5
+ (id)sharedStorage;	// 0x3041460d
- (id)init;	// 0x3041445d
- (id)initWithStorageLocation:(id)storageLocation;	// 0x30414471
- (void)_beginProcessAssertion;	// 0x30415249
- (void)_bindInsertStatement:(sqlite3_stmt *)statement forCookie:(id)cookie userIdentifier:(id)identifier;	// 0x30415331
- (BOOL)_bindStatement:(sqlite3_stmt *)statement withValues:(id)values;	// 0x304154ad
- (id)_columnNameForCookieProperty:(id)cookieProperty;	// 0x30415655
- (id)_cookieForSelectStatement:(sqlite3_stmt *)selectStatement;	// 0x30415721
- (CFSetRef)_copyPrivateCookiesForURL:(id)url userIdentifier:(id)identifier;	// 0x304159c5
- (void)_endProcessAssertion;	// 0x30415de9
- (BOOL)_setupCookieDatabase:(id)database;	// 0x30415ed9
- (id)cookieHeadersForURL:(id)url userIdentifier:(id)identifier;	// 0x3041480d
- (void)dealloc;	// 0x30414585
- (void)removeAllCookies;	// 0x30414d35
- (void)removeCookiesWithProperties:(id)properties;	// 0x30414dbd
- (void)setCookies:(id)cookies forUserIdentifier:(id)userIdentifier;	// 0x30414949
- (void)setCookiesForHTTPResponse:(id)httpresponse userIdentifier:(id)identifier;	// 0x30414b05
// declared property getter: - (id)storageLocation;	// 0x30415211
- (void)synchronizeCookies;	// 0x304160d5
@end

