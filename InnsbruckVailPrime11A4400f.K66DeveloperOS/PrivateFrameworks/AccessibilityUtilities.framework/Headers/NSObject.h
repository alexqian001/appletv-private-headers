/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import </libobjc.A.h>
#import "AccessibilityUtilities-Structs.h"


@protocol NSObject
- (id)autorelease;
- (Class)class;
- (BOOL)conformsToProtocol:(id)protocol;
@optional
- (id)debugDescription;
@required
- (id)description;
- (unsigned)hash;
- (BOOL)isEqual:(id)equal;
- (BOOL)isKindOfClass:(Class)aClass;
- (BOOL)isMemberOfClass:(Class)aClass;
- (BOOL)isProxy;
- (id)performSelector:(SEL)selector;
- (id)performSelector:(SEL)selector withObject:(id)object;
- (id)performSelector:(SEL)selector withObject:(id)object withObject:(id)object3;
- (oneway void)release;
- (BOOL)respondsToSelector:(SEL)selector;
- (id)retain;
- (unsigned)retainCount;
- (id)self;
- (Class)superclass;
- (NSZone *)zone;
@end

@interface NSObject (UIAccessibilitySafeCategory)
- (void)handleFailoversForClassNamed:(id)classNamed;	// 0x2fe2e9e1
- (BOOL)safeBoolForKey:(id)key;	// 0x2fe2e561
- (void *)safeIvarForKey:(id)key;	// 0x2fe2e475
- (id)safeValueForKey:(id)key;	// 0x2fe2e64d
- (id)safeValueForKeyPath:(id)keyPath;	// 0x2fe2e82d
@end

@interface NSObject (AXValidationManager)
+ (void)_accessibilityPerformValidations:(id)validations;	// 0x2fe42885
@end

@interface NSObject (AXTrmpoline)
- (id)axSuperTrampoline;	// 0x2fe438dd
- (id)axTrampolineForClass:(Class)aClass;	// 0x2fe43925
@end

@interface NSObject (AXCollectionsExtensions)
- (void)_ax_appendPrettyDescriptionToString:(id)string indentationString:(id)string2 visitedCollections:(id)collections;	// 0x2fe59921
- (id)ax_prettyDescription;	// 0x2fe59ec9
@end
