/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

#import </libobjc.A.h>

@class NSArray, NSDictionary, NSString;

@interface ATVStoreFrontLocale : NSObject {
	NSDictionary *_storeFrontDictionary;	// 4 = 0x4
}
@property(readonly, assign) NSArray *availableLanguages;	// G=0x3041fe31; 
@property(readonly, assign) NSString *countryCode;	// G=0x3041fe59; 
@property(readonly, assign) NSString *displayName;	// G=0x3041fe09; 
@property(readonly, assign) BOOL isCurrent;	// G=0x3041fe81; 
@property(readonly, assign) NSString *uniqueIdentifier;	// G=0x3041fd4d; 
+ (id)localeWithStoreFrontDictionary:(id)storeFrontDictionary;	// 0x3041fca5
- (id)initWithStoreFrontDictionary:(id)storeFrontDictionary;	// 0x3041fced
- (void).cxx_destruct;	// 0x3041ffe9
// declared property getter: - (id)availableLanguages;	// 0x3041fe31
// declared property getter: - (id)countryCode;	// 0x3041fe59
// declared property getter: - (id)displayName;	// 0x3041fe09
// declared property getter: - (BOOL)isCurrent;	// 0x3041fe81
- (BOOL)isEqual:(id)equal;	// 0x3041ff15
// declared property getter: - (id)uniqueIdentifier;	// 0x3041fd4d
- (id)url;	// 0x3041feed
- (id)valueForUndefinedKey:(id)undefinedKey;	// 0x3041ffc9
@end

