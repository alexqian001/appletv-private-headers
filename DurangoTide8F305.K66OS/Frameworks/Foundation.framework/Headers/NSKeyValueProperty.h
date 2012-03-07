/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, NSKeyValueContainerClass;

__attribute__((visibility("hidden")))
@interface NSKeyValueProperty : NSObject {
@private
	NSKeyValueContainerClass *_containerClass;	// 4 = 0x4
	NSString *_keyPath;	// 8 = 0x8
}
@property(readonly, retain) NSString *keyPath;	// G=0x3274b6b1; converted property
- (id)_initWithContainerClass:(id)containerClass keyPath:(id)path propertiesBeingInitialized:(CFSetRef)initialized;	// 0x3274f689
- (id)copyWithZone:(NSZone *)zone;	// 0x327a6509
- (void)dealloc;	// 0x327a651d
- (id)dependentValueKeyOrKeysIsASet:(BOOL *)set;	// 0x327a5f49
- (Class)isaForAutonotifying;	// 0x327a64f5
// converted property getter: - (id)keyPath;	// 0x3274b6b1
- (id)keyPathIfAffectedByValueForKey:(id)key exactMatch:(BOOL *)match;	// 0x32777399
- (id)keyPathIfAffectedByValueForMemberOfKeys:(id)keys;	// 0x327a64e1
- (BOOL)matchesWithoutOperatorComponentsKeyPath:(id)path;	// 0x327a5f4d
- (void)object:(id)object didAddObservance:(id)observance recurse:(BOOL)recurse;	// 0x327a5f31
- (void)object:(id)object didRemoveObservance:(id)observance recurse:(BOOL)recurse;	// 0x327a5f35
- (void)object:(id)object withObservance:(id)observance didChangeValueForKeyOrKeys:(id)keyOrKeys recurse:(BOOL)recurse forwardingValues:(XXStruct_OzJQfB)values;	// 0x327a5f45
- (BOOL)object:(id)object withObservance:(id)observance willChangeValueForKeyOrKeys:(id)keyOrKeys recurse:(BOOL)recurse forwardingValues:(XXStruct_OzJQfB *)values;	// 0x327a5f39
- (id)restOfKeyPathIfContainedByValueForKeyPath:(id)keyPath;	// 0x327a6609
@end
