/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSObject.h"
#import "CoreFoundation-Structs.h"


__attribute__((visibility("hidden")))
@interface CFXPreferencesSource : NSObject {
@private
	CFDictionaryRef _dict;	// 4 = 0x4
	long _generationCount;	// 8 = 0x8
	BOOL _disabled;	// 12 = 0xc
}
@property(readonly, assign) long generationCount;	// G=0x3405a87d; converted property
- (id)init;	// 0x34055571
- (CFDictionaryRef)copyDictionary;	// 0x34083095
- (CFArrayRef)copyKeyList;	// 0x3405a265
- (void)dealloc;	// 0x340cd4ad
- (void)finalize;	// 0x340cd4f5
// converted property getter: - (long)generationCount;	// 0x3405a87d
- (void *)getValueForKey:(CFStringRef)key;	// 0x3402823d
- (void)setDisabled:(BOOL)disabled;	// 0x34055aed
- (void)setValue:(void *)value forKey:(CFStringRef)key;	// 0x3405bba5
- (unsigned char)synchronize;	// 0x34046285
@end

