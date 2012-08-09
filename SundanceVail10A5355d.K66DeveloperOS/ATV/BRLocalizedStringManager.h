/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"

@class NSString, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface BRLocalizedStringManager : BRSingleton {
	NSString *_currentLanguage;	// 4 = 0x4
	NSMutableDictionary *_stringFileCache;	// 8 = 0x8
}
+ (id)_backRowFramework;	// 0x37e945
+ (id)accessibilityLocalizedStringForKey:(id)key;	// 0x37e3f5
+ (id)appliance:(id)appliance localizedStringForKey:(id)key inFile:(id)file;	// 0x37e4c9
+ (id)applicationLocalizedStringForKey:(id)key inFile:(id)file;	// 0x37e485
+ (id)backRowLocalizedStringForKey:(id)key inFile:(id)file;	// 0x37e441
+ (id)localizedLanguageForCode:(id)code;	// 0x37e825
+ (id)localizedLanguageForIdentifier:(id)identifier;	// 0x37e8b5
+ (id)localizedStringForKey:(id)key inFile:(id)file fromBundle:(id)bundle;	// 0x37e55d
+ (id)pathForResource:(id)resource ofType:(id)type forBundle:(id)bundle;	// 0x37e785
+ (void)setSingleton:(id)singleton;	// 0x37e205
+ (id)singleton;	// 0x37e1f5
- (id)init;	// 0x37e215
- (void)_bundleUpdated:(id)updated;	// 0x37eb01
- (id)_currentLanguageNameForBundle:(id)bundle;	// 0x37ed6d
- (BOOL)_doesHashKey:(id)key belongToBundleWithPath:(id)path;	// 0x37ee71
- (id)_hashKeyForStringKey:(id)stringKey inFile:(id)file fromBundlePath:(id)bundlePath;	// 0x37ee39
- (void)_languageChanged:(id)changed;	// 0x37e961
- (void)dealloc;	// 0x37e365
@end
