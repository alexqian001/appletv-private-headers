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
@property(readonly, assign) CPSearchMatcher *citySearchMatcher;	// G=0x30746a1d; @synthesize=_citySearchMatcher
+ (CFArrayRef)legacyCityForCity:(id)city;	// 0x30745bc9
+ (id)newCitiesByIdentifierMap:(id)map;	// 0x30745415
+ (id)sharedManager;	// 0x307447d1
- (id)init;	// 0x30744591
- (id)allCities;	// 0x30744819
- (id)bestCityForLegacyCity:(CFArrayRef)legacyCity;	// 0x30745a01
- (id)citiesMatchingName:(id)name;	// 0x30744865
- (id)citiesMatchingName:(id)name localized:(BOOL)localized;	// 0x30744879
- (id)citiesMatchingQualifier:(id)qualifier;	// 0x30745dc9
- (id)citiesWithIdentifiers:(id)identifiers;	// 0x30745579
- (id)citiesWithTimeZone:(id)timeZone;	// 0x30746949
- (id)cityForClassicIdentifier:(id)classicIdentifier;	// 0x30745859
// declared property getter: - (id)citySearchMatcher;	// 0x30746a1d
- (void)dealloc;	// 0x307469a5
- (id)defaultCitiesForLocaleCode:(id)localeCode;	// 0x30746521
- (id)defaultCitiesForLocaleCode:(id)localeCode options:(int)options;	// 0x307461fd
- (id)defaultCityForTimeZone:(id)timeZone;	// 0x30746535
- (id)localeWithCode:(id)code;	// 0x30745f45
- (void)localizeCities:(id)cities;	// 0x30744c85
@end
