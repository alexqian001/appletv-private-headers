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
@property(readonly, assign) CPSearchMatcher *citySearchMatcher;	// G=0x321645b1; @synthesize=_citySearchMatcher
+ (CFArrayRef)legacyCityForCity:(id)city;	// 0x32164639
+ (id)newCitiesByIdentifierMap:(id)map;	// 0x321655bd
+ (id)sharedManager;	// 0x3216494d
- (id)init;	// 0x32164991
- (id)bestCityForLegacyCity:(CFArrayRef)legacyCity;	// 0x32165f7d
- (id)citiesMatchingName:(id)name;	// 0x32164935
- (id)citiesMatchingName:(id)name localized:(BOOL)localized;	// 0x32165229
- (id)citiesMatchingQualifier:(id)qualifier;	// 0x321650dd
- (id)citiesWithIdentifiers:(id)identifiers;	// 0x3216480d
- (id)citiesWithTimeZone:(id)timeZone;	// 0x321645c1
- (id)cityForClassicIdentifier:(id)classicIdentifier;	// 0x32165dd5
// declared property getter: - (id)citySearchMatcher;	// 0x321645b1
- (void)dealloc;	// 0x321663c1
- (id)defaultCitiesForLocaleCode:(id)localeCode;	// 0x32164621
- (id)defaultCitiesForLocaleCode:(id)localeCode options:(int)options;	// 0x32164ba9
- (id)defaultCityForTimeZone:(id)timeZone;	// 0x32166119
- (id)localeWithCode:(id)code;	// 0x32164e6d
- (void)localizeCities:(id)cities;	// 0x321656f9
@end
