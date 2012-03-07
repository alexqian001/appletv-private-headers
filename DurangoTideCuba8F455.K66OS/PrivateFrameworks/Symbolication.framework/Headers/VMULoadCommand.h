/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library


@interface VMULoadCommand : NSObject {
	unsigned long long _cmdSize;	// 4 = 0x4
	unsigned _command;	// 12 = 0xc
}
@property(readonly, assign) unsigned long long cmdSize;	// G=0x341217a1; converted property
+ (id)loadCommandWithMemory:(id)memory;	// 0x3412185d
- (id)initWithMemory:(id)memory;	// 0x341217d5
// converted property getter: - (unsigned long long)cmdSize;	// 0x341217a1
- (BOOL)isDyLinker;	// 0x341217bd
- (BOOL)isDySymTab;	// 0x341217b9
- (BOOL)isIDDyLib;	// 0x341217c5
- (BOOL)isLoadDyLib;	// 0x341217c1
- (BOOL)isSegment;	// 0x341217c9
- (BOOL)isSegment32;	// 0x341217cd
- (BOOL)isSegment64;	// 0x341217d1
- (BOOL)isSymTab;	// 0x341217b5
- (BOOL)isUUID;	// 0x341217b1
@end
