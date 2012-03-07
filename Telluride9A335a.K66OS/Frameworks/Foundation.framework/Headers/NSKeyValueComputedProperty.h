/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSKeyValueProperty.h"
#import "Foundation-Structs.h"

@class NSString, NSKeyValueUnnestedProperty;

__attribute__((visibility("hidden")))
@interface NSKeyValueComputedProperty : NSKeyValueProperty {
@private
	NSString *_operationName;	// 12 = 0xc
	NSString *_operationArgumentKeyPath;	// 16 = 0x10
	NSKeyValueUnnestedProperty *_operationArgumentProperty;	// 20 = 0x14
}
- (void)_addDependentValueKey:(id)key;	// 0x32087845
- (void)_givenPropertiesBeingInitialized:(CFSetRef)initialized getAffectingProperties:(id)properties;	// 0x32087825
- (id)_initWithContainerClass:(id)containerClass keyPath:(id)path propertiesBeingInitialized:(CFSetRef)initialized;	// 0x320875d5
- (Class)_isaForAutonotifying;	// 0x32087865
- (id)_keyPathIfAffectedByValueForKey:(id)key exactMatch:(BOOL *)match;	// 0x32087885
- (id)_keyPathIfAffectedByValueForMemberOfKeys:(id)keys;	// 0x320878c9
- (void)dealloc;	// 0x3208771d
- (id)description;	// 0x32087791
- (BOOL)matchesWithoutOperatorComponentsKeyPath:(id)path;	// 0x320879f9
- (void)object:(id)object didAddObservance:(id)observance recurse:(BOOL)recurse;	// 0x32087909
- (void)object:(id)object didRemoveObservance:(id)observance recurse:(BOOL)recurse;	// 0x3208793d
- (void)object:(id)object withObservance:(id)observance didChangeValueForKeyOrKeys:(id)keyOrKeys recurse:(BOOL)recurse forwardingValues:(XXStruct_OzJQfB)values;	// 0x320879b5
- (BOOL)object:(id)object withObservance:(id)observance willChangeValueForKeyOrKeys:(id)keyOrKeys recurse:(BOOL)recurse forwardingValues:(XXStruct_OzJQfB *)values;	// 0x32087971
@end
