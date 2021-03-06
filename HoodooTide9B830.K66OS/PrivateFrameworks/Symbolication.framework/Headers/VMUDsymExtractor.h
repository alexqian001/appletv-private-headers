/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "VMUSymbolExtractor.h"


@interface VMUDsymExtractor : VMUSymbolExtractor {
}
+ (id)directoryForDsymBundle:(id)dsymBundle;	// 0x31bee865
+ (id)dsymExtractorWithMachOHeader:(id)machOHeader;	// 0x31bee361
+ (id)dsymPathForHeaderPath:(id)headerPath uuid:(id)uuid searchingDirectories:(id)directories;	// 0x31bee269
+ (id)fullHeaderPathForBaseBinaryDirectory:(id)baseBinaryDirectory oldHeaderPath:(id)path checkUUID:(id)uuid architecture:(id)architecture;	// 0x31bee69d
+ (id)localDsymPathForHeaderPath:(id)headerPath uuid:(id)uuid;	// 0x31bee26d
+ (id)spotlightDsymPathForHeaderPath:(id)headerPath uuid:(id)uuid;	// 0x31bee265
- (id)initWithMachOHeader:(id)machOHeader;	// 0x31bee39d
@end

