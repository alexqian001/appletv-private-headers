/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDKeyedObject.h"
#import "NSCopying.h"
#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class EDString;

@interface EDContentFormat : NSObject <EDKeyedObject, NSCopying> {
	EDString *mFormatString;	// 4 = 0x4
	unsigned mFormatId;	// 8 = 0x8
	bool mBuiltIn;	// 12 = 0xc
	bool mReferenced;	// 13 = 0xd
}
@property(assign) unsigned formatId;	// G=0x36a5b6d5; S=0x36b6833d; converted property
@property(assign) bool referenced;	// G=0x36bf1401; S=0x36a5b8cd; converted property
+ (id)contentFormatWithFormatString:(id)formatString;	// 0x36a5b565
+ (id)contentFormatWithFormatString:(id)formatString formatId:(unsigned)anId;	// 0x36a5b53d
+ (id)contentFormatWithNSString:(id)nsstring formatId:(unsigned)anId builtIn:(bool)anIn;	// 0x36a5b3d5
- (id)init;	// 0x36a5b5d1
- (bool)builtIn;	// 0x36bf13ed
- (id)copyWithZone:(NSZone *)zone;	// 0x36bf1389
- (void)dealloc;	// 0x36a6ca79
// converted property getter: - (unsigned)formatId;	// 0x36a5b6d5
- (id)formatString;	// 0x36a8729d
- (unsigned)hash;	// 0x36bf13c1
- (BOOL)isEqual:(id)equal;	// 0x36a60271
- (BOOL)isEqualToContentFormat:(id)contentFormat;	// 0x36a602cd
- (int)key;	// 0x36a5b8bd
// converted property getter: - (bool)referenced;	// 0x36bf1401
// converted property setter: - (void)setFormatId:(unsigned)anId;	// 0x36b6833d
// converted property setter: - (void)setReferenced:(bool)referenced;	// 0x36a5b8cd
@end

