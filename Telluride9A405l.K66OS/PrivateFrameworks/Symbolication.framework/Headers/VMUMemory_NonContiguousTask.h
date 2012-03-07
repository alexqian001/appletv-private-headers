/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "VMUMemory_Base.h"
#import "Symbolication-Structs.h"
#import "VMUMemory.h"

@class VMUMachTaskContainer, VMUArchitecture;

@interface VMUMemory_NonContiguousTask : VMUMemory_Base <VMUMemory> {
	VMUMachTaskContainer *_machTaskContainer;	// 4 = 0x4
	VMURange _addressRange;	// 8 = 0x8
	VMUArchitecture *_architecture;	// 24 = 0x18
}
@property(readonly, assign) VMURange addressRange;	// G=0x34f647cd; converted property
@property(readonly, retain) VMUArchitecture *architecture;	// G=0x34f647f1; converted property
@property(readonly, retain) VMUMachTaskContainer *machTaskContainer;	// G=0x34f647bd; converted property
+ (id)memoryWithMachTaskContainer:(id)machTaskContainer;	// 0x34f64915
+ (id)memoryWithMachTaskContainer:(id)machTaskContainer addressRange:(VMURange)range architecture:(id)architecture;	// 0x34f648b9
+ (id)memoryWithPid:(int)pid;	// 0x34f64a09
+ (id)memoryWithPid:(int)pid addressRange:(VMURange)range architecture:(id)architecture;	// 0x34f64985
- (id)initWithMachTaskContainer:(id)machTaskContainer addressRange:(VMURange)range architecture:(id)architecture;	// 0x34f64805
// converted property getter: - (VMURange)addressRange;	// 0x34f647cd
// converted property getter: - (id)architecture;	// 0x34f647f1
- (void)dealloc;	// 0x34f64a99
- (id)description;	// 0x34f64b11
- (BOOL)isContiguous;	// 0x34f64801
// converted property getter: - (id)machTaskContainer;	// 0x34f647bd
- (id)memoryAtAddress:(unsigned long long)address maxSize:(unsigned long long)size;	// 0x34f650f1
- (id)memoryFromSubRange:(VMURange)subRange mapToAddress:(unsigned long long)address architecture:(id)architecture;	// 0x34f64c15
- (VMURange)regionAtAddress:(unsigned long long)address minProtection:(int)protection;	// 0x34f65769
- (id)swappedView;	// 0x34f64b8d
- (id)view;	// 0x34f64bd1
@end
