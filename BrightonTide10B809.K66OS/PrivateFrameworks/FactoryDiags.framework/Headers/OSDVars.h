/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FactoryDiags.framework/FactoryDiags
 */

#import "FactoryDiags-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSArray;

@interface OSDVars : NSObject {
	NSMutableDictionary *_map;	// 4 = 0x4
	NSMutableDictionary *_aliases;	// 8 = 0x8
	NSMutableDictionary *_aliasesToResolve;	// 12 = 0xc
	BOOL _engMode;	// 16 = 0x10
	BOOL _color;	// 17 = 0x11
}
@property(readonly, assign, nonatomic) NSArray *aliases;	// G=0x33ef28d5; @dynamic
@property(assign, nonatomic) BOOL colorFailures;	// G=0x33ef34e1; S=0x33ef34f1; @synthesize=_color
@property(assign, nonatomic) BOOL engineeringMode;	// G=0x33ef34c1; S=0x33ef34d1; @synthesize=_engMode
+ (id)sharedVars;	// 0x33ef2899
- (id)init;	// 0x33ef28fd
- (unsigned)__iterateList:(void **)list withOMPair:(objMapPair)ompair andBlock:(id)block;	// 0x33ef2079
- (BOOL)_addAlias:(id)alias forProperty:(objc_property *)property andObject:(id)object;	// 0x33ef244d
- (unsigned)_addExports:(id)exports toOMPair:(objMapPair)ompair;	// 0x33ef2261
- (void)_addMappedInstance:(id)instance;	// 0x33ef1aa9
- (BOOL)_addMethod:(SEL)method toOMPair:(objMapPair)ompair;	// 0x33ef2055
- (BOOL)_addMethod:(SEL)method toOMPair:(objMapPair)ompair withName:(id)name;	// 0x33ef1ef9
- (unsigned)_addMethods:(objc_method **)methods toOMPair:(objMapPair)ompair freeList:(BOOL)list;	// 0x33ef2195
- (unsigned)_addProperties:(objc_property **)properties toOMPair:(objMapPair)ompair freeList:(BOOL)list;	// 0x33ef20e9
- (BOOL)_addProperty:(objc_property *)property toOMPair:(objMapPair)ompair;	// 0x33ef1c75
- (id)_checkIsQualifiedAndGetComponents:(id)components;	// 0x33ef15cd
- (id)_classMapForClassNamed:(id)classNamed create:(BOOL)create;	// 0x33ef18dd
- (id)_classMapForObject:(id)object create:(BOOL)create;	// 0x33ef1a2d
- (id)_execute:(id)execute;	// 0x33ef1731
- (id)_handlerForType:(const char *)type;	// 0x33ef1571
- (void)_interFailure:(id)failure method:(id)method desc:(id)desc;	// 0x33ef24dd
- (id)_invocationForAlias:(id)alias;	// 0x33ef1ba5
- (id)_invocationForName:(id)name isFullyQualified:(BOOL *)qualified;	// 0x33ef1c35
- (id)_invocationForQualifiedName:(id)qualifiedName;	// 0x33ef1bcd
- (id)_mappedInstanceForType:(Class)type;	// 0x33ef1b4d
- (id)_mappedProperty:(id)property forClassNamed:(id)classNamed;	// 0x33ef16f1
- (id)_methodMapForClassNamed:(id)classNamed;	// 0x33ef19f1
- (id)_methodMapForObject:(id)object;	// 0x33ef1a6d
- (BOOL)_objectIsMapped:(id)mapped;	// 0x33ef1689
- (BOOL)_typeIsMapped:(id)mapped;	// 0x33ef1645
- (BOOL)_typeIsValid:(const char *)valid;	// 0x33ef1531
- (BOOL)addAlias:(id)alias forPropertyNamed:(id)propertyNamed andClassNamed:(id)named;	// 0x33ef308d
- (unsigned)addMappedInstance:(id)instance;	// 0x33ef2ead
- (void)addMapping:(id)mapping;	// 0x33ef2a65
// declared property getter: - (id)aliases;	// 0x33ef28d5
// declared property getter: - (BOOL)colorFailures;	// 0x33ef34e1
- (void)dealloc;	// 0x33ef29c9
// declared property getter: - (BOOL)engineeringMode;	// 0x33ef34c1
- (id)interpolate:(id)interpolate;	// 0x33ef31d9
- (BOOL)removeMappedInstance:(id)instance;	// 0x33ef2c41
// declared property setter: - (void)setColorFailures:(BOOL)failures;	// 0x33ef34f1
// declared property setter: - (void)setEngineeringMode:(BOOL)mode;	// 0x33ef34d1
@end

