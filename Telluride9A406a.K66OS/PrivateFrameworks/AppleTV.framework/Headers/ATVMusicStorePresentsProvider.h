/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library
#import "BRTitleProvider.h"

@class NSMutableArray, NSDictionary, NSString, BRMediaType, NSURL;

@interface ATVMusicStorePresentsProvider : NSObject <BRTitleProvider> {
@private
	NSString *_requestID;	// 4 = 0x4
	BRMediaType *_mediaType;	// 8 = 0x8
	NSURL *_url;	// 12 = 0xc
	NSURL *_fallbackURL;	// 16 = 0x10
	NSMutableArray *_items;	// 20 = 0x14
	NSDictionary *_catalogCollection;	// 24 = 0x18
	BOOL _storeLoadInProgress;	// 28 = 0x1c
	double _lastStoreLoadTime;	// 32 = 0x20
	BOOL _networkIsOK;	// 40 = 0x28
	BOOL _storeRestricted;	// 41 = 0x29
	NSString *_title;	// 44 = 0x2c
	unsigned _collectionNumber;	// 48 = 0x30
	unsigned _fallbackCollectionNumber;	// 52 = 0x34
	BOOL _usingFallback;	// 56 = 0x38
	NSString *_URLKey;	// 60 = 0x3c
	BOOL _fallBackEnabled;	// 64 = 0x40
	ATVMediaTypeRef _redownloadMediaType;	// 68 = 0x44
	BOOL _requiresStoreAccount;	// 72 = 0x48
}
@property(assign) ATVMediaTypeRef redownloadMediaType;	// G=0x32fa11f9; S=0x32fa1209; @synthesize=_redownloadMediaType
@property(assign, nonatomic) BOOL requiresStoreAccount;	// G=0x32fa1219; S=0x32fa0ed5; @synthesize=_requiresStoreAccount
@property(readonly, retain) NSString *title;	// G=0x32fa0d6d; converted property
+ (id)providerWithMediaType:(id)mediaType URLKey:(id)key forID:(id)anId fallBack:(BOOL)back;	// 0x32fa0af5
- (id)initWithMediaType:(id)mediaType URLKey:(id)key forID:(id)anId fallBack:(BOOL)back;	// 0x32fa0b41
- (id)initWithMediaType:(id)mediaType URLKey:(id)key forID:(id)anId fallBack:(BOOL)back requiresStoreAccount:(BOOL)account;	// 0x32fa0b6d
- (void)_accountAuthenticationSucceeded:(id)succeeded;	// 0x32fa1f85
- (void)_clearStoreData;	// 0x32fa12a5
- (void)_loadStoreDataFromURL:(id)url;	// 0x32fa17a5
- (void)_networkChanged:(id)changed;	// 0x32fa1cc1
- (BOOL)_okToFetchNewData;	// 0x32fa169d
- (void)_parentalControlAccessChanged:(id)changed;	// 0x32fa1dc9
- (void)_parseCatalogCollection:(id)collection;	// 0x32fa1a75
- (void)_preferredAccountRemoved:(id)removed;	// 0x32fa1f01
- (void)_redownloadAcquired:(id)acquired;	// 0x32fa1e99
- (void)_resetStoreData;	// 0x32fa1395
- (void)_setTitle:(id)title;	// 0x32fa1229
- (void)_supplementalResponseReceived:(id)received;	// 0x32fa1931
- (id)controlFactory;	// 0x32fa0fcd
- (id)dataAtIndex:(long)index;	// 0x32fa1025
- (long)dataCount;	// 0x32fa0fe9
- (void)dealloc;	// 0x32fa0d7d
- (id)hashForDataAtIndex:(long)index;	// 0x32fa1179
- (BOOL)isLoading;	// 0x32fa0ec5
// declared property getter: - (ATVMediaTypeRef)redownloadMediaType;	// 0x32fa11f9
- (void)reloadStoreData;	// 0x32fa0e71
// declared property getter: - (BOOL)requiresStoreAccount;	// 0x32fa1219
// declared property setter: - (void)setRedownloadMediaType:(ATVMediaTypeRef)type;	// 0x32fa1209
// declared property setter: - (void)setRequiresStoreAccount:(BOOL)account;	// 0x32fa0ed5
// converted property getter: - (id)title;	// 0x32fa0d6d
@end

