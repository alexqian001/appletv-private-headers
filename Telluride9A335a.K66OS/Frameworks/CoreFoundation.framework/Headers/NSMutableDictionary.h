/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSDictionary.h"


@interface NSMutableDictionary : NSDictionary {
}
+ (id)dictionaryWithCapacity:(unsigned)capacity;	// 0x3348e4d5
- (id)initWithCapacity:(unsigned)capacity;	// 0x33504b29
- (id)initWithObjects:(const id *)objects forKeys:(const id *)keys count:(unsigned)count;	// 0x33504b4d
- (void)_mutate;	// 0x33486235
- (void)addEntriesFromDictionary:(id)dictionary;	// 0x334860d5
- (void)addObject:(id)object forKey:(id)key;	// 0x33503365
- (void)addObjects:(id)objects forKeys:(id)keys;	// 0x3350375d
- (void)addObjects:(const id *)objects forKeys:(const id *)keys count:(unsigned)count;	// 0x33503479
- (void)invert;	// 0x33503971
- (void)removeAllObjects;	// 0x33503a7d
- (void)removeEntriesInDictionary:(id)dictionary;	// 0x33503c31
- (void)removeKeysForObject:(id)object;	// 0x33503d8d
- (void)removeObjectForKey:(id)key;	// 0x33503341
- (void)removeObjectsForKeys:(id)keys;	// 0x334a0dd9
- (void)replaceObject:(id)object forKey:(id)key;	// 0x33503efd
- (void)replaceObjects:(id)objects forKeys:(id)keys;	// 0x335042d9
- (void)replaceObjects:(const id *)objects forKeys:(const id *)keys count:(unsigned)count;	// 0x33504011
- (void)setDictionary:(id)dictionary;	// 0x3349bfc1
- (void)setEntriesFromDictionary:(id)dictionary;	// 0x335044ed
- (void)setObject:(id)object forKey:(id)key;	// 0x3350331d
- (void)setObjects:(id)objects forKeys:(id)keys;	// 0x33504915
- (void)setObjects:(const id *)objects forKeys:(const id *)keys count:(unsigned)count;	// 0x3350464d
@end
