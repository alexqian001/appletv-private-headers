/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import "AppSupport-Structs.h"
#import <NSObject.h> // Unknown library

@class CPSearchMatcher;

@interface ALCityManager : NSObject {
	sqlite3 *_db;	// 4 = 0x4
	sqlite3 *_localizedDb;	// 8 = 0x8
	CPSearchMatcher *_citySearchMatcher;	// 12 = 0xc
}
@property(readonly, assign) CPSearchMatcher *citySearchMatcher;	// G=0x30cb6f91; @synthesize=_citySearchMatcher
+ (CFArrayRef)legacyCityForCity:(id)city;	// 0x30cb71e9
+ (id)newCitiesByIdentifierMap:(id)map;	// 0x30cb7429
+ (id)sharedManager;	// 0x30cb71a1
- (id)init;	// 0x30cb8fd1
- (id)bestCityForLegacyCity:(CFArrayRef)legacyCity;	// 0x30cb7ff5
- (id)citiesMatchingName:(id)name;	// 0x30cb6fa1
- (id)citiesMatchingName:(id)name localized:(BOOL)localized;	// 0x30cb8b4d
- (id)citiesMatchingQualifier:(id)qualifier;	// 0x30cb7e89
- (id)citiesWithIdentifiers:(id)identifiers;	// 0x30cb6fb5
- (id)citiesWithTimeZone:(id)timeZone;	// 0x30cb7135
- (id)cityForClassicIdentifier:(id)classicIdentifier;	// 0x30cb8199
// declared property getter: - (id)citySearchMatcher;	// 0x30cb6f91
- (void)dealloc;	// 0x30cb7569
- (id)defaultCitiesForLocaleCode:(id)localeCode;	// 0x30cb7121
- (id)defaultCitiesForLocaleCode:(id)localeCode options:(int)options;	// 0x30cb788d
- (id)defaultCityForTimeZone:(id)timeZone;	// 0x30cb75e1
- (id)localeWithCode:(id)code;	// 0x30cb7bbd
- (void)localizeCities:(id)cities;	// 0x30cb834d
@end

