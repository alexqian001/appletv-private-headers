/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface PBSlideState : NSObject {
	NSMutableDictionary *mBuildOrderMap;	// 4 = 0x4
	unsigned mCurrentGroupId;	// 8 = 0x8
}
- (id)init;	// 0x34807999
- (void)addBuild:(id)build order:(unsigned)order;	// 0x34a794ed
- (id)buildOrderMap;	// 0x34a79541
- (void)dealloc;	// 0x3488b319
- (unsigned)generateGroupId;	// 0x34a79551
- (void)reset;	// 0x34a794b5
@end

