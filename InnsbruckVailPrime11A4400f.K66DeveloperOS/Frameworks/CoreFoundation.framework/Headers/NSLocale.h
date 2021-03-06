/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import </libobjc.A.h>
#import "CoreFoundation-Structs.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"


@interface NSLocale : NSObject <NSCopying, NSSecureCoding> {
}
+ (id)ISOCountryCodes;	// 0x2d310ffd
+ (id)ISOCurrencyCodes;	// 0x2d311029
+ (id)ISOLanguageCodes;	// 0x2d310fd1
+ (id)allocWithZone:(NSZone *)zone;	// 0x2d2649e9
+ (id)availableLocaleIdentifiers;	// 0x2d310fa5
+ (id)canonicalLanguageIdentifierFromString:(id)string;	// 0x2d271c95
+ (id)canonicalLocaleIdentifierFromString:(id)string;	// 0x2d28eecd
+ (unsigned)characterDirectionForLanguage:(id)language;	// 0x2d3110c5
+ (id)commonISOCurrencyCodes;	// 0x2d311055
+ (id)componentsFromLocaleIdentifier:(id)localeIdentifier;	// 0x2d2718d1
+ (id)currentLocale;	// 0x2d263fb1
+ (id)internetServicesRegion;	// 0x2d311101
+ (unsigned)lineDirectionForLanguage:(id)language;	// 0x2d3110cd
+ (id)localeIdentifierFromComponents:(id)components;	// 0x2d2719bd
+ (id)localeIdentifierFromWindowsLocaleCode:(unsigned)windowsLocaleCode;	// 0x2d311081
+ (id)localeWithLocaleIdentifier:(id)localeIdentifier;	// 0x2d310f69
+ (id)preferredLanguages;	// 0x2d27d50d
+ (BOOL)supportsSecureCoding;	// 0x2d310f25
+ (id)systemLocale;	// 0x2d310f41
+ (unsigned)windowsLocaleCodeFromLocaleIdentifier:(id)localeIdentifier;	// 0x2d3110bd
- (id)init;	// 0x2d310e61
- (id)initWithCoder:(id)coder;	// 0x2d310f29
- (id)initWithLocaleIdentifier:(id)localeIdentifier;	// 0x2d310f45
- (unsigned long)_cfTypeID;	// 0x2d310e75
- (id)_copyDisplayNameForKey:(id)key value:(id)value;	// 0x2d3110d5
- (id)_prefs;	// 0x2d3110fd
- (id)copyWithZone:(NSZone *)zone;	// 0x2d284a9d
- (id)displayNameForKey:(id)key value:(id)value;	// 0x2d310e3d
- (void)encodeWithCoder:(id)coder;	// 0x2d310f2d
- (unsigned)hash;	// 0x2d310e79
- (id)identifier;	// 0x2d310f31
- (BOOL)isEqual:(id)equal;	// 0x2d310ea1
- (id)localeIdentifier;	// 0x2d287265
- (id)objectForKey:(id)key;	// 0x2d310e19
@end

