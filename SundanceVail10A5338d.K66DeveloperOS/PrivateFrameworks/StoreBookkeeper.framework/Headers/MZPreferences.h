/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import <NSObject.h> // Unknown library


@interface MZPreferences : NSObject {
}
+ (id)storeBookkeeperPreferences;	// 0x336e577d
- (id)init;	// 0x336e57e9
- (void)_preferencesDidChange;	// 0x336e58d1
- (BOOL)boolForKey:(id)key;	// 0x336e5a29
- (void)dealloc;	// 0x336e588d
- (id)objectForKey:(id)key withDefaultValue:(id)defaultValue;	// 0x336e59a9
- (void)registerDefaultsIfKeyNotSet:(id)set registrationBlock:(id)block;	// 0x336e5919
- (void)setBool:(BOOL)aBool forKey:(id)key;	// 0x336e59e9
- (void)setObject:(id)object forKey:(id)key;	// 0x336e5985
@end

