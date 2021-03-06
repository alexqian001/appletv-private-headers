/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "CoreData-Structs.h"

@class NSString, NSDictionary, NSBundle, NSURL;

@interface NSValidationErrorLocalizationPolicy : NSObject <NSCopying> {
	NSURL *_url;	// 4 = 0x4
	NSBundle *_localizationBundle;	// 8 = 0x8
	NSString *_modelStringsFileName;	// 12 = 0xc
	NSDictionary *_localizationDictionary;	// 16 = 0x10
	BOOL _hasSetLocalizationDictionary;	// 20 = 0x14
}
@property(retain) NSDictionary *localizationDictionary;	// G=0x35cb5c05; S=0x35cb5c3d; converted property
- (id)initWithURL:(id)url;	// 0x35bd7025
- (id)_cachedObjectForKey:(id)key value:(void *)value;	// 0x35cb5b79
- (void)_ensureFullLocalizationDictionaryIsLoaded;	// 0x35cb5a85
- (void)_ensureLocalizationDictionaryIsInitialized;	// 0x35cb5905
- (id)_localizedPropertyNameForProperty:(id)property entity:(id)entity;	// 0x35cb5ce1
- (id)_localizedStringForKey:(id)key value:(void *)value;	// 0x35cb5b31
- (id)copyWithZone:(NSZone *)zone;	// 0x35cb584d
- (void)dealloc;	// 0x35bd70e9
// converted property getter: - (id)localizationDictionary;	// 0x35cb5c05
- (id)localizedEntityNameForEntity:(id)entity;	// 0x35cb5c91
- (id)localizedModelStringForKey:(id)key;	// 0x35cb5e45
- (id)localizedPropertyNameForProperty:(id)property;	// 0x35cb5dc5
// converted property setter: - (void)setLocalizationDictionary:(id)dictionary;	// 0x35cb5c3d
@end

