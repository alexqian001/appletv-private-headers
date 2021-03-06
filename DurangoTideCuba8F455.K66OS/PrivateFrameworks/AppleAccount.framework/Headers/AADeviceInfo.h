/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import "AppleAccount-Structs.h"
#import <NSObject.h> // Unknown library


@interface AADeviceInfo : NSObject {
	lockdown_connection *connection;	// 4 = 0x4
}
+ (id)clientInfoHeader;	// 0x34324205
+ (id)deviceCredential;	// 0x343245c9
+ (id)infoDictionary;	// 0x34324441
+ (id)osVersion;	// 0x343243b1
+ (id)productVersion;	// 0x343241bd
+ (id)signatureWithDictionary:(id)dictionary;	// 0x34323f81
+ (id)udid;	// 0x343243f9
- (id)init;	// 0x3432454d
- (id)buildVersion;	// 0x343246a5
- (void)dealloc;	// 0x3432458d
- (id)deviceInfoDictionary;	// 0x343240d9
- (id)lockDownValueForKey:(CFStringRef)key;	// 0x34324675
- (id)mobileMeSetupToken;	// 0x34323f85
- (id)osName;	// 0x343246fd
- (id)osVersion;	// 0x343240ad
- (id)productType;	// 0x3432400d
- (id)productVersion;	// 0x3432402d
- (id)regionCode;	// 0x34324755
- (id)serialNumber;	// 0x3432406d
- (id)udid;	// 0x3432408d
- (id)wifiMacAddress;	// 0x3432404d
@end

