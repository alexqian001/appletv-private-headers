/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

#import "AppleTVServices-Structs.h"
#import </libobjc.A.h>

@class ATVBindingAdaptor;

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

@interface NSObject (AppleTVServices)
- (id)_attachDeallocationBlock:(id)block;	// 0x3008826d
- (id)arrayValueForKey:(id)key;	// 0x300882b5
- (void)attachDeallocationBlock:(id)block;	// 0x30088291
@end

@interface NSObject (ATVBindingAdaptorAccess)
@property(readonly, assign) ATVBindingAdaptor *bindingAdaptor;	// G=0x300aba71; 
- (id)_bindingAdaptor;	// 0x300aba61
// declared property getter: - (id)bindingAdaptor;	// 0x300aba71
- (void)notifyBindingAdaptorObservers;	// 0x300abb31
- (void)releaseBindingAdaptor;	// 0x300abae9
@end

@interface NSObject (ATVBindingUtilities)
- (void)bind:(id)bind toObject:(id)object withKeyPath:(id)keyPath options:(id)options;	// 0x300abc85
- (id)optionsForBinding:(id)binding;	// 0x300abf01
- (void)unbind:(id)unbind;	// 0x300abe75
- (void)updateBoundValueForBinding:(id)binding;	// 0x300abb59
@end

@interface NSObject (ATVAutounbinderAccess)
- (id)_autounbinder;	// 0x300abf91
- (void)_setAutounbinder:(id)autounbinder;	// 0x300abfa1
@end

