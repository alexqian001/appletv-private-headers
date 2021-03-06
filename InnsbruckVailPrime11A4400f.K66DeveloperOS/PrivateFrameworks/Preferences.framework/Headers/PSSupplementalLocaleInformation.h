/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import </libobjc.A.h>

@class NSDictionary;

@interface PSSupplementalLocaleInformation : NSObject {
	NSDictionary *_supplementalLocaleData;	// 4 = 0x4
}
+ (id)supplementalLocaleInformation;	// 0x32490edd
- (id)init;	// 0x32490d89
- (void)dealloc;	// 0x32490e91
- (id)parentLocaleIdentifierForLocaleIdentifier:(id)localeIdentifier;	// 0x32490f81
- (id)preferredLanguagesForCountryCode:(id)countryCode;	// 0x32490f21
- (id)restrictedCountryCodes;	// 0x32490fbd
@end

