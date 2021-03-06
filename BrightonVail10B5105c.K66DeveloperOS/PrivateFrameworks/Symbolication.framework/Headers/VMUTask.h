/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library

@class VMUMachTaskContainer, NSArray;
@protocol VMUMemory;

@interface VMUTask : NSObject {
	id<VMUMemory> _memory;	// 4 = 0x4
	VMUMachTaskContainer *_machTaskContainer;	// 8 = 0x8
	BOOL _isTranslated;	// 12 = 0xc
	NSArray *_headers;	// 16 = 0x10
}
@property(readonly, retain) NSArray *headers;	// G=0x34eb4a59; converted property
@property(readonly, assign) BOOL isTranslated;	// G=0x34eb49f9; converted property
+ (id)findDyldHeaderInMemory:(id)memory address:(unsigned long long)address;	// 0x34eb44b9
+ (BOOL)pidIsTranslated:(int)translated;	// 0x34eb44b1
+ (id)taskWithMachTaskContainer:(id)machTaskContainer;	// 0x34eb4681
- (id)initWithMachTaskContainer:(id)machTaskContainer;	// 0x34eb46bd
- (void)dealloc;	// 0x34eb4a69
// converted property getter: - (id)headers;	// 0x34eb4a59
// converted property getter: - (BOOL)isTranslated;	// 0x34eb49f9
- (id)memory;	// 0x34eb4a29
- (int)pid;	// 0x34eb4a09
- (unsigned)task;	// 0x34eb4a39
@end

