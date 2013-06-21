/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, NSMutableDictionary;

@interface CPDumpEnum : NSObject {
	NSString *mTypeName;	// 4 = 0x4
	NSMutableDictionary *mValueToNameMap;	// 8 = 0x8
	NSMutableDictionary *mNameToValueMap;	// 12 = 0xc
}
- (id)initWithTypeName:(id)typeName pairs:(CPDumpEnumPair *)pairs;	// 0x34ce11f1
- (void)dealloc;	// 0x34ce1315
- (id)nameForValue:(long)value;	// 0x34ce13bd
- (id)typeName;	// 0x34ce138d
- (id)valueForName:(id)name;	// 0x34ce139d
@end
