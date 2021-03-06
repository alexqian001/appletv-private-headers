/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface NSSQLStoreMappingGenerator : NSObject {
	NSMutableDictionary *_names;	// 4 = 0x4
}
+ (id)defaultMappingGenerator;	// 0x30eea65d
+ (void)invalidate;	// 0x30fbd71d
- (id)init;	// 0x30eea6a5
- (void)dealloc;	// 0x30fbd745
- (id)generateTableName:(id)name;	// 0x30eea701
- (id)newGeneratedPropertyName:(id)name;	// 0x30eec8e1
- (id)newUniqueNameWithBase:(unsigned short *)base withLength:(unsigned)length;	// 0x30eeca1d
- (id)uniqueNameWithBase:(id)base;	// 0x30eed5a1
@end

