/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSingleton.h"

@class NSString, NSMutableDictionary;

@interface BRLocalizedStringManager : BRSingleton {
@private
	NSString *_currentLanguage;	// 4 = 0x4
	NSMutableDictionary *_stringFileCache;	// 8 = 0x8
}
+ (id)_backRowFramework;	// 0x331460ad
+ (id)accessibilityLocalizedStringForKey:(id)key;	// 0x33145c81
+ (id)appliance:(id)appliance localizedStringForKey:(id)key inFile:(id)file;	// 0x33145d25
+ (id)applicationLocalizedStringForKey:(id)key inFile:(id)file;	// 0x33145ce1
+ (id)backRowLocalizedStringForKey:(id)key inFile:(id)file;	// 0x33145cb5
+ (id)localizedLanguageForCode:(id)code;	// 0x3314601d
+ (id)localizedStringForKey:(id)key inFile:(id)file fromBundle:(id)bundle;	// 0x33145d7d
+ (id)pathForResource:(id)resource ofType:(id)type forBundle:(id)bundle;	// 0x33145f95
+ (void)setSingleton:(id)singleton;	// 0x33145af5
+ (id)singleton;	// 0x33145ae5
- (id)init;	// 0x33145b05
- (id)_currentLanguageNameForBundle:(id)bundle;	// 0x3314624d
- (id)_hashKeyForStringKey:(id)stringKey inFile:(id)file fromBundlePath:(id)bundlePath;	// 0x33146329
- (void)_languageChanged:(id)changed;	// 0x331460b1
- (void)dealloc;	// 0x33145bf1
@end

