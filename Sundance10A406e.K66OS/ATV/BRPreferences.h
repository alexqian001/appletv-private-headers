/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface BRPreferences : XXUnknownSuperclass {
	NSString *_domain;	// 4 = 0x4
}
@property(readonly, retain) NSString *domain;	// G=0x398675; converted property
+ (id)sharedFrontRowPreferences;	// 0x398ca5
- (id)initWithDomain:(id)domain;	// 0x3985d1
- (BOOL)boolForKey:(id)key;	// 0x3988f5
- (BOOL)boolForKey:(id)key withValueForMissingPrefs:(BOOL)missingPrefs;	// 0x398945
- (BOOL)canSetPreferencesForKey:(id)key;	// 0x398a25
- (void)dealloc;	// 0x398629
- (id)descriptionForKey:(id)key;	// 0x3989dd
// converted property getter: - (id)domain;	// 0x398675
- (double)doubleForKey:(id)key;	// 0x398851
- (double)doubleForKey:(id)key withValueForMissingPrefs:(double)missingPrefs;	// 0x3988a1
- (float)floatForKey:(id)key;	// 0x3987b1
- (float)floatForKey:(id)key withValueForMissingPrefs:(float)missingPrefs;	// 0x398801
- (int)integerForKey:(id)key;	// 0x398711
- (int)integerForKey:(id)key withValueForMissingPrefs:(int)missingPrefs;	// 0x398761
- (BOOL)isLoggingEnabledForKey:(id)key;	// 0x398c01
- (id)logFilePathsForKey:(id)key;	// 0x398c2d
- (id)objectForKey:(id)key;	// 0x3986c9
- (BOOL)setBool:(BOOL)aBool forKey:(id)key;	// 0x398b61
- (BOOL)setDouble:(double)aDouble forKey:(id)key;	// 0x398b0d
- (BOOL)setFloat:(float)aFloat forKey:(id)key;	// 0x398abd
- (BOOL)setInteger:(int)integer forKey:(id)key;	// 0x398a6d
- (BOOL)setObject:(id)object forKey:(id)key;	// 0x398bb1
- (id)stringForKey:(id)key;	// 0x398995
- (void)syncNow;	// 0x398685
@end
