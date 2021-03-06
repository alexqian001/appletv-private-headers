/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSKeyValueProperty.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface NSKeyValueComputedProperty : NSKeyValueProperty {
	NSString *_operationName;	// 12 = 0xc
	NSString *_operationArgumentKeyPath;	// 16 = 0x10
	NSKeyValueProperty *_operationArgumentProperty;	// 20 = 0x14
}
- (void)_addDependentValueKey:(id)key;	// 0x346c1569
- (void)_givenPropertiesBeingInitialized:(CFSetRef)initialized getAffectingProperties:(id)properties;	// 0x346c1549
- (id)_initWithContainerClass:(id)containerClass keyPath:(id)path propertiesBeingInitialized:(CFSetRef)initialized;	// 0x346c1301
- (Class)_isaForAutonotifying;	// 0x346c1589
- (id)_keyPathIfAffectedByValueForKey:(id)key exactMatch:(BOOL *)match;	// 0x346c15a9
- (id)_keyPathIfAffectedByValueForMemberOfKeys:(id)keys;	// 0x346c15ed
- (void)dealloc;	// 0x346c143d
- (id)description;	// 0x346c14b5
- (BOOL)matchesWithoutOperatorComponentsKeyPath:(id)path;	// 0x346c171d
- (void)object:(id)object didAddObservance:(id)observance recurse:(BOOL)recurse;	// 0x346c162d
- (void)object:(id)object didRemoveObservance:(id)observance recurse:(BOOL)recurse;	// 0x346c1661
- (void)object:(id)object withObservance:(id)observance didChangeValueForKeyOrKeys:(id)keyOrKeys recurse:(BOOL)recurse forwardingValues:(XXStruct_OzJQfB)values;	// 0x346c16d9
- (BOOL)object:(id)object withObservance:(id)observance willChangeValueForKeyOrKeys:(id)keyOrKeys recurse:(BOOL)recurse forwardingValues:(XXStruct_OzJQfB *)values;	// 0x346c1695
@end

