/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSDictionary.h> // Unknown library


__attribute__((visibility("hidden")))
@interface NSOwnedDictionaryProxy : NSDictionary {
	id _owner;	// 4 = 0x4
}
- (id)initWithOwner:(id)owner;	// 0x32661d61
- (unsigned)count;	// 0x32661e55
- (id)keyEnumerator;	// 0x32661e75
- (id)objectForKey:(id)key;	// 0x32661e95
- (oneway void)release;	// 0x32661de5
- (id)retain;	// 0x32661da1
- (void)superRelease;	// 0x32661e29
@end

