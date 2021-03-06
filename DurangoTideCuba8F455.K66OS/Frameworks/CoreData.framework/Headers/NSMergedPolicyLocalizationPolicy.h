/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import "NSValidationErrorLocalizationPolicy.h"

@class NSSet;

__attribute__((visibility("hidden")))
@interface NSMergedPolicyLocalizationPolicy : NSValidationErrorLocalizationPolicy {
@private
	NSSet *_mergedPolicies;	// 24 = 0x18
}
- (id)init;	// 0x33ef0f21
- (void)_ensureFullLocalizationDictionaryIsLoaded;	// 0x33ef1611
- (id)_localizedStringForKey:(id)key value:(void *)value;	// 0x33ef1731
- (void)addPolicy:(id)policy;	// 0x33ef0f5d
- (id)copyWithZone:(NSZone *)zone;	// 0x33ef0fbd
- (void)dealloc;	// 0x33ef100d
@end

