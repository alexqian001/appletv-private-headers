/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library
#import "Symbolication-Structs.h"

@class VMUMachTaskContainer, NSMutableArray, NSString, NSArray;

@interface VMUSymbolicator : NSObject {
	NSMutableArray *_symbolOwners;	// 4 = 0x4
	NSArray *_symbolOwnerAddressRanges;	// 8 = 0x8
	NSString *_path;	// 12 = 0xc
	VMUMachTaskContainer *_machTaskContainer;	// 16 = 0x10
	BOOL _isProtected;	// 20 = 0x14
}
@property(readonly, assign) BOOL isProtected;	// G=0x34d1dd01; converted property
@property(readonly, retain) NSString *path;	// G=0x34d1dcf1; converted property
@property(readonly, retain) NSMutableArray *symbolOwners;	// G=0x34d1dd9d; converted property
+ (id)convertHeaderToSymbolOwner:(id)symbolOwner allowLazySymbolOwners:(BOOL)owners;	// 0x34d20c5d
+ (void)ignoreFunctionSymbols:(BOOL)symbols;	// 0x34d20bf1
+ (BOOL)isIgnoreFunctionSymbols;	// 0x34d20c01
+ (id)symbolicatorForMachTaskContainer:(id)machTaskContainer;	// 0x34d1dfed
+ (id)symbolicatorForPath:(id)path architecture:(id)architecture;	// 0x34d1de95
+ (id)symbolicatorForPid:(int)pid;	// 0x34d1dfb1
+ (id)symbolicatorForSignature:(id)signature;	// 0x34d1e05d
+ (id)symbolicatorForSignature:(id)signature dsymSearchPaths:(id)paths useMds:(BOOL)mds;	// 0x34d211bd
+ (id)symbolicatorForTask:(unsigned)task;	// 0x34d1df75
+ (id)symbolicatorWithHeaders:(id)headers allowLazySymbolOwners:(BOOL)owners path:(id)path machTaskContainer:(id)container;	// 0x34d20d05
+ (id)symbolicatorWithSymbolOwners:(id)symbolOwners path:(id)path machTaskContainer:(id)container;	// 0x34d20e4d
+ (id)symbolicatorsForPath:(id)path;	// 0x34d1e555
- (id)initWithSymbolOwners:(id)symbolOwners path:(id)path machTaskContainer:(id)container;	// 0x34d20e95
- (BOOL)addSymbolRichFile:(id)file;	// 0x34d1e219
- (id)architecture;	// 0x34d1e865
- (BOOL)containsAddress:(unsigned long long)address;	// 0x34d1dd11
- (void)dealloc;	// 0x34d1e7b9
- (id)description;	// 0x34d1dde5
- (id)faultLazySymbolOwnerAtIndex:(int)index;	// 0x34d209a5
- (void)forceFullSymbolExtraction;	// 0x34d1e961
// converted property getter: - (BOOL)isProtected;	// 0x34d1dd01
// converted property getter: - (id)path;	// 0x34d1dcf1
- (int)pid;	// 0x34d1ddc5
- (id)programTextForAddress:(unsigned long long)address;	// 0x34d20c11
- (id)programTextForAddressRange:(VMURange)addressRange;	// 0x34d210c9
- (id)regionForAddress:(unsigned long long)address;	// 0x34d203a1
- (id)regions;	// 0x34d204e9
- (id)regionsForName:(id)name;	// 0x34d1ffd1
- (id)regionsInAddressRange:(VMURange)addressRange;	// 0x34d2016d
- (void)replaceSymbolOwner:(id)owner withSymbolOwner:(id)symbolOwner;	// 0x34d2067d
- (id)signature;	// 0x34d1ea89
- (id)sourceInfoForAddress:(unsigned long long)address;	// 0x34d1fd41
- (id)sourceInfos;	// 0x34d1f03d
- (id)sourceInfosInAddressRange:(VMURange)addressRange;	// 0x34d1ece5
- (id)symbolForAddress:(unsigned long long)address;	// 0x34d1fe89
- (id)symbolOwnerForAddress:(unsigned long long)address;	// 0x34d1dd31
- (id)symbolOwnerForName:(id)name;	// 0x34d1dd59
- (id)symbolOwnerForPath:(id)path;	// 0x34d1f32d
// converted property getter: - (id)symbolOwners;	// 0x34d1dd9d
- (id)symbolOwnersForName:(id)name;	// 0x34d1f651
- (id)symbolOwnersInAddressRange:(VMURange)addressRange;	// 0x34d1fb05
- (id)symbolOwnersWithFlags:(unsigned)flags;	// 0x34d1f4b9
- (id)symbols;	// 0x34d1f1b5
- (id)symbolsForMangledName:(id)mangledName;	// 0x34d1f80d
- (id)symbolsForName:(id)name;	// 0x34d1f989
- (id)symbolsInAddressRange:(VMURange)addressRange;	// 0x34d1ee91
@end
