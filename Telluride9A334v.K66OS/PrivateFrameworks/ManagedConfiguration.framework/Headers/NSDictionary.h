/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "ManagedConfiguration-Structs.h"
#import <NSDictionary.h> // Unknown library


@interface NSDictionary (MCUtilities)
- (id)MCDeepCopy;	// 0x3472ae1d
- (id)MCDeepCopyWithZone:(NSZone *)zone;	// 0x3472ae0d
- (id)MCMutableDeepCopy;	// 0x3472adf9
- (id)MCMutableDeepCopyWithZone:(NSZone *)zone;	// 0x3472ae4d
- (id)MCRetainOptionalNonZeroLengthStringKey:(id)key errorDomain:(id)domain invalidDataCode:(int)code invalidDataErrorString:(id)string outError:(id *)error;	// 0x3472b791
- (id)MCRetainOptionalObjectKey:(id)key type:(Class)type errorDomain:(id)domain invalidDataCode:(int)code invalidDataErrorString:(id)string outError:(id *)error;	// 0x3472b58d
- (id)MCRetainRequiredNonZeroLengthStringKey:(id)key errorDomain:(id)domain missingDataCode:(int)code missingDataErrorString:(id)string invalidDataCode:(int)code5 invalidDataErrorString:(id)string6 outError:(id *)error;	// 0x3472b649
- (id)MCRetainRequiredObjectKey:(id)key type:(Class)type errorDomain:(id)domain missingDataCode:(int)code missingDataErrorString:(id)string invalidDataCode:(int)code6 invalidDataErrorString:(id)string7 outError:(id *)error;	// 0x3472b495
@end

