/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <ImageIO/NSObject.h>
#import "NSCoding.h"
#import "UIKit-Structs.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UIProxyObject : NSObject <NSCoding> {
	NSString *proxiedObjectIdentifier;	// 4 = 0x4
}
@property(retain) NSString *proxiedObjectIdentifier;	// G=0x2f55725d; S=0x2f6b87f1; converted property
+ (void)addMappingFromIdentifier:(id)identifier toObject:(id)object forCoder:(id)coder;	// 0x2f5545ad
+ (void)addMappings:(id)mappings forCoder:(id)coder;	// 0x2f6b86cd
+ (id)mappedObjectForCoder:(id)coder withIdentifier:(id)identifier;	// 0x2f55726d
+ (CFDictionaryRef)proxyDecodingMap;	// 0x2f554629
+ (void)removeMappingsForCoder:(id)coder;	// 0x2f559ca1
- (id)initWithCoder:(id)coder;	// 0x2f557165
- (void)dealloc;	// 0x2f5572ad
- (void)encodeWithCoder:(id)coder;	// 0x2f6b87c1
// converted property getter: - (id)proxiedObjectIdentifier;	// 0x2f55725d
// converted property setter: - (void)setProxiedObjectIdentifier:(id)identifier;	// 0x2f6b87f1
@end
