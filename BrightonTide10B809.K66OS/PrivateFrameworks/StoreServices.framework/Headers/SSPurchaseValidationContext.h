/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "StoreServices-Structs.h"
#import "NSCopying.h"

@class NSIndexSet, NSString;

@interface SSPurchaseValidationContext : NSObject <NSCopying> {
	NSIndexSet *_allowedDeviceIdentifiers;	// 4 = 0x4
	id _sizeLimitBlock;	// 8 = 0x8
	NSString *_systemName;	// 12 = 0xc
	NSString *_systemVersion;	// 16 = 0x10
}
@property(copy, nonatomic) NSIndexSet *allowedDeviceIdentifiers;	// G=0x354d3ae1; S=0x354d3af5; @synthesize=_allowedDeviceIdentifiers
@property(copy, nonatomic) id sizeLimitBlock;	// G=0x354d3b05; S=0x354d3b19; @synthesize=_sizeLimitBlock
@property(copy, nonatomic) NSString *systemName;	// G=0x354d3b29; S=0x354d3b3d; @synthesize=_systemName
@property(copy, nonatomic) NSString *systemVersion;	// G=0x354d3b4d; S=0x354d3b61; @synthesize=_systemVersion
- (id)_supportedDeviceForOffer:(id)offer;	// 0x354d39e1
// declared property getter: - (id)allowedDeviceIdentifiers;	// 0x354d3ae1
- (id)copyWithZone:(NSZone *)zone;	// 0x354d3931
- (void)dealloc;	// 0x354d38a5
// declared property setter: - (void)setAllowedDeviceIdentifiers:(id)identifiers;	// 0x354d3af5
// declared property setter: - (void)setSizeLimitBlock:(id)block;	// 0x354d3b19
// declared property setter: - (void)setSystemName:(id)name;	// 0x354d3b3d
// declared property setter: - (void)setSystemVersion:(id)version;	// 0x354d3b61
// declared property getter: - (id)sizeLimitBlock;	// 0x354d3b05
// declared property getter: - (id)systemName;	// 0x354d3b29
// declared property getter: - (id)systemVersion;	// 0x354d3b4d
@end

